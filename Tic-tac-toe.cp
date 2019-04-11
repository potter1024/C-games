#include<iostream>
char a[3][3];
int check()
{
    int win=0,lose=0;
    //   win
    if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
    {
        win=1;
    }
    if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
    {
        win=1;
    }
    if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
    {
        win=1;
    }
    if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
    {
        win=1;
    }
    if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
    {
        win=1;
    }
    if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
    {
        win=1;
    }
    if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
    {
        win=1;
    }
    if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
    {
        win=1;
    }
    //   lose
    if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
    {
        lose=1;
    }
    if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
    {
        lose=1;
    }
    if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
    {
        lose=1;
    }
    if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
    {
        lose=1;
    }
    if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
    {
        lose=1;
    }
    if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
    {
        lose=1;
    }
    if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
    {
        lose=1;
    }
    if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
    {
        lose=1;
    }
    if(win==1)
        return 2;
    if(lose==1)
        return 1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]=='-')
                return 0;
        }
    }
    return -1; //tie

}
int main()
{

    srand(time(0));
    std::cout<<"\t\t\t\t\t\t\t\tWelcome to the tic tac toe GAME!!!\n";
    int i,j,k=0;
    char q;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]='-';
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<a[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    while(check()==0)
    {
        if(check()==2)
        {
            std::cout<<"\t\t\tYou win!!\n\n\n";
            break;
        }
        else if(check()==1)
        {
            std::cout<<"\t\t\tYou lose!!\n\n\n";
            break;
        }
        else if(check()==-1)
        {
            std::cout<<"\t\t\tTie!!\n\n\n";
            break;
        }
        std::cin>>q;
        if(q=='q')
        {
            if(a[0][0]!='X' && a[0][0]!='O')
            {
                a[0][0]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='w')
        {
            if(a[0][1]!='X' && a[0][1]!='O')
            {
                a[0][1]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='e')
        {
            if(a[0][2]!='X' && a[0][2]!='O')
            {
                a[0][2]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='a')
        {
            if(a[1][0]!='X' && a[1][0]!='O')
            {
                a[1][0]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='s')
        {
            if(a[1][1]!='X' && a[1][1]!='O')
            {
                a[1][1]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='d')
        {
            if(a[1][2]!='X' && a[1][2]!='O')
            {
                a[1][2]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='z')
        {
            if(a[2][0]!='X' && a[2][0]!='O')
            {
                a[2][0]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='x')
        {
            if(a[2][1]!='X' && a[2][1]!='O')
            {
                a[2][1]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else if(q=='c')
        {
            if(a[2][2]!='X' && a[2][2]!='O')
            {
                a[2][2]='X';
            }
            else
            {
                std::cout<<"Invalid entry\n";
                std::cin>>q;
            }
        }
        else
        {
            std::cout<<"Wrong Entry\n";
            std::cin>>q;
        }
        if(check()==2)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    std::cout<<a[i][j]<<"\t";
                }
                std::cout<<"\n";
            }
            std::cout<<"\t\t\tYou win!!\n\n\n";
            break;
        }
        else if(check()==1)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    std::cout<<a[i][j]<<"\t";
                }
                std::cout<<"\n";
            }
            std::cout<<"\t\t\tYou lose!!\n\n\n";
            break;
        }
        else if(check()==-1)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    std::cout<<a[i][j]<<"\t";
                }
                std::cout<<"\n";
            }
            std::cout<<"\t\t\tTie!!\n\n\n";
            break;
        }
        // up to down filling
        if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='-')
        {
            a[1][2]='O';
        }
        else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='-')
        {
            a[2][1]='O';
        }
        else if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        // down to up filling
        else if(a[0][2]=='O' && a[0][1]=='O' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[1][2]=='O' && a[1][1]=='O' && a[1][0]=='-')
        {
            a[1][0]='O';
        }
        else if(a[2][2]=='O' && a[2][1]=='O' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[2][0]=='O' && a[1][0]=='O' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[2][1]=='O' && a[1][1]=='O' && a[0][1]=='-')
        {
            a[0][1]='O';
        }
        else if(a[2][2]=='O' && a[1][2]=='O' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        else if(a[2][2]=='O' && a[1][1]=='O' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        // middle filling
        else if(a[0][0]=='O' && a[0][2]=='O' && a[0][1]=='-')
        {
            a[0][1]='O';
        }
        else if(a[1][0]=='O' && a[1][2]=='O' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[2][0]=='O' && a[2][2]=='O' && a[2][1]=='-')
        {
            a[2][1]='O';
        }
        else if(a[0][0]=='O' && a[2][0]=='O' && a[1][0]=='-')
        {
            a[1][0]='O';
        }
        else if(a[0][1]=='O' && a[2][1]=='O' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[0][2]=='O' && a[2][2]=='O' && a[1][2]=='-')
        {
            a[1][2]='O';
        }
        else if(a[0][0]=='O' && a[2][2]=='O' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[0][2]=='O' && a[2][0]=='O' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        // up to down checking
        else if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='-')
        {
            a[1][2]='O';
        }
        else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='-')
        {
            a[2][1]='O';
        }
        else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        // down to up checking
        else if(a[0][2]=='X' && a[0][1]=='X' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[1][2]=='X' && a[1][1]=='X' && a[1][0]=='-')
        {
            a[1][0]='O';
        }
        else if(a[2][2]=='X' && a[2][1]=='X' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[2][0]=='X' && a[1][0]=='X' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[2][1]=='X' && a[1][1]=='X' && a[0][1]=='-')
        {
            a[0][1]='O';
        }
        else if(a[2][2]=='X' && a[1][2]=='X' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        else if(a[2][2]=='X' && a[1][1]=='X' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        // middle checking
        else if(a[0][0]=='X' && a[0][2]=='X' && a[0][1]=='-')
        {
            a[0][1]='O';
        }
        else if(a[1][0]=='X' && a[1][2]=='X' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[2][0]=='X' && a[2][2]=='X' && a[2][1]=='-')
        {
            a[2][1]='O';
        }
        else if(a[0][0]=='X' && a[2][0]=='X' && a[1][0]=='-')
        {
            a[1][0]='O';
        }
        else if(a[0][1]=='X' && a[2][1]=='X' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[0][2]=='X' && a[2][2]=='X' && a[1][2]=='-')
        {
            a[1][2]='O';
        }
        else if(a[0][0]=='X' && a[2][2]=='X' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[0][2]=='X' && a[2][0]=='X' && a[1][1]=='-')
        {
            a[1][1]='O';
        }
        // exception filling
        else if((a[0][0]=='X' || a[0][2]=='X' || a[2][0]=='X' || a[2][2]=='X') &&a[1][1]=='-')
        {
            a[1][1]='O';
        }
        else if(a[0][0]=='X' && a[2][2]=='X'&& a[0][1]=='-' && a[1][0]=='-'&& a[1][2]=='-' && a[2][1]=='-' )
        {
            a[1][0]='O';
        }
        else if(a[0][2]=='X' && a[2][0]=='X' && a[0][1]=='-' && a[1][0]=='-'&& a[1][2]=='-' && a[2][1]=='-' )
        {
            a[1][0]='O';
        }
        else if(a[1][1]=='X' && a[0][0]=='-' && a[0][2]=='-'&& a[2][0]=='-' && a[2][2]=='-')
        {
            a[0][0]='O';
        }
        else if(a[0][0]=='X' && a[2][1]=='X' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[0][0]=='X' && a[1][2]=='X' && a[0][2]=='-')
        {
            a[0][2]='O';
        }
        else if(a[0][2]=='X' && a[1][0]=='X' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else if(a[2][0]=='X' && a[0][1]=='X' && a[2][1]=='-')
        {
            a[2][1]='O';
        }
        else if(a[1][0]=='X' && a[2][2]=='X' && a[2][0]=='-')
        {
            a[2][0]='O';
        }
        else if(a[0][0]=='X' && a[2][1]=='X' && a[0][1]=='-')
        {
            a[0][1]='O';
        }
        else if(a[2][0]=='X' && a[1][2]=='X' && a[2][2]=='-')
        {
            a[2][2]='O';
        }
        else if(a[2][0]=='X' && a[0][1]=='X' && a[0][0]=='-')
        {
            a[0][0]='O';
        }
        else
        {
            while(k==0 && check()==0)
            {
                i=rand()%3;
                j=rand()%3;
                if(a[i][j]=='-')
                {
                    a[i][j]='O';
                    k=1;
                }
            }k=0;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                std::cout<<a[i][j]<<"\t";
            }
            std::cout<<"\n";
        }
        if(check()==2)
        {
            std::cout<<"\t\t\tYou win!!\n\n\n";
            break;
        }
        else if(check()==1)
        {
            std::cout<<"\t\t\tYou lose!!\n\n\n";
            break;
        }
        else if(check()==-1)
        {
            std::cout<<"\t\t\tTie!!\n\n\n";
            break;
        }
    }
}
