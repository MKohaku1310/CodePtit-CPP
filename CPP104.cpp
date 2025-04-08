#include<iostream>

using namespace std;
long long gt(int n){
	long long d = 1;
	for(int i=1;i<=n;i++){
		d*=i;
	}
	return d;
}
int main(){
	int n; cin >> n;
	long long s=0;
	for(int i=1;i<=n;i++){
		s+=gt(i);
	}
	cout<<s<<endl;
}