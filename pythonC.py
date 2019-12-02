import ctypes
import time
n = int(input("Enter an integer"))
so_file = "factorial.so"
fact = ctypes.CDLL(so_file)
start = time.time()
a = fact.factorial(n)
end = time.time()
print("Factrial of",n,"is",a)
print("cpu times used =",end-start,"sec")
