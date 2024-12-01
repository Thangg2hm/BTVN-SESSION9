#include <stdio.h>

int main() {
    int mang[100];
    int soPhanTu, viTri;

    printf("Nhap so phan tu muon nhap (1-100): ");
    scanf("%d", &soPhanTu);
    mang[soPhanTu];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i <soPhanTu; i++) {
        printf("Nhap phan tu thu %d: ", i+1 );
        scanf("%d", &mang[i]);
    }

    int dodaimang = soPhanTu;

    printf("Nhap vi tri muon xoa (0 den %d): ",dodaimang - 1);
    scanf("%d", &viTri);

    if (viTri >= 0 && viTri < dodaimang) {
        for (int i = viTri; i < dodaimang - 1; i++) {
            mang[i] = mang[i + 1];
        }
        dodaimang--;

        printf("Mang sau khi da xoa phan tu tai vi tri %d:\n", viTri);
        for (int i = 0; i <dodaimang; i++) {
            printf("%d ", mang[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri khong hop le\n");
    }

    return 0;
}

