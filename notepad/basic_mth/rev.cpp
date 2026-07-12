#include<bits/stdc++.h>
using namespace std;

int rev(int n){
	int revnum=0;
	while(n>0){
		int ld=n%10;
		revnum=(revnum*10)+ld;
		n=n/10;
	}
	return revnum;
}

int main(){
	int n;
	cin>>n;
	cout<<rev(n);
}