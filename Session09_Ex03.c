#include<stdio.h>

int main() {
	int arr[100];
	int i;
	int index;
	int n;
		printf("kich thuoc mang ma ban mong muon la: \n");
		scanf("%d", &n);
		printf("cac phan tu co trong mang cua ban la: \n");
		   for(i = 0; i < n; i++){
		   	 printf(" phan tu number[%d] co gia tri la: \n", i + 1);
		   	 scanf("%d", &arr[i]);
		   }
		if(n > 0){
			printf("vi tri phan tu trong mang ma ban muon xoa la: (luu y chi nhap tu 0 den %d)\n", n - 1);
			scanf("%d", &index);
			if(index > 0 && index < n){
				for( i = index; i < n - 1; i++){
					arr[i] =arr[i - 1];
				}
					n--;
					printf("phan tu tai vi tri %d da duoc xoa thanh cong: \n", index);
			} else{
				printf("gia tri ban vua nhap sai r: ");
			}
		} else {
			printf("ko co gia tri nao trong mang de xoa:");
		}
		printf("\n cac gia tri co trong mang la: \n\n");
		for(i = 0; i < n; i++){
			printf("number[%d] = %d\n", i, arr[i]);
		}
		return 0;
		
}
