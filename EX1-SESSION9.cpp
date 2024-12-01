#include<stdio.h>
int main(){
	int M[100];
	int sophantu;
	printf("nhap vao so luong cac phan tu ban muon them(0-100):");
	scanf("%d",&sophantu);
	M[sophantu];
	for(int i=0;i<sophantu;i++){
		printf("nhap vao phan tu thu %d:",i+1);
		scanf("%d",&M[i]);
		}
		printf("cac phan tu cua mang la:");
		for(int j=0;j<sophantu;j++){
		printf("%d,",M[j]);
		}
		int giatrimoi,vitri;
		printf("\n nhap vao gia tri muon them:");
		scanf("%d",&giatrimoi);
		printf("nhap vao vi tri trong mang ma ban muon them(0 den %d):",sophantu);
		scanf("%d",&vitri);
		if(vitri > 0 && vitri <= sophantu){
			for(int i=sophantu;i>=vitri;i--){
                M[i]=M[i-1];
			}
			M[vitri]=giatrimoi;
		    sophantu++;
			printf("mang M sau khi them gia tri moi:\n");
			for(int a=0;a<sophantu;a++){
					printf("%d,",M[a]);
			}
		
		} else{
			printf("gia tri ban them khong hop le");
		}
		
         return 0;
		 }		
