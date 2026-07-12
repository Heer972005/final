#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
	int sum=0;
	int m=n;
	while(n>0){
		int ld=n%10;
		sum=sum+(ld*ld*ld);
		n=n/10;
	}
	if(m==sum)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	if(armstrong(n)==true)
		cout<<"Yes";
	else
		cout<<"No";
}