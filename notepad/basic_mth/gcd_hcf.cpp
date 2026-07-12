#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
	while(a>0 &&b>0){
		if(a>b) a=a%b;
		else b=b%a;
	}
	if(a==0) return b;
	return a;
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<"GCD:"<<hcf(n,m);
}