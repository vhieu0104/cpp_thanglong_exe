#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
    cout << "Hello! What is your name?\n";
	string name;
	getline(cin,name);
	cout << "Hello " << name << endl;
	int a;
	cout << "How old are you?"<< endl;
	cin >> a;
	cout << "OK.I'm thinking of a number between 1 and 1000." << "Take a guess."<<endl;
    int n =rand()&100;
    
    
    cout << "Moi ban nhap so: ";
    int i=0;
    cin >> i;
    while(i < 0 || i > 100 )
    {
        cout << "Moi ban nhap lai: ";
        cin >> i;  
    }   
    while(i!=n)
    {
        if(i<n)
        {
            cout << "Nho hon."<<endl;
           
        }
        if(i>n)
        {
            cout << "Lon hon."<<endl;
        }
        if(i==n)
        {
            cout << "Ban da doan dung."<<endl;
            break;
        }
        cout << "Moi ban nhap lai: ";
        cin >> i;
    }
    cout << "Ket qua la:" << n;
   
	return 0;
}
