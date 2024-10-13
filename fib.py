import time 

def fib(n):
    if n <= 1:
        return n 
    return fib(n-1) + fib(n-2)


num = int(input("Enter a number to calculate fib(n) in python: "))
start_time = time.time()
print(fib(num))
print(f"Seconds Taken: {time.time()-start_time}")
