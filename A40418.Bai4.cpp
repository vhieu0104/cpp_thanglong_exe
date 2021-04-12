// Viết chương trình cho phép người dùng nhập mười giá trị vào một mảng. Sau đó, chương trình sẽ hiển thị các giá trị lớn nhất và nhỏ nhất được lưu trữ trong mảng.
#include <iostream>
using namespace std;

int main()
{
    float arr[10];
    for(int i=0;i<=9;i++)
    {
        cout << "Nhap so: ";
        cin >> arr[i]; 
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<=9;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int j=1;j<=8;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    cout <<"Gia tri lon nhat: "<< max<<endl;
    cout <<"Gia tri nho nhat: "<< min;
}