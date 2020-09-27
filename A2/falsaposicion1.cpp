#include <iostream>
#include <math.h>

#define f(x)  4*x*x+x-9

using namespace std;

double bisect( float x1, float xu, float es, int imax, float xr, int iter, int ea);

int main()
{
    cout << bisect(0,2,0.1,20,5,20,0.01);

    return 0;
}

double bisect( float x1, float xu, float es, int imax, float xr, int iter, int ea){
    iter = 0;
    float fi = f(x1);
    float fr;
    float xrold;
    float test;
    
    do{
        xrold = xr;
        xr = (x1 + xu) / 2;
        fr = f(xr);
       
        iter = iter + 1;
        if(xr !=0){
            ea = abs((xr-xrold)/xr) * 100;
        }
        test = fi*fr;
        
        cout<<test<<endl;
        if(test < 0){
            xu = xr;
        }else if(test > 0){
            x1 = xr;
            fi = fr;
        }else{
            ea = 0;
        }
    }while(ea >es || iter <= imax);
    return xr;
}
