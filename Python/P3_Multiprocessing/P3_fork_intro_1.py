from os import fork

# global variable, will not be shared among different forks
num = 0

# Methods to increase and decrease while printing it
def incr():
    global num
    while num < 30000:
        num += 1
        print("Number is", num)
def decr():
    global num
    while num > -300:
        num -= 1
        print("Number is", num)
        
# Returns 0 in child process, returns pid in parent process
if fork() == 0:
    # Child process
    incr()
    print("Child process is closing")
    # Child will continue running even after parent is closed
    exit(0)
else:
    # Parent process
    decr()
    print("Parent process is closing")
    # Parent process will return to system with 0
    exit(0)
