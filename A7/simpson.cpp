#include <iostream>
#include<math.h>

#define f(x) 1/(1+pow(x,2))

using namespace std;

double SimpEq (int n, int a, int b);

int main()
{
    cout<<"El resultado es " << SimpEq(6,0,6);
    return 0;
}

double SimpEq (int n, int a, int b){
    double h = (b-a)/n;
    double x = a;
    double sum = f(x);
    
    for(int i = 1; i<=n-2; i++){
        x = x + h;
        sum = sum + 4*f(x);
        x = x + h;
        sum = sum + 2 * f(x);
    }
    
    x = x + h; 
    sum = sum + 4 * f(x);
    sum = sum + f(b);
    return (b-a)*sum / (3*n);
}
