#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <iostream>
#include <string>
using namespace std;

class SinhVien {
protected:
    string mssv;
    string hoTen;
    string diaChi;
    int tongSoTinChi;
    double diemTrungBinh;

public:
    SinhVien();

    virtual void Nhap();
    virtual void Xuat();
    virtual bool XetTotNghiep();
    virtual int LayLoai(); // 1 cho Cao dang, 2 cho Dai hoc

    double LayDiemTrungBinh();
};

#endif
