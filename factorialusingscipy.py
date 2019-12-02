import time
from scipy.special import factorial
n = int(input('Enter an integer')) 
start= time.time()
fact = factorial(n)
end= time.time()
print("Factorial of",n,"is",fact)
print("The time is",end-start,"sec")
