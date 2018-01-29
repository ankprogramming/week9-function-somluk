#include <iostream>

using namespace std;

void swap(int*a, int*b){
    int bow;
    bow = *a;
    *a = *b;
    *b = bow;
    }

int main() {
    /*เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรสองตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
    */
    int a,b,cmd;
    cin >> a;
    cin >> b;
    do {
    cout << "MENU" << endl;
    cout << "1. swap( )" << endl;
    cout << "2. Quit( )" << endl;
    cin >> cmd;

        if (cmd == 1){
            swap(&a,&b);
            cout << a << endl;
            cout << b << endl;
    }else{
        break;
    }

    } while( 1 );
}





