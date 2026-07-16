#include<bits/stdc++.h>
using namespace std;

int count(int n){
	int count=0;
	while(n>0){
		count=count+1;
		n=n/10;
	}
	return count;
}

int count_log(int n){
	int count=(int)(log10(n)+1);
	return count;
}

int main(){
	int n;
	cin>>n;
	int count1=count(n);
	int count2=count_log(n);
	cout<<count1;
	cout<<endl;
	cout<<count2;
}