#include<bits/stdc++.h>
using namespace std;

void parameterised(int i, int sum){
	if(i<1){
		cout<<sum;
		return;
	}
	parameterised(i-1,sum+i);
}

int functional(int n){
	if(n==0)
		return 0;
	return n+functional(n-1);
}
int main(){
	int n;
	cin>>n;
	parameterised(n,0);
	cout<<endl;
	cout<<functional(n);
}