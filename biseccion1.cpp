#include <iostream>
#include <math.h>

#define f(x) (-265*x+150*(x-2)+300*(x-4.5))

using namespace std;

double bisect( float x1, float xu, float es, float imax, float xr, int iter, double ea);

int main()
{
    cout<<"Programa 1"<<endl;
    cout<<"==============="<<endl;
    
    cout << "Resultado: "<< bisect(7,9,3,11,5,6,0.001);

    return 0;
}

double bisect( float x1, float xu, float es, float imax, float xr, int iter, double ea){
    iter = 0;
    float xrold;
    float test;
    do{
        xrold = xr;
        xr = (x1+xu)/2;
        cout <<iter <<endl;
        cout <<"x1: "<<x1<<endl;
        cout <<"xu: "<<xu<<endl;
        cout <<"xr: "<<xr<<endl;
        iter++;
        if(xr != 0){
            ea = abs((xr-xrold)/xr)*100;
        }
        test = f(x1)*f(xr);
        if(test <0.0f ){
            xu = xr;
        }else if(test >0){
          x1 = xr;  
        }else{
            ea = 0;
        }
        cout << endl;
    }while(ea > es || iter <= imax);
    return xr;
}
