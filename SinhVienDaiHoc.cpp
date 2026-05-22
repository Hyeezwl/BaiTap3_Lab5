#include "SinhVienDaiHoc.h"

void SinhVienDaiHoc::Nhap() {
    SinhVien::Nhap();
    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, tenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> diemLuanVan;
}

void SinhVienDaiHoc::Xuat() {
    cout << "SV Dai hoc ";
    SinhVien::Xuat();
    cout << " Luan van: " << tenLuanVan << " Diem luan van: " << diemLuanVan << endl;
}

bool SinhVienDaiHoc::XetTotNghiep() {
    if (tongSoTinChi >= 170 && diemTrungBinh >= 5 && diemLuanVan >= 5) {
        return true;
    }
    return false;
}

int SinhVienDaiHoc::LayLoai() {
    return 2;
}
