#include <iostream>
using namespace std;

int silnia(int n){
	if(n<=1)return 1;
	return n*silnia(n-1);
}
bool pierwsza(int n){
        if(n<2)return false;
        for(int i=2;i*i<=n;i++){
                if(n%i=0)return false;
        } return true;
}


int main(){
	int w;
	cout<<"1. Oblicz silnie"<<endl;
	cout<<"2. sprawdz czy liczba jest pierwsza"<<endl;
	cin >> w;

	if(w==1){
		int l;
		cin>>l;
		cout<<silnia(l)<<endl;
	}else if(w==2){
		int x;
                cin>>x;
                if(pierwsza(x)){
                        cout<<"Jest Pierwsza"<<endl;
                }else{
                        cout<<"NIE jest Pierwsza"<<endl;
                }
        }


	return 0;
