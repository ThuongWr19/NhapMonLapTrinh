#include "thuvien.h"

//Câu 1
void nhap_SoPTMang(int &n) {
	do {
		cout << "Nhap so phan tu mang: ";
		cin >> n;
	} while (n <= 0 || n > KTM);
}

void nhap_PTMang(int A[], int n) {
	for (int i = 0; i < n;i++) {
		cout << "Nhap phan tu thu " << i << " : ";
		cin >> A[i];
	}
}

//Câu 2
void xuat_PTMang(int A[], int n) {
	cout << "Cac phan tu cua mang la: ";
	for (int i = 0;i < n;i++) {
		cout << A[i] << "\t";
	}
	cout << endl;
}

//Câu 3
bool kiemTra_SHT(int n) {
	int sum = 0;
	for (int i = 1;i <= n / 2;i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) 
		return true;
	else
		return false;
}

//Câu 4
void xuat_SHT(int A[], int n) {
	cout << "Cac so hoan thien trong mang la: ";
	for (int i = 0; i < n;i++) {
		if (kiemTra_SHT(A[i]) == true) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}

//Câu 5
void tinh_TongSHT(int A[], int n) {
	int tong = 0;
	for (int i = 0;i < n;i++) {
		if (kiemTra_SHT(A[i]) == true) {
			tong += A[i];
		}
	}
	cout << "Tong cac so hoan thien co trong mang la: " << tong;
	cout << endl;
}

//Câu 6
bool kiemTra_SNT(int n) {
	int dem = 0;
	for (int i = 1;i <= n;i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2)
		return true;
	else
		return false;
}

void xuat_SNT(int A[], int n) {
	cout << "Cac so nguyen to co trong mang la: ";
	for (int i = 0;i < n;i++) {
		if (kiemTra_SNT(A[i]) == true) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}

//Câu 7
void dem_SNT(int A[], int n) {
	int dem = 0;
	for (int i = 0;i < n;i++) {
		if (kiemTra_SNT(A[i]) == true) {
			dem++;
		}
	}
	cout << "Co " << dem << " so nguyen to trong mang";
	cout << endl;
}

//Câu 8
void tinh_TongSNT_ViTriLe(int A[], int n) {
	int tong = 0;
	for (int i = 0; i < n;i++) {
		if (kiemTra_SNT(A[i]) == true && i % 2 != 0) {
			tong += A[i];
		}
	}
	cout << "Tong cac so nguyen to va o vi tri le trong mang la: " << tong; 
	cout << endl;
}

//Câu 9
bool kiemTra_SCP(int n) {
	int i = 0;
	while (i * i <= n) {
		if (i * i == n) {
			return true;
		}
		++i;
	}
	return false;
}

//Câu 10
void xuat_SCP(int A[], int n) {
	cout << "Cac so chinh phuong co trong mang la: ";
	for (int i = 0; i < n;i++) {
		if (kiemTra_SCP(A[i])) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}

//Câu 11
void tinh_TongSCP_ViTriChan(int A[], int n) {
	int tong = 0;
	for (int i = 0; i < n;i++) {
		if (kiemTra_SCP(A[i]) == true && i % 2 == 0) {
			tong += A[i];
		}
	}
	cout << "Tong cac so chinh phuong va o vi tri chan trong mang la: " << tong;
	cout << endl;
}

//Câu 12
void tim_SLN(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n;i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}
	cout << "So lon nhat trong mang la: " << max << endl;
}

//Câu 13
void tim_SNN(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n;i++) {
		if (max > A[i]) {
			max = A[i];
		}
	}
	cout << "So nho nhat trong mang la: " << max << endl;
}

//Câu 14
void tim_SoDuong(int A[], int n) {
	cout << "Cac so duong co trong mang la: ";
	for (int i = 0; i < n;i++) {
		if (A[i] > 0) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}

//Câu 15
void tim_SoLe(int A[], int n) {
	cout << "Cac so le co trong mang la: ";
	for (int i = 0; i < n;i++) {
		if (A[i]%2!=0) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}

//Câu 16
void tim_TongSoChiaHetChoBa(int A[], int n) {
	int tong = 0;
	for (int i = 0;i < n;i++) {
		if (A[i] % 3 == 0) {
			tong += A[i];
		}
	}

	cout << "Tong cac so chia het cho 3 co trong mang la: " << tong;
	cout << endl;
}

//Câu 17
void tim_TongBoiSoCuaNam(int A[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] % 5 == 0) {
			tong += A[i];
		}
	}
	cout << "Tong cac so la boi so cua 5 co trong mang la: " << tong;
	cout << endl;
}
//Câu 18
void tinh_TongSoDuongKhongLaBoiCuaBon(int A[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] > 0 && A[i] % 4 != 0) {
			tong += A[i];
		}
	}
	cout << "Tong cac so duong khong la boi cua 4 la: " << tong;
	cout << endl;
}

//Câu 19
void dem_SoChiaHetChoBay(int A[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] % 7 == 0) {
			dem++;
		}
	}
	cout << "Co " << dem << " so chia het cho 7 trong mang" << endl;
}

//Câu 20
void tinh_TrungBinhCongSoDuong(int A[], int n) {
	int tong = 0, dem = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] > 0) {
			dem++;
			tong += A[i];
		}
	}
	float trungbinh = (float)tong / dem;

	cout << "Trung binh cong cac so duong trong mang la: " << trungbinh << endl;
}

//Câu 21
void xuat_PTChanVaNhoHonHaiMuoi(int A[], int n) {
	cout << "Cac phan tu chan va nho hon 20 la: ";
	for (int i = 0; i < n; i++) {
		if (A[i] < 20 && A[i] % 2 == 0) {
			cout << A[i] << "\t";
		}
	}
	cout << endl;
}
