#include <iostream>
#include "kerucut.h"
#include "kerucut.cpp"
using namespace std;

int main()
{
     kerucut kc;
    cout << "Masukkan jari-jari (r): ";
    cin >> kc.r;
    cout << "Masukkan tinggi (t): ";
    cin >> kc.t;
    cout << "bangun ruang kerucut : " <<  hasil(kc) << endl;
    return 0;
}
