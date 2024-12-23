#include<stdio.h>
#include<string.h>
struct sinhvien{
	char fullname[50];
	int age;
	char phonenumber[50];
};
typedef struct sinhvien sinhvien;
int main(){
	sinhvien st[5];
	printf("Nhap thong tin cho 5 sinh vien: \n");
	for(int i=0;i<5;i++){
		printf("Sinh vien thu: %d\n",i+1);
		printf("Ho va ten: ");
		fgets(st[i].fullname, sizeof(st[i].fullname),stdin);
		fflush(stdin);
		printf("Tuoi: ");
		scanf("%d",&st[i].age);
		fflush(stdin);
		printf("So dien thoai: ");
		fgets(st[i].phonenumber, sizeof(st[i].phonenumber),stdin);
	}
	printf("\nthong tin sinh vien vua nhap: ");
	for(int i=0;i<5;i++){
		printf("\nsinh vien thu: %d",i+1);
		printf("\nHo va ten: %s",st[i].fullname);
		printf("Tuoi: %d",st[i].age);
		printf("\nSo dien thoai:%s",st[i].phonenumber);
	}
return 0;
}

