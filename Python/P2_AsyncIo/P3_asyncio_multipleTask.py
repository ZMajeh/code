# asyncio will provide a way to run async methods
import asyncio
# time to get time in format of HH:mm:ss
import time

glob = 0
flag = False

# This method will just increase global variable
async def just_increase():
    # Access global shared variable
    global glob, flag
    for i in range(10000000):
        await asyncio.sleep(0)
        glob += 1
    # To inform show output to stop
    flag = True
    print("Just increase is done, exiting")

# This method will show output, after every 3 seconds
async def show_output():
    global flag, glob
    while True:
        await asyncio.sleep(3)
        print("Current number is :", glob)
        # Stop when just_increase is done
        if flag:
            print("Output shower is done, exiting")
            return

# This is driver
async def myMethod():
    global glob
    # Running multiple tasks simultaneously
    task1 = asyncio.create_task(just_increase())
    task2 = asyncio.create_task(show_output())
    # Suspend current execution for moment, to start above task
    await asyncio.sleep(1)
    # Wait for all tasks to end
    await task1
    await task2
    # Finish up
    print("Final number :", glob)
    print("Main method is done, exiting to system")

# Following method will get executed in separate thread
asyncio.run(myMethod())

