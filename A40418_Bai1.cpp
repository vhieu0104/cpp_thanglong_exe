// 1. Ước lượng số tiền cần gửi tiết kiệm

// Bạn muốn biết hiện nay phải dành ra bao nhiêu tiền để gửi tiết kiệm với mục tiêu trong 10 năm nữa sẽ có 10.000$. Biết rằng bạn có thể sử dụng công thức sau để tính số tiền phải gửi: 𝑃=𝐹/(1+𝑟)𝑁, công thức này được giải thích như sau:

// - P là số tiền dự kiến cần gửi

// - F là số dự kiến nhận được trong tương lai

// - r là lãi suất theo năm

// - N số năm gửi tiết kiệm

// Viết một hàm có tên là presentValue để thực hiện công thức trên với đầu vào là F, r và N.

// Viết chương trình nhập vào số tiền dự kiến nhận, lãi suất và số năm dự kiến gửi. In ra màn hình số tiền cần phải gửi.
#include <iostream>
#include <cmath>
using namespace std;

    int  presentValue(float f ,float n  ,float r )
    {
       
        
        float p = f / pow( 1 + r / 100 , n );
        cout << p;
        return 0;
    }
    int main()
    {
        float f,n,r;
        cin >> f;
        cin >> n;
        cin >> r;
        cout << presentValue(f,n,r);
    
    return 0;
    }