#ifndef TRUONG_H
#define TRUONG_H
#include "SinhVien.h"
#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

class Truong {
private:
    SinhVien* danhSach[100];
    int soLuong;

public:
    Truong();
    void NhapDanhSach();
    void XuatDanhSach();
    void DanhSachTotNghiep();
    void DanhSachKhongTotNghiep();
    void DaiHocDiemCaoNhat();
    void CaoDangDiemCaoNhat();
    void ThongKeKhongTotNghiep();
};

#endif
