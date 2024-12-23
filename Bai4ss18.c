#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char fullname[20];
	int age;
	char phonenumber[20];
};
typedef struct sinhvien sinhvien;
int main(){
	sinhvien st[50];
	int n;
	printf("Nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<n;i++){
		st[i].id=i+1;
		printf("Id:%d",st[i].id);
		printf("\nHo va ten: ");
		fgets(st[i].fullname,sizeof(st[i].fullname),stdin);
		fflush(stdin);
		printf("Tuoi: ");
		scanf("%d",&st[i].age);
		fflush(stdin);
		printf("So dien thoai: ");
		fgets(st[i].phonenumber,sizeof(st[i].phonenumber),stdin);
		fflush(stdin);
}
	printf("Thong tin sinh vien vua nhap\n");
	for(int i=0;i<n;i++){
		printf("Sinh vien thu: %d\n",st[i].id);
		printf("Ho va ten: %s",st[i].fullname);
		printf("Tuoi: %d",st[i].age);
		printf("So dien thoai: %s",st[i].phonenumber);
	}
return 0;
}

