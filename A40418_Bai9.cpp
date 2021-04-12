#include <iostream>
using namespace std;

double getSales(string);
void findHighest(double,double,double,double);
int main()
{
    double a,b,c,d;
    
    a = getSales("dong bac");
    b = getSales("dong nam");
    c = getSales("tay bac");
    d = getSales("tay nam");
    
    findHighest(a,b,c,d);
    return 0;
}
double getSales(string a)
{
    double x;

    do
    {
        
        cout << a << " ";
        cin >> x;
      
    } while (x<0);
    
   
    return x;
}
void findHighest(double a,double b,double c,double d)
{
   int j[4];
   j[0]=a;
   j[1]=b;
   j[2]=c;
   j[3]=d;


    int max =j[0];
    
    for(int i = 1;i <=3;i++)
    {
        if(j[i]>max)
        {
            max=j[i];
        }
    
    } 
    
}