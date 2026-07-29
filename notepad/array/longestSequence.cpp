#include<bits/stdc++.h>
using namespace std;
int longestSEQ(vector<int>&a)
{
	int n=a.size();
	if(n==0) return 0;
	int longest=1;
	int cnt=0;
	unordered_set<int>st;
	for(int i=0;i<n;i++)
	{
		st.insert(a[i]);
	}
	for(auto it:st)
	{
		if(st.find(it-1)==st.end())
		{
			int x=it;
			cnt=1;
			while(st.find(x+1)!=st.end())
			{
				cnt++;
				x=x+1;
			}
			longest=max(longest,cnt);
		}
	}
	return longest;
}

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<longestSEQ(a);
	return 0;
}