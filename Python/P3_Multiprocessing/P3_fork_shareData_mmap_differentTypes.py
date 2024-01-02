from mmap import mmap
from os import fork
from time import sleep
import struct

# 100 bytes of anonymous data file in ram
buffer_size = 100
sharedSpace = mmap(-1, buffer_size)

# Create child process
childPid = fork()

if childPid == 0:
    # Child process
    sleep(.5)
    # Go to beginning of file
    sharedSpace.seek(0)
    bytes_data = sharedSpace.read()
    # Reading integer from bytes
    Number = int.from_bytes(bytes_data)
    print("Child byte number :", bytes_data)
    print("Child read number :", Number)
    sleep(.5)
    
    # Float data
    sharedSpace.seek(0)
    bytes_data = sharedSpace.read()
    # Struct unpack to float from bytes, 4 bytes are needed as input
    Number = struct.unpack("<f", bytes_data[:4])
    print("Child byte number :", bytes_data)
    print("Child read number :", Number)
else:
    # Parent process
    sharedSpace.seek(0)
    # Write integer, we have 100 bytes of buffer, so any big number will work
    Number = 12345678910
    print("Parent write number :", Number)
    sharedSpace.write(Number.to_bytes(length=buffer_size))
    sleep(.5)
    sharedSpace.seek(0)
    # Writing float, we need to pack float to bytes
    Number = 12345.678910
    print("Parent write number :", Number)
    print("Parent write hex :", Number.hex())
    # This will pack float number to 4 bytes
    bytes_to_write = struct.pack("<f", Number)
    print("Parent write bytes :", bytes_to_write)
    # First 4 bytes of buffer are used to store float
    sharedSpace.write(bytes_to_write)
    
    