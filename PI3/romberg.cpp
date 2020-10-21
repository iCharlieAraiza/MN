#include <iostream>

using namespace std;

void iteracion1(float* res);
void iteracion2(float* res);
void iteracion3(float* res);
void iteracion4(float* res);

int main()
{
    float res[4];
    
    res[0] = 0;
    res[1] = 2.4;
    res[2] = 26;
    res[3] = 28.54;

    
    iteracion1(res);


    cout <<endl<< "Nivel número 2 "<<endl;
    for(int i = 0; i <3; i++){
        cout << res[i]<<endl;
    }
    
    iteracion2(res);
    
    cout <<endl<< "Nivel número 3 "<<endl;
    for(int i = 0; i <2; i++){
        cout << res[i]<<endl;
    }
    
    iteracion3(res);    
    
    cout <<endl<< "Nivel número 4"<<endl;
    cout << res[0]<<endl;
    
    cout << "Error: "<<1<< endl;
    
    cout <<endl<< "Nivel número 5"<<endl;
    
    return 0;
}

void iteracion1(float* res){
    for(int i = 0; i <3; i++){
        res[i] = ((1.3333333)*res[i+1]) - ((0.33333)*res[i]); 
    }
}

void iteracion2(float* res){
    for(int i = 0; i <2; i++){
        res[i] = ((1.066666)*res[i+1]) - ((0.06666)*res[i]); 
    }
}

void iteracion3(float* res){
    res[0] = ((1.015873)*res[1]) - ((0.015873)*res[0]); 
}

void iteracion4(float* res){
    res[0] = ((1.015873)*res[1]) - ((0.015873)*res[0]); 
}
