#include <iostream>
using namespace std;
const int KTM = 50;

void nhap_SoPTMang(int &n);
void nhap_PTMang(int A[], int n);

void xuat_PTMang(int A[], int n);

bool kiemTra_SHT(int n);
void xuat_SHT(int A[], int n);
void tinh_TongSHT(int A[], int n);

bool kiemTra_SNT(int n);
void xuat_SNT(int A[], int n);
void dem_SNT(int A[], int n);
void tinh_TongSNT_ViTriLe(int A[], int n);

bool kiemTra_SCP(int n);
void xuat_SCP(int A[], int n);
void tinh_TongSCP_ViTriChan(int A[], int n);

void tim_SLN(int A[], int n);
void tim_SNN(int A[], int n);

void tim_SoDuong(int A[], int n);

void tim_SoLe(int A[], int n);

void tim_TongSoChiaHetChoBa(int A[], int n);

void tim_TongBoiSoCuaNam(int A[], int n);

void tinh_TongSoDuongKhongLaBoiCuaBon(int A[], int n);

void dem_SoChiaHetChoBay(int A[], int n);

void tinh_TrungBinhCongSoDuong(int A[], int n);

void xuat_PTChanVaNhoHonHaiMuoi(int A[], int n);