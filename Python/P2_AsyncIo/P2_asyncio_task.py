# asyncio will provide a way to run async methods
import asyncio
# time to get time in format of HH:mm:ss
import time

glob = 0

async def just_increase():
    # Access global shared variable
    global glob
    for i in range(10000000):
        await asyncio.sleep(0)
        glob += 1

# This is driver
async def myMethod():
    global glob
    # Running something simultaneously
    task = asyncio.create_task(just_increase())
    # Suspend current execution for moment, to start above task
    await asyncio.sleep(1)
    print("Current number :", glob)
    print("This will run first without waiting for above method")
    for i in range(10):
        # Sleep is like context switch in asyncio.
        # Asyncio will suspend sleep task, and start executing any available task
        await asyncio.sleep(1)
        print("Current number :", glob)
    # Wait for thread to finish
    await task
    print("Final number :", glob)

# Following method will get executed in separate thread
asyncio.run(myMethod())

