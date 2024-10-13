import time 
MAX_N = 50

def fib(n):
    if n <= 1:
        return n 
    return fib(n-1) + fib(n-2)

num = int(input("Enter a number to calculate fib(n) in python: "))
while (num > MAX_N or num < 0):
    num = int(input("Enter an integer 0 <= n <= {MAX_N}: "))

start_time = time.time()
print(fib(num))
print(f"Seconds Taken: {time.time()-start_time}")
