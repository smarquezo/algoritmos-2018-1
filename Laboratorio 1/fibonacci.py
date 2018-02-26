from time import time
fib1=0
fib2=1
i=2
n= int(input("Ingrese el n: "))
tinicial= time()

if n <=1:
    print(n)
else:
    for i in range(n-1):
        print(fib2)
        fib2=fib1+fib2
        fib1=fib2-fib1
tfinal=time()
ttotal=tfinal-tinicial
print("tiempo de ejecucion : ",ttotal)