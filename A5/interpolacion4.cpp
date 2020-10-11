#include<iostream>

using namespace std;

int main()
{
	 double x[6], y[6], xp = 10, yp=0, p;
	 int i,j,n;
    
    n = 5;
    
    x[1] = 1;
    x[2] = 3;
    x[3] = 5;
    x[4] = 7;
    x[5] = 13;
    
    
    y[1] = 800;
    y[2] = 2310;
    y[3] = 3090;
    y[4] = 3940;
    y[5] = 4755;

	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 cout<< endl<<"El valor de "<< xp<< " es "<< yp;

	 return 0;
}
