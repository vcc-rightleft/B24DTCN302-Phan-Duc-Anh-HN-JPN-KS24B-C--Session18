#include<stdio.h>
#include<string.h>
struct sinhvien{
	char fullname[50];
	char age;
	char phonenumber[50];
};
typedef struct sinhvien sinhvien;
int main(){
sinhvien s;
strcpy(s.fullname, "Phan Duc Anh");
s.age=18;
strcpy(s.phonenumber,"0355286868");
printf("Thong tin sinh vien: \n");
printf("Ho va ten:%s\n",s.fullname);
printf("Tuoi:%d\n",s.age);
printf("Sdt:%s\n",s.phonenumber);
return 0;
}

