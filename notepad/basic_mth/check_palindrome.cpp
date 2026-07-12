#include<bits/stdc++.h>
using namespace std;

bool checkPalin(int n){
	int m=n;
	int rev=0;
	while(n>0){
		int ld=n%10;
		rev=(rev*10)+ld;
		n=n/10;
	}
	if(rev==m)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	if(checkPalin(n)==true)
		cout<<"Yes";
	else
		cout<<"No";
}