#include<bits/stdc++.h>
using namespace std;

void printn(int i,int n){
	if(i>n)
		return;
	cout<<("Heer")<<endl;
	printn(i+1,n);
}

void print2(int i,int n){
	if(i>n)
		return;
	cout<<i<<endl;
	print2(i+1,n);
}

void print3(int i,int n){
	if(i<1)
		return;
	cout<<i<<endl;
	print3(i-1,n);
}

void backTrace(int i,int n){
	if(i<1)
		return;
	backTrace(i-1,n);
	cout<<i<<endl;
}

void backTrace2(int i,int n){
	if(i>n)
		return;
	backTrace2(i+1,n);
	cout<<i<<endl;
}

int main(){
	int n;
	cin>>n;
	printn(1,n);
	print2(1,n);
	print3(n,n);
	backTrace(n,n);
	cout<<endl;
	backTrace2(1,n);
}