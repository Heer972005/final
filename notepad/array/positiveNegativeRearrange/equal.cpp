#include<bits/stdc++.h>
using namespace std;

vector<int>rearranged(vector<int>&nums)
{
	int pos=0,neg=1;
	int n=nums.size();
	vector<int>ans(n,0);
	for(int i=0;i<n;i++)
	{
		if(nums[i]<0)
		{
			ans[neg]=nums[i];
			neg+=2;
		}
		else
		{
			ans[pos]=nums[i];
			pos+=2;			
		}
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	nums=rearranged(nums);
	for(int i=0;i<n;i++)
		cout<<nums[i]<<" ";
	return 0;
}