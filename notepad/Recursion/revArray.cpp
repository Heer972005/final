#include<bits/stdc++.h>
using namespace std;

void revArray(int l,int arr[],int r){
	if(l>=r)
		return;
	swap(arr[l],arr[r]);
	revArray(l+1,arr,r-1);
}

void revArray2(int i,int arr[],int n){
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	revArray2(i+1,arr,n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	revArray2(0,arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	revArray(0,arr,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
