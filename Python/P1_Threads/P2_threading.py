from collections.abc import Callable, Iterable, Mapping
import threading
from typing import Any

class myThread(threading.Thread):
    def __init__(self, name, count):
        # this line is needed
        threading.Thread.__init__(self)
        self.name = name
        self.count = count
    # start calls this method
    def run(self):
        print("Starting count by thread " + self.name)
        for i in range (self.count):
            print("\nThread "+self.name, i)
        print("\nEnding count by thread " + self.name)

# creation of threads
t1 = myThread("T1", 10000)
t2 = myThread("T2", 10000)
t3 = myThread("T3", 10000)

t1.start()
t2.start()
t3.start()

t1.join()
t2.join()
t3.join()

print("Exiting main thread")