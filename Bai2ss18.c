#include<stdio.h>
#include<string.h>
struct sinhvien{
	char fullname[50];
	int age;
	char phonenumber[50];
};
typedef struct sinhvien sinhvien;
int main(){
	sinhvien s;
	printf("Nhap thong tin sinh vien: \n");
	printf("Ho va ten: ");
	fgets(s.fullname,sizeof(s.fullname),stdin);
	fflush(stdin);
	printf("Tuoi: ");
	scanf("%d",&s.age);
	fflush(stdin);
	printf("So dien thoai: ");
	fgets(s.phonenumber,sizeof(s.phonenumber),stdin);
	printf("Thong tin sinh vien vua nhap: \n");
	printf("Ho va ten:%s",s.fullname);
	printf("Tuoi:%d",s.age);
	printf("So dien thoai:%s",s.phonenumber);
	
return 0;
}

