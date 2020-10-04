#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

void inicializarMatriz(float a[3][3], float b[3]);
 
int main(void)
{
    float a[3][3], b[3], x[3] = {0}, y[3] = {0};
    int n = 3, imax = 25, i = 0, j = 0, cont = 1;
    char c;

    inicializarMatriz(a, b);
    
     cout << "Solución de ecuaciones por el método de Gauss-Seidel"<<endl;
     for(int i = 0; i < 50; i++)
        cout<<"=";
        
     cout<<"\n\n";
     
     cout<< setprecision(6)<< fixed;

    while (imax > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
             
            c = i == 0 ? 'x' : i == 1 ? 'y' : 'z';

            cout << c <<": "<< y[i] << "    "; 

        }
        cont++;
        cout << "\n";
        imax--;
    }
    
    cout<< endl<<"La solución del sistema con un error de 0.01 es:\nx = "<< y[0]<<", y = "<< y[1]<<" and z = "<< y[2];

    return 0;
}


void inicializarMatriz(float a[3][3], float b[3]){
    a[0][0] = 9;
    a[0][1] = 2;
    a[0][2] = -1;
    b[0]    = -2;
    
    a[1][0] = 7;
    a[1][1] = 8;
    a[1][2] = 5;
    b[1]    = 3; 
    
    a[2][0] = 3;
    a[2][1] = 4;
    a[2][2] = -10;
    b[2]    = 6;
}

