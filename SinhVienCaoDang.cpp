#include "SinhVienCaoDang.h"

void SinhVienCaoDang::Nhap() {
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
}

void SinhVienCaoDang::Xuat() {
    cout << "SV Cao dang ";
    SinhVien::Xuat();
    cout << " Diem thi TN: " << diemThiTotNghiep << endl;
}

bool SinhVienCaoDang::XetTotNghiep() {
    if (tongSoTinChi >= 120 && diemTrungBinh >= 5 && diemThiTotNghiep >= 5) {
        return true;
    }
    return false;
}

int SinhVienCaoDang::LayLoai() {
    return 1;
}
