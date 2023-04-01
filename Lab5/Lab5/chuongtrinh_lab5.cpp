
#include "thuvien_lab5.h"

int main()
{
    //câu a gốc
    int k;
    do{
        cout << "Nhap so nguyen duong K: ";
        cin >> k;
    } while (k <= 0);
    lietKe_SoNguyenXuoi(k);  
    
    //câu a fix
    int k;
    do{
        cout << "Nhap so nguyen duong K: ";
        cin >> k;
    } while (k <= 0);
    in_SoNguyen(k);

    //câu b
    int n, m;
    cout << "\nNhap so nguyen thu nhat: ";
    cin >> n;
    cout << "\nNhap so nguyen thu hai: ";
    cin >> m;

    cout << "\nHai so nguyen nhap vao la: " << n << "\t" << m << endl;
    capNhat_Bien(n, m);
    cout << "\nHai so nguyen nhap cap nhat moi: " << n << "\t" << m << endl;

    //câu c
    int h;
    do {
        cout << "Nhap chieu cao tam giac so: ";
        cin >> h;
    } while (h <= 0);
    in_TamGiacSoXuoi(h);
    
    //câu c fix
    int h;
    do {
        cout << "Nhap chieu cao tam giac ky tu: ";
        cin >> h;
    } while (h <= 0);
    in_TamGiacKiTu(h);

    //Bài tập vận dụng
    int dai, rong;
    do {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    } while (dai <= 0 || rong <= 0);
    in_HinhChuNhat(dai, rong);

    //Bài tập tổng hợp 1
    int h;
    do {
        cout << "Nhap chieu cao tam giac so: ";
        cin >> h;
    } while (h <= 0);
    in_TamGiacSoXuoi_Giam(h);

    //Bài tập tổng hợp 2
    int dai, rong;
    do {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    } while (dai <= 0 || rong <= 0);
    in_HinhChuNhatRong(dai, rong);

    system("pause");
    return 0;
}