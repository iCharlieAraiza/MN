#include<iostream>
#include<iomanip>
#include<math.h>
#define f1(x,y,z)  (14+2*y+z)/9
#define f2(x,y,z)  (1-2*x-3*y)/33
#define f3(x,y,z)  (-1+3*x+y)

using namespace std;
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e = 0.01;
 int sum=1;
 cout<< setprecision(6)<< fixed;
 cout << "Método de Jacobi"<<endl<<endl;

 
 
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  cout<< x1<<" y: "<< y1<<" z: "<< z1<< endl;

  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  sum++;

  x0 = x1, y0 = y1, z0 = z1;
 }while(e1>e && e2>e && e3>e);
 return 0;
}
