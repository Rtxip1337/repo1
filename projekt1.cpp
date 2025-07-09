#include <iostream>
using namespace std;

bool pierwsza(int n){
	if(n<2)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i=0)return false;
	} return true;
}
int main(){
	int w;
	cout<<"1. Sprawdz czy liczba jest pierwsza"<<endl;
	cin>>w;

	if(wybór==1){
		int x;
		cin>>x;
		if(pierwsza(x)){
			cout<<"Jest Pierwsza"<<endl;
		}else{
			cout<<"NIE jest Pierwsza"<<endl;
		}
	}
	return 0;
}

