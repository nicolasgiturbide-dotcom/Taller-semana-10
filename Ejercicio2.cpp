#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cout<<"Cuantos datos quieres ingresar?"<<endl;
	cin>>n;
	vector<int> array(n);
	for(int i=0;i<n;i++){
		cout<<"Ingresa tu numero "<<i+1<<":";
		cin>>array[i];
	}
	
	int mayor=array.at(0);
	int menor=array.at(0);
	
	for(int i=1;i<n;i++){
		if (array.at(i)>mayor){
			mayor=array.at(i);
		}
		if(array.at(i)<menor){
			menor=array.at(i);
		}
	}
	cout<<"Mayor: "<<mayor<<endl;
	cout<<"Menor: "<<menor<<endl;
}