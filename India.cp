#include <bits/stdc++.h>
using namespace std;
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
