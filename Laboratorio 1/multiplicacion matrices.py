from time import time
print('Ingresar orden de la Matriz 1')
filas1 = int(input())
columnas1 = filas1
print('Ingresar orden de la Matriz 2')
filas2 = int(input())
columnas2 = filas2
if (columnas1==filas2):
    matriz1 = []
    for i in range(filas1):
        matriz1.append( [0] * columnas1 )
    matriz2 = []
    for i in range(filas2):
        matriz2.append( [0] * columnas2 )
    print ('Ingresar Matriz 1')
    for i in range(filas1):
        for j in range(columnas1):
            matriz1[i][j] = int(input('Elemento (%d,%d): ' % (i, j)))
    print ('Ingresar Matriz 2')
    for i in range(filas2):
        for j in range(columnas2):
            matriz2[i][j] = int(input('Elemento (%d,%d): ' % (i, j)))
    print ("suma o multiplicacion (ingrese 1 o 2): ")
    op=int(input())
    t_inicial = time()
    if (op == 1):
        matriz3 = []
        for i in range(filas1):
            matriz3.append([0] * columnas1)
        for i in range(filas1):
            for j in range(columnas1):
                matriz3[i][j] += matriz1[i][j] + matriz2[i][j]
        t_final = time()
        print('Su matriz resultante es')
        print (matriz3)
    else:
        matriz3 = []
        for i in range(filas1):
            matriz3.append( [0] * columnas2 )
        for i in range(filas1):
            for j in range(columnas2):
                for k in range(filas2):
                    matriz3[i][j] += matriz1[i][k] * matriz2[k][j]
        t_final = time()
        print ('resultado de la multiplicacion')
        print (matriz3)
    ttotal= t_final - t_inicial
    print("tiempo de ejecucion : ",ttotal)
else:
    print ('dimensiones incompatibles')