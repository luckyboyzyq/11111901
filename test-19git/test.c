#define _CRT_SECURE_NO_WARNINGS 1
//int* p=&a;  p����ָ�����
#include <stdio.h>
//int main()
//
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//ָ�����;�����ָ����н����ò���ʱ���ܷ��ʿռ�Ĵ�С
//int*p *p�ܷ���4���ֽ�
//char*p *p�ܷ���4���ֽ�
//double*p *p�ܷ���4���ֽ�

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
	//006FF70C
	//006FF710  +4  00000..........0000����1�����͵�ַ4���ֽ�32��λ
	//006FF70C
	//006FF70D  +1 00000000  8������1���ַ���ַ1���ֽ�8��λ
	//return 0;
//}
//ָ�����;����� ָ����һ���߶�Զ ָ��Ĳ���
//int*p p+1->4���ֽ�
//char*p p+1->1
//double p+1->8
//int* test()
//{
//	int a = 10;
//	return &a;//������ʱ�����Ĵ��붼���������
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//&arrȡ��������������ĵ�ַ
//int* pa=&a
//int** ppa=&pa ����ָ��
//int*** pppa=&ppa ����ָ��
//int* arr[3]=(&a,&b,&c);

//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//3��ȫ�ֵĽṹ�����

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct stu s1 = {"��˼",30,"1213455678","Ů"};//�ֲ�����
//	stu s2 = { "����",20,"1324657889","��" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;//*pc��һ��ָ�룬ָ��arr
//};
//int main()
//{
//	char arr[] = { "hello bit\n" };
//	struct T t = { "hehe",{10,'e',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu tmp)
//{
//	printf("������%s\n", tmp.name);
//	printf("���䣺%d\n", tmp.age);
//	printf("�ֻ��ţ�%s\n", tmp.tele);
//	printf("�Ա�%s\n\n", tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("������%s\n",ps->name);
//	printf("���䣺%d\n", ps->age);
//	printf("�ֻ��ţ�%s\n", ps->tele);
//	printf("�Ա�%s\n\n", ps->sex);
//}
//int main()
//{
//	stu s1 = { "����",20,"12345678912","��" };
//	//stu s2 = { "��˼",30,"12134556789","Ů" };
//	//print1 ��print2�Ǹ�����һ��
//	//print2��һ�㣬����ռ�ÿռ䣬���ܻ����
//	print1(s1);
//	print2(&s1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	//for (i = 0; i <= 12; i++)//12��ʱ�򲻱�������Ϊæ����ѭ��
//	for (i = 0; i <= 11; i++)//����11��ʱ�򱨴���
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}//��ѭ������Ϊarr[12]��i�ĵ�ַ��ͬ ��i����0 ���½���ѭ��
//1.ջ����Ĭ��ʹ��(�ֲ�����)
//   ��ʹ�øߵ�ַ ��ʹ�õ͵�ַ
//2.���������±�������ɵ͵��߱仯
//Խ����� Խ��ı���i
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//void my_strcpy(char* dest, const char* src)//9��
//char* my_strcpy(char* dest, const char* src)//10��
//{
//	char* ret = dest;//10��
//	/*while (*src != 0)//6��
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;*/
//
//	/*if (dest != NULL && src != NULL)//7��
//	{
//		while (*dest++ = *src++)
//			{
//				;
//			}
//	}
//}*/
//	assert(dest != NULL);//8��
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//10��
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	//my_strcpy(arr1,arr2);
//	//my_strcpy(arr1, NULL);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//10��
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	//const����ָ�����*��ߵ�ʱ�����ε���*p��
//	//����ͨ��p���ı�*p(num)��ֵ
//	//const����ָ�����*�ұߵ�ʱ�����ε���p,p���ܱ��ı���
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//
//}

//������coding����
//1.ʹ��assert
//2.����ʹ��const
//3.�������õı�̷��
//4.��ӱ�Ҫ��ע��
//5.������������
int my_strlen(char* str)
{
	int count = 0;
	assert(*str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}