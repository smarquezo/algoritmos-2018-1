#include <iostream>
#include <time.h>
using namespace std;

int main(){
    clock_t t;
    int n;
    cout<<"Ingrese el tamano de la matriz n: "<<endl;
    cin>>n;
    int i, j, k, a[n][n], b[n][n], c[n][n];
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout << "Ingresar Matriz A [" << i << "]["
                << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout<<endl;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout << "Ingresar Matriz B [" << i << "]["
                << j << "]: ";
            cin >> b[i][j];
        }
    }
  t = clock(); 
  for(i=0;i<n;i++){ 
      for(j=0;j<n;j++){
          c[i][j]=0;
          for(k=0;k<n;k++){
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
          }
      }
  }
  t = clock() - t;
  float ttotal = t;
  cout << endl << "Matriz C (Matriz A*B)." << endl;
  cout << endl;
  for(i=0;i<n;i++){ 
      for(j=0;j<n;j++){
          cout << c[i][j] << " ";
          if(j==2)
          cout << endl << endl;
      }
  }
  
  cout<< ("Tiempo de ejecucion: " ,((float)t)/CLOCKS_PER_SEC);
  return 0;
}
