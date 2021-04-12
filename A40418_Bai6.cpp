#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int coinToss();

int main()
{
    srand(time(0));
    
    int n,a;
    cin >> n;
    int i=1;
    
    while(i<=n)
    {
        int b = coinToss();
        
        if(b==0)
        {cout<<"loi";}
        if(b==1)
        {
        cout << "head"<<endl;
        }
        else
        {
        cout<<"tails"<<endl;
        }
    i++;    
    }
    return 0;
}
int coinToss()
{
    int a;
    a = rand() % 2 + 1;
    return a;
}