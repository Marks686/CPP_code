#include<stdio.h>

enum Day//һ��ö������
{
	//ö�ٳ���
	Mon = 1,//0+1
	Tues,//1+1
	Wed,//2+1
	Thur,//3+1
	Fri,//4+1
	Sat,//5+1
	Sun//6+1
};//�Ǹ�ͼֽ������ռ�ÿռ�

//struct Stu
//{
//	int a;
//	char c;
//};
//#define Mon 1
//#define Tues 2

int main1()
{
	enum Day d = Fri;
	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Sat);
	printf("%d\n", Sun);

	return 0;
}

union Un
{
	int a;
	char c;
};

struct st
{
	int a;
	char c;
};

//����
int main2()
{
	union Un u;
	u.a = 0x11223344;
	u.c = 0x00;
	//   printf("%d\n", sizeof(u));

	//printf("%p\n", &u);
	//printf("%p\n", &(u.a));
	//printf("%p\n", &(u.c));


	return 0;
}

//�жϴ�С��
//1

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main3()
{
	int a = 1;//0x 00 00 00 01
	//С��-----01 00 00 00
	//���-----00 00 00 01
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n ");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}

//union Un
//{
//	char arr[5];
//	int i;
//};
union Un
{
	short arr[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}