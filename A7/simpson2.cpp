#include<iostream>
#include<cmath>
#define f(x) (x*sin(x))

float SimpEq(float a, float b, int n);

using namespace std;

int main()
{

	cout<<"El resultado por el método de Simpson es: "<<SimpEq(1,4,8)<<endl;

	return 0;
}

float SimpEq(float a, float b, int n){
	float h, x[n+1], sum = 0;
	int j;
	h = (b-a)/n;
	
	x[0] = a;
	
	for(j=1; j<=n; j++){
		x[j] = a + h*j;
	}
	
	for(j=1; j<=n/2; j++){
		sum += f(x[2*j - 2]) + 4*f(x[2*j - 1]) + f(x[2*j]);
	}
	
	return sum*h/3;
}
