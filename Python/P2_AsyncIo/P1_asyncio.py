# asyncio will provide a way to run async methods
import asyncio
# time to get time in format of HH:mm:ss
import time

# This method will wait some time and print provided text
async def print_after(delay, text):
    await asyncio.sleep(delay)
    print(text)

# This is driver
async def myMethod():
    print(f"Started at {time.strftime('%X')}")
    # Here await will make execution to wait till print_after finished executing
    await print_after(2, 'hello')
    await print_after(2, 'world')
    print(f"Finished at {time.strftime('%X')}")

# Following method will get executed in separate thread
asyncio.run(myMethod())

# Any method with keyword async, will not get executed by calling it normally.
# Instead, it will create object in place.
# asyncio.run(Object) can be used to run this from outside of execution loop
