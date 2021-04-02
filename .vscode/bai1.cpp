// Tìm lớn nhất, nhỏ nhất: so sánh liên tục để cập nhật ở từng bước lặp

// 11.Lớn nhất và nhỏ nhất trong các số

// Viết một chương trình với một vòng lặp cho phép người dùng nhập một dãy các số nguyên. 
// Sau khi tất cả các số đã được nhập, 
// chương trình sẽ hiển thị các số lớn nhất và nhỏ nhất đã nhập.

#include <iostream>
using namespace std;

int main()
{
    cout << "Day cua ban co bao nhieu so? ";
    int n;
    cin >> n;
    int a[n];
    if(n==0)
    {
        cout << "So lon nhat: 0"<<endl;
        cout << "So be nhat: 0";
        
    }
    else
    {for(int i = 0;i < n;i++)
    {
        cout << "Nhap day so: ";
        cin >> a[i];
      
    }
    
    
    int j,k;
    int max = a[0];
    int min = a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]>max)
        {
            max = a[j];
        }
    }
    for(k=1;k<n;k++)
    {
        if(a[k]<min)
        {
            min = a[k];
        }
    }
  
    cout << "So lon nhat: " << max <<endl;
    cout << "So be nhat: " << min;
    }
    return 0;