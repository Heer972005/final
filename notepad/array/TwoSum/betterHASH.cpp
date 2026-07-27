#include<bits/stdc++.h>
using namespace std;

string read(int n,vector<int>&a,int trg)
{
	map<int,int>mpp;
	for(int i=0;i<n;i++)
	{
		int ele=a[i];
		int more=trg-ele;
		if(mpp.find(more)!=mpp.end())
		{
			return "yes";
			//return{mpp[more],i};
		}
		mpp[ele]=i;
	}
	return "No";
	//return{-1,-1};
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int tr;
	cout<<"Enter the sum:";
	cin>>tr;
	cout<<read(n,arr,tr);
	return 0;	
}