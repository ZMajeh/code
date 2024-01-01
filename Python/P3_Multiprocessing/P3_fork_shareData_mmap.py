from os import fork
from mmap import mmap
from time import sleep
from sys import getsizeof as sizeof

# This is shared memory method.
# This will map data to file
# -1 will create anonymous memory, which can be shared between forked processes.
data = mmap(-1, 100)
# This will allocate 100 bytes of anonymous memory in ram.
# We can also provide file descriptor instead of -1. To share actual opened file.
data.write(b"Hello")

# Create child process
child = fork()
if child == 0:
    # child process
    # Blindly read 5 bytes
    print("First 5 bytes of initial data: ", data[:5])
    # Wait some time for parent to modify data
    sleep(1)
    # Read complete buffer from start, also read null values if present.
    print("Reading changed data using [:] (100 bytes as buffer size in this example): ", str(data[:]))
    sleep(.1)
    data.seek(0)
    # Read complete buffer, also read null values if present.
    print("Reading changed data using read() (100 bytes as buffer size in this example): ", str(data.read()))
    data.seek(0)
    # Read available buffer, ignore null values if present.
    print("Reading changed data using read().decode() (ignore Null data): ", data.read().decode())
else:
    # Parent process
    sleep(.1)
    # Seek file to beginning
    data.seek(0)
    # Change shared data
    data.write(b"This is changed by parent")
    data.close()
    # Parent do not need to wait for child to finish.
    # Parent will return