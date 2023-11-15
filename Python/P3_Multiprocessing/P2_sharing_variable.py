from multiprocessing import Process, Manager

# Method to increase shared var
def just_increase(sharedNum):
    print("Started increasing")
    while sharedNum.value < 30:
        print("Increase process number :",num)
        sharedNum.value += 1

# Method to decrease shared var
def just_decrease(sharedNum): 
    print("Started decreasing")
    while sharedNum.value > -30:
        print("Decrease process number :",num)
        sharedNum.value -= 1

# This is multiprocessor manager
myManager = Manager()

# This num is a shared variable
num = myManager.Value('num', 0)
p1 = Process(target=just_increase, args=(num,))
p2 = Process(target=just_decrease, args=(num,))

# Start the process
p1.start()
p2.start()

# Wait for the process to finish
p1.join()
p2.join()