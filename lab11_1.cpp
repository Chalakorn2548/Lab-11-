#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future.";
    
    // รอรับการกด Enter 3 ครั้ง
    cin.get();
    cin.get();
    cin.get();
    
    // ตั้งค่า Seed เพื่อให้การสุ่มเปลี่ยนไปตามเวลา (ถ้าไม่ใส่จะได้ค่าเดิมตลอด)
    srand(time(0));
    
    // สุ่มตัวเลข 0 ถึง 8 (เพราะมีเกรด 9 ตัว: A, B+, B, C+, C, D+, D, F, W)
    int x = rand() % 9;
    
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    
    // แสดงผลคำทำนาย
    cout << "You will get " << grades[x] << " in this 261102.";
    
    return 0;
}
