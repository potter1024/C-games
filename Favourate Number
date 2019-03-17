#include<iostream>
#include<string>
int main()
{
    srand(time(0));
    int n=rand()%101,i=n+1,j=0;
    while(i!=n)
    {
        j++;
        std::cout<<"Enter my favourate number: ";
        std::cin>>i;
        if(i>n)
        {
            std::cout<<"Too large\n";
        }
        else if(i<n)
        {
            std::cout<<"Too small\n";
        }
        else
            break;
    }
    std::cout<<"you found out my favourate number!!\n";
    std::cout<<"You took "<<j<<" attempts to guess my favourate number\n";
}

