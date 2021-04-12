#include <iostream>
using namespace std;

float vienphi(float,float,float,float);
float vienphi(float,float);
int main()
{
    string x,y,z;
    cout << "Nhap vien noi tru hay ngoai tru: ";
    z = "noi tru";
    getline(cin,x);
  
    if(x==z)
    {
        float a,b,c,d;
        cout << "Nhap so ngay: ";cin >> a;
        cout << "Chi phi mot ngay: ";cin >> b;
        cout << "Chi phi thuoc men: ";cin >> c;
        cout << "Phi kham benh: ";cin >> d;
        float e = vienphi(a,b,c,d);
        cout <<e;
    }
    else
        {
        float a,b;      
        cout << "Chi phi kham benh: ";cin >> a;
        cout << "Phi kham benh: ";cin >> b;
        float c =vienphi(a,b);
        cout << c;
        }
    
    return 0;
}
float vienphi(float a,float b,float c,float d)
{
    float n = a * b + c + d;
    return n; 
}
float vienphi(float a,float b)
{
    float n = a + b;
    return n;
}