#include <iostream>
using namespace std;

void main() {
	int n;
	double sum = 0;
	cout << "Nhap so nguyen duong N > 0: ";
	cin >> n;
	while (n <= 0) {
		cout << "\nVui long nhap so nguyen duong lon hon 0!\n";
		cout << "Nhap so nguyen duong N > 0: ";
		cin >> n;
	}
	if (n > 0) {
		for (int i = 1; i <= n;i++) {
			sum += (double)(i / (i + 1));
		}
		cout << "Ket qua bieu thuc la: " << sum;
	}
	system("pause");
}