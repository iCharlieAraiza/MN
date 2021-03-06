float simpsonCompuesto(float tabla[6][2]);

int main()
{
    float tabla[6][2];
    
    tabla[0][0] = 0.31;
    tabla[0][1] = 6480;
    
    tabla[1][0] = 0.323;
    tabla[1][1] = 8640;
    
    tabla[2][0] = 0.333;
    tabla[2][1] = 5040;
    
    tabla[3][0] = 0.3437;
    tabla[3][1] = 8640;
    
    tabla[4][0] = 0.3645;
    tabla[4][1] = 7560;
    
    tabla[5][0] = 0.3854;
    tabla[5][1] = 3240;

    cout << "El resultado es: "<< simpsonCompuesto(tabla);

    return 0;
}

float simpsonCompuesto(float tabla[6][2]){
    float I1, I2;
    
    I1 = (tabla[3][0]-tabla[0][0])*((tabla[0][1]+3*tabla[1][1]+3*tabla[2][1]+tabla[3][1])/8);
    I2 = (tabla[5][0]-tabla[3][0])*((tabla[3][1]+4*tabla[4][1]+tabla[5][1])/6);
    
    return I1+I2;
}
