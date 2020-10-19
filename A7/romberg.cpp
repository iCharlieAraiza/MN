#include <iostream>
#include<math.h>

#define f(x) 1/(1+pow(x,2))

using namespace std;

double TrapEq (int n, int a, int b);
double Romberg(int a, int b,int maxint);

int main(){
    cout << "El resultado del integrador de Romberg es " << Romberg(1,6,9);
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

double Romberg(int a, int b,int maxint){
    double I[10][10];
    int n =1;
    I[1][1] =TrapEq(n,a,b);
    int iter = 0;
    for(int i = 1; i <maxint; i++){
        iter++;
        n = pow(2,iter);
        for(int k = 2; k < maxint; k++){
            double j = 2 + iter - k;
            I[i][k] = (pow(4,k-1)*I[i+1][k-1]-I[i][k-1]) / (pow(4,k-1)-1);
        }
    }
    return I[10][iter+1];
}
