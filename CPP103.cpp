#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
	int n; cin >>n;
	double s=0;
	for(int i=1;i<=n;i++){
		s+=1*1.0/i;
	}
	cout <<setprecision(4) << fixed << s << endl;
}