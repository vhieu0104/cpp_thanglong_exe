#include <iostream>
using namespace std;


int gcd(int a,int b)
{
   if(a==0)
        return b;
   
    return gcd(b % a,a);
}
int main()
{
    int a,b;
    cout << "Nhap 2 so: " << endl;
    cin >> a >> b;
    cout << gcd(a,b);
        
    return 0;
}



    

