// Problem: Fun with Sequences (Act 2)
// Contest: SPOJ - Basics
// URL: https://www.spoj.com/problems/SMPSEQ4/
// Memory Limit: 1536 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
#define int long long
bool func(int arr[], int f, int n)
{
    int l=0;
    int r=n-1;
    int mid=(l/r)+2;
    while(l<=r)
    {
        if(arr[mid]==f)return true;
        else if(arr[mid]<f)l=mid+1;
        else r=mid-1;
        mid=(l+r)/2;
    }
    return false;
}
int32_t main()
{
    int t;cin>>t;int a[t];
    for(int i=0;i<t;i++)cin>>a[i];
    int n;cin>>n;int b[n];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<t;i++)
    {
        if(func(b,a[i],n))cout<<a[i]<<" ";
    }
}