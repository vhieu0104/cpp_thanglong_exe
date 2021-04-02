// 2.Thanh toán tiền lương

// Viết một chương trình tính toán số tiền một người sẽ kiếm được trong một khoảng thời gian nếu 
// tiền lương của họ là một xu vào ngày đầu tiên và hai xu vào ngày thứ hai, và tiếp tục tăng gấp đôi 
// mỗi ngày. Chương trình sẽ hỏi người dùng về số ngày. Hiển thị bảng hiển thị số tiền lương cho 
// mỗi ngày, sau đó hiển thị tổng tiền lương vào cuối kỳ. Đầu ra phải được hiển thị bằng số đô la,
// không phải số xu.

// Chú ý: Không chấp nhận số ngày nhỏ hơn 1 cho số ngày làm việc và 100 xu = 1 đô la





#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << setiosflags(ios::fixed);
    int day;
    cout << "Nhap so ngay: ";
    cin >> day;
    long long tich = 1;
    cout << "Ngay thu 1:1"<<endl; 
    for(int i=1;i<day;i++)
    {
        tich = tich * 2;
        cout << "Ngay thu " << i + 1 << ":" << tich<<endl;
    }
    float dola = float(tich) / 100;
    cout << dola << " do";
    return 0;
}