// Problem: Adding Reversed Numbers
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/ADDREV/
// Memory Limit: 1536 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int k=0;
	while(n)
	{
		k=k*10+(n%10);
		n/=10;
	}
	return k;
}
int32_t main()
{
	int t;cin>>t;
	while(t--)
	{
		int n1,n2,ans;
		cin>>n1>>n2;
		ans=rev(rev(n1)+rev(n2));
		cout<<ans<<endl;
	}
}
