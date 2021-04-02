// Viết một chương trình yêu cầu người dùng nhập số tiền ngân sách mà họ đã lập cho một tháng. 
// Sau đó, một vòng lặp sẽ hỏi người dùng nhập từng chi phí của họ trong tháng đó và tích luỹ dần trong một biến. 
// Khi vòng lặp kết thúc, chương trình sẽ hiển thị số tiền mà người dùng vượt quá hoặc dư ngân sách.

#include <iostream>
using namespace std;

int main()
{
    int ngansach,chitieu;
    cout << "Nhap ngan sach: ";
    cin >> ngansach;
    cout << "Nhap '0' de ket thuc."<<endl;
    int sum =0;
    while(chitieu!=0)
    {
        cout << "Nhap chi tieu: ";
        
        cin >> chitieu;

        sum = sum + chitieu;
        if(chitieu==0)
        {
            break;
        }
    }
   
    if(ngansach>sum)
    {
        cout << "Du:" << ngansach - sum; 
    }
    else
    {
        cout << "Vuot qua: " << sum - ngansach;
    }

    return 0;
}