#include <iostream>
#include<math.h>

#define f(x) 1/(1+pow(x,2))

using namespace std;

double TrapEq (int n, int a, int b);

int main()
{
    cout<<"El resultado es " << TrapEq(6,0,6);
    return 0;
}

double TrapEq (int n, int a, int b){
    double h = (b-a)/n;
    double x = a;
    double sum = f(x);
    
    for(int i = 1; i<=n-1; i++){
        x = x+h;
        sum = sum + 2*f(x);
    }
    
    sum = sum + f(b);
    return (b-a)*sum / (2*n);
}
