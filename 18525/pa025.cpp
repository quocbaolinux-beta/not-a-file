#include <iostream>
using namespace std;

int main() {
    double diem;
    cin >> diem;

    if (diem >= 8.0) {
        cout << "GIOI" << endl;
    } else if (diem >= 6.5) {
        cout << "KHA" << endl;
    } else if (diem >= 5.0) {
        cout << "TRUNGBINH" << endl;
    } else {
        cout << "YEU" << endl;
    }

    return 0;
}