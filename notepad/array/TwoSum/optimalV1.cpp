#include<bits/stdc++.h>
using namespace std;
string read(int n,vector<int>a,int trg)
{
	int left=0,right=n-1;
	sort(a.begin(),a.end());
	while(left<right)
	{
		int sum=a[right]+a[left];
		if(sum>trg)
		{
			right--;
		}
		else if(sum<trg)
		{
			left++;
		}
		else
			return "YES";
	}
	return "NO";
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