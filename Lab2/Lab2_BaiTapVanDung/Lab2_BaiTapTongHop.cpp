#include <iostream>
using namespace std;

int main()
{
    int so_Km, so_Tien = 0;
    cout << "Nhap so Km di duoc: ";
    cin >> so_Km;

    if (so_Km >= 1) {
        so_Tien = 15000;
        if (so_Km <= 30) {
            so_Tien = 15000 + so_Km * 16500;
        }
        else {
            so_Tien = 15000 + 29 * 16500 + (so_Km - 30) * 16000;
        }
    }

    cout << "Tong so tien phai tra la: " << so_Tien << endl;
        return 0;
}