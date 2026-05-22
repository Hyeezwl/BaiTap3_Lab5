#include "Truong.h"

Truong::Truong() {
    soLuong = 0;
}

void Truong::NhapDanhSach() {
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuong;

    for (int i = 0; i < soLuong; i++) {
        int chon;
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        cout << "Nhap 1 cho Cao dang, 2 cho Dai hoc: ";
        cin >> chon;

        if (chon == 1) {
            danhSach[i] = new SinhVienCaoDang();
        } else {
            danhSach[i] = new SinhVienDaiHoc();
        }

        danhSach[i]->Nhap();
    }
}

void Truong::XuatDanhSach() {
    cout << "\nDANH SACH SINH VIEN\n";
    for (int i = 0; i < soLuong; i++) {
        danhSach[i]->Xuat();
    }
}

void Truong::DanhSachTotNghiep() {
    cout << "\nDANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP\n";
    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->XetTotNghiep() == true) {
            danhSach[i]->Xuat();
        }
    }
}

void Truong::DanhSachKhongTotNghiep() {
    cout << "\nDANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP\n";
    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->XetTotNghiep() == false) {
            danhSach[i]->Xuat();
        }
    }
}

void Truong::DaiHocDiemCaoNhat() {
    double maxDiem = -1;
    int viTri = -1;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayLoai() == 2) {
            if (maxDiem == -1 || danhSach[i]->LayDiemTrungBinh() > maxDiem) {
                maxDiem = danhSach[i]->LayDiemTrungBinh();
                viTri = i;
            }
        }
    }

    if (viTri != -1) {
        cout << "\nSINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT\n";
        danhSach[viTri]->Xuat();
    } else {
        cout << "\nKhong co sinh vien dai hoc.\n";
    }
}

void Truong::CaoDangDiemCaoNhat() {
    double maxDiem = -1;
    int viTri = -1;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayLoai() == 1) {
            if (maxDiem == -1 || danhSach[i]->LayDiemTrungBinh() > maxDiem) {
                maxDiem = danhSach[i]->LayDiemTrungBinh();
                viTri = i;
            }
        }
    }

    if (viTri != -1) {
        cout << "\nSINH VIEN CAO DANG CO DIEM TRUNG BINH CAO NHAT\n";
        danhSach[viTri]->Xuat();
    } else {
        cout << "\nKhong co sinh vien cao dang.\n";
    }
}

void Truong::ThongKeKhongTotNghiep() {
    int demCaoDang = 0;
    int demDaiHoc = 0;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->XetTotNghiep() == false) {
            if (danhSach[i]->LayLoai() == 1) {
                demCaoDang++;
            } else if (danhSach[i]->LayLoai() == 2) {
                demDaiHoc++;
            }
        }
    }

    cout << "\nTHONG KE SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP\n";
    cout << "So sinh vien Cao dang khong tot nghiep: " << demCaoDang << endl;
    cout << "So sinh vien Dai hoc khong tot nghiep: " << demDaiHoc << endl;
}
