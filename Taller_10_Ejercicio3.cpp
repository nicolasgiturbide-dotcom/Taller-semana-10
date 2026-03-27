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
	for(int i=0; i<array.size();i++){
		for(int j=0; j<array.size();j++){
			if(i!=j){
	cout<<"("<<array.at(i)<<","<<array.at(j)<<")"<<endl;
}
}
}
return 0;
}