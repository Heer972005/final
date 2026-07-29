#include<bits/stdc++.h>
using namespace std;

vector<int>leader(vector<int>&a)
{
	vector<int>ans;
	int maxi=INT_MIN;
	int n=a.size();
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>maxi)
			ans.push_back(a[i]);
		maxi=max(maxi,a[i]);
	}
	sort(ans.begin(),ans.end());
	return ans;
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int>ans=leader(a);
	cout<<"[";
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<"]";
	return 0;
}