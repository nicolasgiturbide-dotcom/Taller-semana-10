#include <iostream>
using namespace std;
int main(){
	int a;
	int cont=0;
	cout<<"Ingresa un numero entero positivo para dividirlo para 2: ";
	cin>>a;
	while(a>!0){
		a=a/2;
		cont++;
		cout<<"Division "<<cont<<":"<<a<<endl;
	}
	cout<<"Se dividio: "<<cont<<" veces"<<endl;
	}