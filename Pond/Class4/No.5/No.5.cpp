
#include <iostream>
using namespace std;

int main()
{
    string i = " * ";
    int x = 1;
    int y = 5;
    while (x<=y) {
        cout << i; // cout << " * " เลยกะได้ 
        x++;

    }
 // noteเพิ่มเติม: ควรประกาศตัวแปรเท่าที่จำเป็น เพราะการประกาศตัวแปรเยอะจะทำใหไฟล์ใหญ่ขึ้น และกินแรมมากขึ้น 
}

