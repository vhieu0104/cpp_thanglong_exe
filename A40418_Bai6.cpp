// 6.Tung đồng xu

// Viết một hàm tên là coinToss() minh họa việc tung đồng xu. Khi gọi hàm này, nó sẽ thực hiện sinh ra một số ngẫu nhiên hoặc là 1 hoặc là 2. Nếu giá trị là 1 thì in ra màn hính dòng chữ là “heads”, nếu giá trị là 2 thì in ra màn hình dòng chữ là “tails”.

// Viết một chương trình minh họa việc tung đồng xu, yêu cầu người dùng nhập vào số lần đồng xu được tung, sau đó in ra màn hình các lần tung đồng xu đó với các dòng chữ heads hoặc tails. Cuối cùng in ra màn hình số lần heads và tails có được.
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