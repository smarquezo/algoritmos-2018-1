import java.util.*;
 public class matrices{
     public static void main (String[]Args){
    	 Scanner scan = new Scanner (System.in);
    	 
    	 System.out.println("ingrese el tamano de la matriz");
    	 int n=scan.nextInt();
    	 
    	 int matriza[][] = new int [n][n];
         int matrizb[][] = new int [n][n];
         int matrizc[][] = new int [n][n];
         int i, j;
         double tiempo_inicial;
         double tiempo_final; 
         double tiempo_total;
         
         
         
         System.out.println("Datos de la Matriz A :");
         
         for (i=0; i<n; i++){
             for (j=0; j<n; j++){
                 System.out.print("Escribir valor " + i + " , " + j + " : ");
                 matriza [i][j]= scan.nextInt();
                }
            }
            
            System.out.println("Datos de la Matriz B :");
            
            for (i=0; i<n; i++){
             for (j=0; j<n; j++){
                 System.out.print("Escribir valor " + i + " , " + j + " : ");
                 matrizb [i][j]= scan.nextInt();
                }
            }
            tiempo_total = 0.0;
            tiempo_inicial = System.currentTimeMillis();
            for (i=0; i<n; i++){
             for (j=0; j<n; j++){
                 matrizc [i][j]= matriza[i][j]*matrizb[i][j];
                }
            }
            tiempo_final = System.currentTimeMillis();
            tiempo_total = tiempo_final - tiempo_inicial;
            
            System.out.println("Matriz resultante de la multiplicación :");
            
    for (i=0;i<n;i++){
            for (j=0;j<n;j++) {
                System.out.print(matrizc[i][j] + " ");
            }
            System.out.println("");
        }
        System.out.println("Tiempo de ejecucion: "+ tiempo_total/1000);

    }
}
