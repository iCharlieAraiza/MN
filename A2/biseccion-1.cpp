#include <iostream>
#include <math.h>

#define f(x) (-0.5*x*x+2.5*x+4.5)

using namespace std;

double bisect( float x1, float xu, float es, float imax, float xr, int iter, double ea);

int main()
{
    cout << bisect(5,7,3,10,5,6,0.001);

    return 0;
}

double bisect( float x1, float xu, float es, float imax, float xr, int iter, double ea){
    iter = 0;
    float xrold;
    float test;
    do{
        xrold = xr;
        xr = (x1+xu)/2;
        //cout << "Iteración: "<< iter << endl;
        //cout << "X1: "<<x1<<endl;
        //cout << "Xu: "<<xu<<endl;
        //cout << "Xr: "<<xr<<endl;
        iter++;
        if(xr != 0){
            ea = abs((xr-xrold)/xr)*100;
        }
        test = f(x1)*f(xr);
        cout <<test<<endl;
        if(test <0.0f ){
            xu = xr;
        }else if(test >0){
          x1 = xr;  
        }else{
            ea = 0;
        }
        //cout << endl;
    }while(ea > es || iter <= imax);
    return xr;
}

