#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(int n,vector<int>a)
{
	vector<int>temp;
	for(int i=0;i<n;i++)
		if(a[i]!=0)
			temp.push_back(a[i]);
	int nz=temp.size();
	for(int i=0;i<nz;i++)
		a[i]=temp[i];

	for(int i=nz;i<n;i++)
		a[i]=0;
	return a;
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int>nums=moveZeroes(n,arr);
	for(int i=0;i<n;i++)
		cout<<nums[i]<<"  ";
	return 0;
}