#include<bits/stdc++.h>
using namespace std;

int longestSum(vector<int>a,long long k)
{
	int left=0,right=0;
	long long sum=a[0];
	int mx=0;
	int n=a.size();
	while(right<n)
	{	
		while(left<=right && sum>k)
		{
			sum-=a[left];
			left++;
		}
		if(sum==k)
		{
			mx=max(mx,right-left+1);
		}
		right++;
		if(right<n)sum+=a[right];
	}
	return mx;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	long long k;
	cout<<"enter k";
	cin>>k;
	cout<<longestSum(arr,k);
	return 0;

}