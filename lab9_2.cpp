#include <iostream>

using namespace std;

float cArea(float r) {
        float area;
        area = 3.1416*r*r;
        return area;
    }

int main() {
    /* เขียนโปรแกรมรับค่ารัศมีวงกลมจากคีย์บอร์ด และหาพื้นที่ของวงกลมเป็นทศนิยม 4 ตำแหน่ง
    โดยกำหนดให้โปรแกรมหาพื้นที่ของวงกลม จนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และกำหนดให้แบ่งการทำงานเป็นโปรแกรมย่อยอย่างน้อย 1 ฟังก์ชัน
    */
    float r,cmd;

    do{
        cin >> cmd;
        if (cmd==1){
            cin >> r;
            cout << cArea(r) <<endl;
        }else {break;
        }
    }while(1);

    return 0;
}
