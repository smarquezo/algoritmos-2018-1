#include <iostream>

using namespace std;

int main()
{
    int n;
    int fib1=0;
    int fib2=1;
    cout<<"Ingrese el n: "<<endl;
    cin>>n;
    if(n<=1){
        cout<<n<<endl;
    }else{
        for(int i=2; i <=n; i++){
            cout<<fib2<<endl;
            fib2=fib2+fib1;
            fib1=fib2-fib1;
        }
    }
    

    return 0;
}

