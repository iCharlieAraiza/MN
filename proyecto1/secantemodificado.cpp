#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;

#define f(x) (0.95*x*x*x)-5.9*x*x+(10.9*x-6)

int main()
{
    float xi = 3.5, d = 0.01;
    int n = 0;
    
	cout<<"Solución por método de la secante modificado"<< endl;
	cout<<"==================================0"<< endl;
    do{
        xi = xi-( (f(xi))/f(xi+d)-f(xi) );
        cout<< f(xi+d) <<endl;
        n++;
    }while(n < 3);

    return 0;
}
