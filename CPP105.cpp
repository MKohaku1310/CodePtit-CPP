#include<iostream>
#include<string>

using namespace std;
int check(string n){
	for(int i=0;i<n.length();i++){
		if(n[i]!='0'&&n[i]!='6'&&n[i]!='8')
		return 0;
	}
	return 1;
}
int main(){
	int t; cin >>t;
	while(t--){
		string n; cin >>n;
		if(check(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}