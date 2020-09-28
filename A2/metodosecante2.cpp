#include <bits/stdc++.h> 
using namespace std; 
#define f(x)  (4*x*x+x-9)

void secante(float x1, float x2, float E){ 
    float n = 0, xm, x0, c; 
    cout<< endl<<"*********************"<< endl;
	cout<<"Solución por método de la secante"<< endl;
	cout<<"*********************"<< endl;
    
    if (f(x1) * f(x2) < 0) { 
        do { 

            x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 
  
            c = f(x1) * f(x0); 
  
            x1 = x2; 
            x2 = x0; 
            
            cout<<"Iteración "<< ++n<<":\t x = "<< setw(10)<< x1<<" y f(x) = "<< setw(10)<< f(x1)<< endl;
            
            if (c == 0) 
                break; 
            xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 
        } while (n<3); 
        cout << endl<< "La raíz es = " << x0 << endl; 
    }
} 
  

int main() 
{ 

    float x1 = 1, x2 = 2 , E = 0.0001; 
    
    secante(x1, x2, E); 
    
    return 0; 
} 
