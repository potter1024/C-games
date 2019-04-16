//#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <cmath>
#include<math.h>
#include <set>
#include <time.h>
#include <map>
#include <fstream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <array>
#include <bitset>
#include <complex>
#include <numeric>
#include <unordered_map>
using namespace std;
#define sz(a) int((a).size())
#define ll long long
#define pb push_back
#define ld long double
#define mp make_pair
#define vi vector<ll>
#define all(c) (c).begin(),(c).end()
#define allr(c) (c).rbegin(),(c).rend()
#define For(i,n) for(ll i=0;i<n;i++)
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(a,n) for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n) for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ep 1e-10
#define pi pair<ll,ll>
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

#define N 1000000
vector<ll> adj[N];
vector<bool> visited(N,0);
vector<ll> color(N,0);
ll n,k,x=0;
void DFSUtil(ll u)
{
    visited[u] = true;
    x++;
    for (ll i=0; i<adj[u].size(); i++)
    {
        if (visited[adj[u][i]] == false)
        {
            DFSUtil(adj[u][i]);
        }
    }
}
ll M=1e9+7;
ll DFS(ll n)
{
    ll c=0;
    for (ll u=1; u<=n; u++)
    {
        if (visited[u] == false)
        {
            x=0;
            DFSUtil(u);
            ll g=1;
            for(ll i=0;i<k;i++)
            {
                g*=x;
                g%=M;
            }
            c+=g;
            c%=M;
        }
    }
    return c;
}
void aE(ll u, ll v)
{
    adj[u].push_back(v);
}
//    priority_queue <int, vector<int>, greater<int> > pq;
vector<ll> v(N,0);
vector<ll> segTree(N,0);
void build(ll low,ll high,ll pos)           // initial call is build(0,n-1,1);
{
    if(low==high)
    {
        segTree[pos]=v[low];
        return;
    }
    ll mid=(low+high)/2;
    build(low,mid,pos*2);
    build(mid+1,high,pos*2+1);
    segTree[pos]=segTree[pos*2]+segTree[pos*2+1];                       // should be modified
}
ll querry(ll low,ll high,ll l,ll r,ll pos)              // l and r start from 0
{
    if(l<=low && r>=high)
        return segTree[pos];
    else if(r<low || l>high)
        return 0;                                                       // should be modified
    ll mid=(low+high)/2;
    return querry(low,mid,l,r,2*pos)+querry(mid+1,high,l,r,2*pos+1);    // should be modified
}
void update(ll low,ll high,ll index,ll val,ll pos)      // l and r start from 0
{
    if(low==high)
    {
        v[index]=val;
        segTree[pos]=val;
    }
    else
    {
        ll mid =(low+high)/2;
        if(low<=index && index<=mid)
            update(low,mid,index,val,2*pos);
        else
            update(mid+1,high,index,val,2*pos+1);
        segTree[pos]=segTree[2*pos]+segTree[2*pos+1];                    // should be modified
    }
}
ll mes(string s1,string s2)
{
    ll count=0;
    for(ll i=0;i<min(s1.size(),s2.size());i++)
    {
        if(s1[i]!=s2[i])
            break;
        else
            count++;
    }
    return count;
}
int main()
{
    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
     freopen("input.txt","w",stdout);

    int a = 10, b = 0, c = 10;
    string str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq "
    "TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
    "OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm "
    "SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
    while (a != 0)
    {
        a = str[b++];
        while (a-- > 64)
        {
            if (++c == 90)
            {
                c = 10;
                cout<<endl;
            }
            else
            {
                if (b % 2 == 0)
                    cout<<".";
                else
                    cout<<" ";
            }
        }
    }
    return 0;

}
