//#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <math.h>
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
#define sz(a)               int((a).size())
#define ll                  long long
#define pb                  push_back
#define ld                  long double
#define mp                  make_pair
#define vi                  vector<ll>
#define vii                  vector<pi>
#define endl                "\n"
#define ff                  first
#define ss                  second
#define all(c)              (c).begin(),(c).end()
#define allr(c)             (c).rbegin(),(c).rend()
#define rep(i,n)            for(ll i=0;i<n;i++)
#define cpresent(c,x)       (find(all(c),x) != (c).end())
#define input(a,n)          for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n)         for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define vl                  LLONG_MIN
#define vm                  LLONG_MAX
#define ep                  1e-10
#define pi                  pair<ll,ll>
#define inf                 10e9
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define MM                  1000000009
#define pie                 3.1415926535897932384626433832795
#define eu                  2.718281828459045
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock();
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<"\t-> "<<#k<<" = "<<k<<endl;
map<pi,pi> parent;
map<pi,ll> visited;
int a[1000][1000]={};
ll m,n,xe,ye;
ll DFS(pi p)
{
    visited[p]=1;
    if(p.ff<0 || p.ss<0 || p.ff>m-1 || p.ss>n-1)
        return 0;
    if(a[p.ff][p.ss])
        return 0;
    if(p.ff==xe-1 && p.ss==ye-1)
        return 1;
   if( !visited[mp(p.ff,p.ss+1)] && DFS(mp(p.ff,p.ss+1)))
   {
       parent[mp(p.ff,p.ss+1)]=p;
       return 1;
   }
   if(  !visited[mp(p.ff,p.ss-1)] && DFS(mp(p.ff,p.ss-1)))
   {
        parent[mp(p.ff,p.ss-1)]=p;
       return 1;
   }
   if(  !visited[mp(p.ff+1,p.ss)] && DFS(mp(p.ff+1,p.ss)))
   {
        parent[mp(p.ff+1,p.ss)]=p;
       return 1;
   }
   if( !visited[mp(p.ff-1,p.ss)] &&  DFS(mp(p.ff-1,p.ss)))
   {
        parent[mp(p.ff-1,p.ss)]=p;
       return 1;
   }
   else
        return 0;
}
int main()
{
    she_taught_me_to_code

     freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll xs,ys;
    cin>>m>>n;
    cin>>xs>>ys;
    cin>>xe>>ye;
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
            cin>>a[i][j];
    }
    if(!DFS(mp(xs-1,ys-1)))
    {
        cout<<"No Path"<<endl;
        return 0;
    }
    cout<<"Found a Path!"<<endl;
    stack<pi> st;
    pi init=mp(xe-1,ye-1);
    while(1)
    {
        st.push(init);
        init=parent[init];
        if(init.ff==xs-1 && init.ss==ys-1)
            break;
    }
    ll x=xs,y=ys;
    a[x-1][y-1]=8;
    while(!st.empty())
    {
        if(st.top().ss+1>y)
            cout<<"↠"<<" ";
        else if(st.top().ss+1<y)
            cout<<"↞"<<" ";
        else if(st.top().ff+1<x)
            cout<<"↟"<<" ";
        else
            cout<<"↡"<<" ";
        a[x-1][y-1]=8;
        x=st.top().ff+1;
        y=st.top().ss+1;
        st.pop();
    }
    cout<<endl<<endl;
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[i][j]==8)
                cout<<0<<" ";
            else
                cout<<" "<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
