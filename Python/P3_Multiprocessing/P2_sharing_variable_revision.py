# Get Process and Manager
from multiprocessing import Process, Manager

# Method to increment
def f1(sharedVar, step):
    while sharedVar.value < 1000:
        sharedVar.value += step
        print("Increased value :", sharedVar.value)

# Method to decrement
def f2(sharedVar, step):
    while sharedVar.value > -1000:
        sharedVar.value -= step
        print("Decreased value :", sharedVar.value)

# Create shared data
sharingManager = Manager()
var1 = sharingManager.Value('test1', 0)

# Race between increment and decrement process
p1 = Process(target=f1, args=(var1, 2))
p2 = Process(target=f2, args=(var1, 2))
p3 = Process(target=f1, args=(var1, 2))
p4 = Process(target=f2, args=(var1, 2))

# Start the process
p1.start()
p2.start()
p3.start()
p4.start()

# Wait for process to finish which should be ideally never
# As every process is increasing and decreasing same value
# Shared number 0 mean every created process is getting same time.
# Shared number far from 0 mean either you have less processors or 1 processor and context switching is happening wrongly
p1.join()
p2.join()
p3.join()
p4.join()
