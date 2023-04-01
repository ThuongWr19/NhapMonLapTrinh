#include <iostream>
using namespace std;

void main() {

	int n;
    //Câu 1
	double sum = 0;
	cout << "Nhap so nguyen duong N: ";
	cin >> n;

	for (int i = 1; i <= n;i++) {
		sum += (double)(i * (i + 2)) / ((i + 1) * (i + 3));
	}

	cout << "Ket qua cua bieu thuc la: " << sum << endl;
    
    //câu 2
    int n, sum = 0;
    cout << "Nhap day so (nhap -999 de dung):" << endl;
    while (true) {
        cin >> n;
        if (n == -999) {
            break;
        }
        if (n % 5 == 0 && n % 7 != 0) {
            cout << n << " ";
            sum += n;
        }
    }

    cout << endl << "Tong cac so chia het cho 5 nhung khong chia het cho 7 la: " << sum << endl;

    //Câu 3
    int n, i, sum = 0;
    cout << "\n Nhap vao so nguyen duong n: ";
    cin >> n;
    for (i = 1; i < n; i++) {
        if (i % 2 != 0)
            sum += i;
    }
    cout << "\n Tong cac so le nho hon n: " << sum;
    system("pause");
}