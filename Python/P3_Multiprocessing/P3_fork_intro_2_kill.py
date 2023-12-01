from os import fork, kill
from time import sleep

# global variable, will not be shared among different forks
num = 0

# Methods to increase
def incr():
    global num
    while num < 300000:
        num += 1
        print("Number is", num)
        
# Returns 0 in child process, returns pid in parent process
pid = fork()
if pid == 0:
    # Child process
    incr()
    print("Child process is closing")
    exit(0)
else:
    # Parent process
    # Wait 3 sec and kill child
    sleep(3)
    # Process id, Signal number
    print("\nTime up, killing child process\n")
    kill(pid, 9)
    # Parent process will return to system with 0
    print("\nChild closed")
    print("Closing parent process")
    exit(0)
