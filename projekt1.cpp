#include <iostream>
using namespace std;

int silnia(int n){
	if(n<=1)return 1;
	return n*silnia(n-1);
}

int main(){
	int w;
	cout<<"1. Oblicz silnie"<<endl;
	cin >> w;

	if(w==1){
		int l;
		cin>>l;
		cout<<silnia(l)<<endl;
	}
	return 0;
