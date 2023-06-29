import _thread

glob = 0
def fun():
    for i in range(100):
        print(i)
    # Access global shared variable
    global glob
    glob = 1

t1 = _thread.start_new_thread(fun, ())
while glob == 0:pass