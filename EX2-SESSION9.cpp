#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int doDaiMang = sizeof(mang) / sizeof(mang[0]);
    int viTri, giaTriMoi;

    printf("Nhap vao vi tri can sua (0 den %d): ", doDaiMang - 1);
    scanf("%d", &viTri);

    if (viTri >= 0 && viTri < doDaiMang) {
        printf("Nhap vao gia tri moi: ");
        scanf("%d", &giaTriMoi);
        mang[viTri] = giaTriMoi;

        printf("Mang sau khi da sua:\n");
        for (int i = 0; i < doDaiMang; i++) {
            printf("%d ", mang[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri khong hop le\n");
    }

    return 0;
}

