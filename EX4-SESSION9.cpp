#include <stdio.h>

#define MAX_SIZE 100

void nhapMang(int mang[], int *currentLength) {
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", currentLength);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

void hienThiMang(int mang[], int currentLength) {
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

void themPhanTu(int mang[], int *currentLength) {
    if (*currentLength >= MAX_SIZE) {
        printf("Mang da day, khong the them phan tu moi.\n");
        return;
    }

    int giaTriMoi, viTri;
    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);
    printf("Nhap vi tri muon them vao (0 den %d): ", *currentLength);
    scanf("%d", &viTri);

    if (viTri >= 0 && viTri <= *currentLength) {
        for (int i = *currentLength; i > viTri; i--) {
            mang[i] = mang[i - 1];
        }
        mang[viTri] = giaTriMoi;
        (*currentLength)++;
    } else {
        printf("Vi tri khong hop le\n");
    }
}

void suaPhanTu(int mang[], int currentLength) {
    int viTri, giaTriMoi;
    printf("Nhap vao vi tri can sua (0 den %d): ", currentLength - 1);
    scanf("%d", &viTri);

    if (viTri >= 0 && viTri < currentLength) {
        printf("Nhap vao gia tri moi: ");
        scanf("%d", &giaTriMoi);
        mang[viTri] = giaTriMoi;
    } else {
        printf("Vi tri khong hop le\n");
    }
}

void xoaPhanTu(int mang[], int *currentLength) {
    int viTri;
    printf("Nhap vi tri muon xoa (0 den %d): ", *currentLength - 1);
    scanf("%d", &viTri);

    if (viTri >= 0 && viTri < *currentLength) {
        for (int i = viTri; i < *currentLength - 1; i++) {
            mang[i] = mang[i + 1];
        }
        (*currentLength)--;
    } else {
        printf("Vi tri khong hop le\n");
    }
}

int main() {
    int mang[MAX_SIZE];
    int currentLength = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(mang, &currentLength);
                break;
            case 2:
                hienThiMang(mang, currentLength);
                break;
            case 3:
                themPhanTu(mang, &currentLength);
                break;
            case 4:
                suaPhanTu(mang, currentLength);
                break;
            case 5:
                xoaPhanTu(mang, &currentLength);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (luaChon != 6);

    return 0;
}

