import multiprocessing
import time
num = 0

# Example method to print
def printSomething(text):
    print("This is executed on separate process")
    return

# Method to increase global var
def just_increase():
    global num
    print("Started increasing")
    while num < 3:
        print("Increase process number :",num)
        num += 1

# Method to decrease global var
def just_decrease():
    global num 
    print("Started decreasing")
    while num > -3:
        print("Decrease process number :",num)
        num -= 1
    
# Main driver method
def main():
    # Shared variable
    global num 

    # Process create
    p = multiprocessing.Process(target=printSomething, args=["This is example text"])
    # Process start
    p.start()
    
    # Create multiple processes
    # This process will have separate context,
    # So global num will be different for each of following process
    p1 = multiprocessing.Process(target=just_increase)
    p2 = multiprocessing.Process(target=just_decrease)
    p3 = multiprocessing.Process(target=just_increase)
    p4 = multiprocessing.Process(target=just_decrease)
    # Start them
    p1.start()
    p2.start()
    p3.start()
    p4.start()
    
    # No num will be changed
    print("\nMain process: Current number is :", num)
    print("\nFinishing main method\n")
    
    
main()