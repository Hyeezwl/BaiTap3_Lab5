#include "SinhVien.h"

SinhVien::SinhVien() {
    tongSoTinChi = 0;
    diemTrungBinh = 0;
}

void SinhVien::Nhap() {
    cin.ignore();
    cout << "Nhap MSSV: ";
    getline(cin, mssv);
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap tong so tin chi: ";
    cin >> tongSoTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> diemTrungBinh;
}

void SinhVien::Xuat() {
    cout << "MSSV: " << mssv << " Ho ten: " << hoTen << " Dia chi: " << diaChi
         << " Tin chi: " << tongSoTinChi << " DTB: " << diemTrungBinh;
}

bool SinhVien::XetTotNghiep() {
    return false;
}

int SinhVien::LayLoai() {
    return 0;
}

double SinhVien::LayDiemTrungBinh() {
    return diemTrungBinh;
}
