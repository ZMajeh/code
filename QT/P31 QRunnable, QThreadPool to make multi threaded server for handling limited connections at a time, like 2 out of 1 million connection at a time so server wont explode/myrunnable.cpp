#include "myrunnable.h"

MyRunnable::MyRunnable(QObject *tmp)
{
}
// Its exactly same as thread, but here we need to override method run
void MyRunnable::run()
{
    // No ID, mean no connection
    if(!id)return;
    // This is socket for incomming connection
    QTcpSocket socket;
    // Id can be used to connect socket to incomming connection
    socket.setSocketDescriptor(id);
    // Write something to client
    socket.write("Thanks for connecting Anand's server");
    // Fix the writes
    socket.flush();
    // Wait till write is done
    socket.waitForBytesWritten(1000);
    // Wait untill client give back acknoledgement b4 closing connection, Its for testing, so connection will stay alive unless client give some input
    socket.waitForReadyRead();
    // Close connection with socket
    socket.close();
}
