#include <iostream>
using namespace std;

void main() {
	int n;
	double sum = 0;
	cout << "Nhap so nguyen duong N: ";
	cin >> n;

	//câu 1
	cout << "Cac boi so cua 2 hoac 5 la: ";
	for (int i = 1;i < n;i++) {
		if (i % 2 == 0 || i % 5 == 0) {
			cout << i << " ";
		}
	}
	
	//Câu 2
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem += 1;
		}
	}

	cout << "So uoc cua " << n << " la " << dem;

	//Câu 3
	int a, b;
	cout << "Nhap so nguyen A: ";
	cin >> a;
	cout << "Nhap so nguyen B: ";
	cin >> b;
	if (a != b) {
		int ucln = a;
		while (ucln > 0) {
			if (a % ucln == 0 && b % ucln == 0) {
				break;
			}
			ucln--;
		}

		int bcnn = a * b / ucln;

		cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln << endl;
		cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << bcnn << endl;
	}
	else
		cout << "Khong duoc nhap 2 so giong nhau";

	//Câu 4
	int bieuthuc = 1;
	for (int i = 1; i <= n; i++) {
		sum += bieuthuc * i / (i + 1.0);
		bieuthuc = -bieuthuc;
	}

	cout << "Ket qua cua bieu thuc la: " << sum << endl;

	//Câu 5
	int dem = 0;
	if (n > 2) {
		for (int i = 1; i <= n; i++) {
			if (n % i == 0)
				dem++;
		}
		if (dem == 2)
			cout << n << " la so nguyen to!";
		else
			cout << n << " khong phai la so nguyen to!";
	}
	else
		cout << n << " khong phai la so nguyen to";

	system("pause");
}