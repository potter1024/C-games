#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter your total money"<<endl;
    int sum;
    cin>>sum;
    vector<int>v;
    srand(time(0));
    int a,s,d;
    while(1)
    {
        for(int i=0;i<6;i++)
            v.push_back(rand()%6+1);
        cout<<"Enter your number and amount"<<endl;
        cin>>a>>d;
        while(a<1 || a>6)
        {
            cout<<"The number should be between 1 and 6...please enter again"<<endl;
            cin>>a>>d;
        }
        while(d>sum)
        {
            cout<<"You don't have that much money...please enter again"<<endl;
            cin>>a>>d;
        }
        s=count(v.begin(),v.end(),a);
        sum+=s*d-d;
        cout<<"The outcomes are: ";
        for(int i=0;i<6;i++)
            cout<<v[i]<<" ";
        cout<<endl;
        if(s==0)
            cout<<"You lose your money"<<endl;
        else if(s==1)
            cout<<"Your money remains unchanged"<<endl;
        else
            cout<<"Your money becomes "<<s<<" times"<<endl;
        cout<<"Your current balance is "<<sum<<endl;
        if(sum<=0)
        {
            cout<<"I'm sorry, You lost!"<<endl;
            return 0;
        }
        v.clear();
    }
}
