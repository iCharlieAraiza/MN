#include<iostream>
#include<iomanip>
#include<math.h>


#define f1(x,y,z)  (3*y-2*z-3)
#define f2(x,y,z)  (-5*x+z+13)/6
#define f3(x,y,z)  (8-4*x+y)/3

using namespace std;


int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int cont=1;

 cout << "Solución de ecuaciones por el método de Jacobi"<<endl;
 for(int i = 0; i < 50; i++)
    cout<<"=";
 cout<<"\n\n";
 e = 0.01;

 cout<< setprecision(6)<< fixed;
 
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  cout<< cont<<"\tx: "<< x1<<" y: "<< y1<<" z: "<< z1<< endl;

  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  cont++;

  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 cout<< endl<<"La solución del sistema con un error de 0.01 es:\nx = "<< x1<<", y = "<< y1<<" and z = "<< z1;
 return 0;
}
