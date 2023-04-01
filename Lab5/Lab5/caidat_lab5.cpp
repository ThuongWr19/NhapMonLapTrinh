#include "thuvien_lab5.h"
void lietKe_SoNguyenXuoi(int n) {
	int i;
	cout << endl;

	for (i = 1;i <= n; i++) {
		cout << i << " ";
	}
}

void lietKe_SoNguyenXuoi_Giam(int n) {
	int i;
	cout << endl;

	for (i = n;i >= 1; i--) {
		cout << i << " ";
	}
}

void lietKe_SoNguyenNguoc(int n) {
	int i;
	cout << endl;

	for (i = n; i >= 1; i--) {
		cout << i << " ";
	}
}

void in_SoNguyen(int n) {
	int i;
	cout << endl;

	for (i = 0; i < n; i++) {
		cout << n << " ";
	}
}

void capNhat_Bien(int a, int b){
	if (a > b && a % 3 == 0) {
		a += b - 3;
	}
	if (b > 5) {
		b += b / 5;
	}
	cout << "\nTrong ham cap nhat: A = " << a << " B = " << b << endl;
}

void in_TamGiacSoXuoi(int height) {
	for (int i = 1; i <= height; i++) {
		lietKe_SoNguyenXuoi(i);
	}
	cout << endl;
}

void in_TamGiacSoXuoi_Giam(int height) {
	for (int i = 1; i <= height; i++) {
		lietKe_SoNguyenXuoi_Giam(i);
	}
	cout << endl;
}

void in_TamGiacSoNguoc(int height) {
	for (int i = height; i >= 1; i--) {
		lietKe_SoNguyenXuoi(i);
	}
}

void in_KiTu(int n) {
	int i;
	cout << endl;

	for (i = 1;i <= n; i++) {
		cout << " * ";
	}
}

void in_TamGiacKiTu(int height) {
	for (int i = 1; i <= height; i++) {
		in_KiTu(i);
	}
	cout << endl;
}

void in_HinhChuNhat(int dai, int rong) {
	for (int i = 1; i <= rong; i++) {
		in_KiTu(dai);
		cout << endl;
	}
}

void in_HinhChuNhatRong(int dai, int rong) {
	for (int i = 0; i < rong; i++) {
		for (int j = 0; j < dai; j++) {
			if (i == 0 || i == rong - 1 || j == 0 || j == dai - 1) {
				cout << " * ";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
}