#include <iostream>

using namespace std;

unsigned long long int fibo (int n) {
	unsigned long long int fib1;
	unsigned long long int fib2;
	fib1=0;
	fib2=1;

	if(n<=1){
        cout<<n<<endl;
    }else{
        for(int i=2; i <=n; i++){
            cout<<fib2<<endl;
            fib2=fib2+fib1;
            fib1=fib2-fib1;
        }
    }
}
/*int n=2;
int fib1=0;
int fib2=1;
*/
int main()
{
    unsigned long long int resul;
    int fib;
    cout<<"Ingrese el n: "<<endl;
    cin>>fib;
    resul = fibo(fib);
    return 0;
    
    
   /* while(fib2 > 0){
        fib2=fib2+fib1;
        fib1=fib2-fib1;
        n += 1;
    }
    cout << "Overflow para n = " << n-1 << endl;
    */
}
/*
Overflow:
- Int = 47
- Long = 93
*/
