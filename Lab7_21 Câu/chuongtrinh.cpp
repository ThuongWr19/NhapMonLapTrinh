#include "thuvien.h"

void main() {
	int n;
	int A[KTM];

	nhap_SoPTMang(n);
	nhap_PTMang(A, n);
	xuat_PTMang(A, n);

	xuat_SHT(A, n);
	tinh_TongSHT(A, n);

	xuat_SNT(A, n);
	dem_SNT(A, n);
	tinh_TongSNT_ViTriLe(A, n);

	xuat_SCP(A, n);
	tinh_TongSCP_ViTriChan(A, n);

	tim_SLN(A, n);
	tim_SNN(A, n);

	tim_SoDuong(A, n);

	tim_SoLe(A, n);

	tim_TongSoChiaHetChoBa(A, n);

	tim_TongBoiSoCuaNam(A, n);

	tinh_TongSoDuongKhongLaBoiCuaBon(A, n);

	dem_SoChiaHetChoBay(A, n);

	tinh_TrungBinhCongSoDuong(A, n);

	xuat_PTChanVaNhoHonHaiMuoi(A, n);
}