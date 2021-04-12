#include <iostream>
using namespace std;

int getNumAccidents(int &);
void findLowest(int,int,int,int,int);
int main()
{
    int dong,nam,tay,bac,trung;
    cout << "Nhap khu vuc dong: ";
    getNumAccidents(dong);
    cout << "Nhap khu vuc nam: ";
    getNumAccidents(nam);
    cout << "Nhap khu vuc tay: ";
    getNumAccidents(tay);
    cout << "Nhap khu vuc bac: ";
    getNumAccidents(bac);
    cout << "Nhap khu vuc trung: ";
    getNumAccidents(trung);

    findLowest(dong,nam,tay,bac,trung);
   

    return 0;
}
int getNumAccidents(int & a)
{
    
    do
    {
        cin >> a;
    }while(a<0);
    return a;

}    
void findLowest(int a,int b,int c,int d,int e)
{
    int min = a;
    if(b<min){min=b;}
    if(c<min){min=c;}
    if(d<min){min=d;}
    if(e<min){min=e;}

    if(a==min){cout<<"Khu vuc dong: "<<min<<endl;}  
    if(b==min){cout<<"Khu vuc nam: "<<min<<endl;}
    if(c==min){cout<<"Khu vuc tay: "<<min<<endl;}
    if(d==min){cout<<"Khu vuc bac: "<<min<<endl;}  
    if(e==min){cout<<"Khu vuc trung: "<<min<<endl;}       

}  