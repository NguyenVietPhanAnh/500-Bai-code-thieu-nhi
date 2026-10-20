#include<stdio.h>
int main(){
	int A[100],p,tong,k;
	k=0;
	printf("Nhap so phan tu cua mang (<100):");
	while(true){
		scanf("%d",&p);
		if(p<=1||p>=100)
			printf("So phan tu khong hop le, vui long nhap lai:");
		else break;
	}
	// Nhap vao kich co mang
	
	for(int i=0;i<p;i++){
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d",&A[i]);
	}
	// Nhap vao mang
	
	printf("Nhap vao tong: ");
	scanf("%d", &tong); //Nhap vao tong
	
	for(int i=0; i<p; i++){
		for(int j=i+1; j<p; j++){
			if(A[i]+A[j]==tong && k==0){
				printf("Pair found(%d, %d)\n", A[i],A[j]);
				k++;
			}else if(A[i]+A[j]==tong && k!=0){
				printf("Or");
				printf("Pair found(%d, %d)\n", A[i],A[j]);
				k++;
			}
		}
	}
	if(k==0){
		printf("Pair not found");
	}
}
