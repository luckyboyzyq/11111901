#define _CRT_SECURE_NO_WARNINGS 1
//int* p=&a;  p叫做指针变量
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
//指针类型决定了指针进行解引用操作时，能访问空间的大小
//int*p *p能访问4个字节
//char*p *p能访问4个字节
//double*p *p能访问4个字节

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
	//006FF710  +4  00000..........0000跳过1个整型地址4个字节32个位
	//006FF70C
	//006FF70D  +1 00000000  8个跳过1个字符地址1个字节8个位
	//return 0;
//}
//指针类型决定了 指针走一步走多远 指针的步长
//int*p p+1->4个字节
//char*p p+1->1
//double p+1->8
//int* test()
//{
//	int a = 10;
//	return &a;//返回临时变量的代码都是有问题的
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//&arr取出的是整个数组的地址
//int* pa=&a
//int** ppa=&pa 二级指针
//int*** pppa=&ppa 三级指针
//int* arr[3]=(&a,&b,&c);

//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//3个全局的结构体变量

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct stu s1 = {"李思",30,"1213455678","女"};//局部变量
//	stu s2 = { "张三",20,"1324657889","男" };
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
//	char *pc;//*pc是一个指针，指向arr
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
//	printf("姓名：%s\n", tmp.name);
//	printf("年龄：%d\n", tmp.age);
//	printf("手机号：%s\n", tmp.tele);
//	printf("性别：%s\n\n", tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("姓名：%s\n",ps->name);
//	printf("年龄：%d\n", ps->age);
//	printf("手机号：%s\n", ps->tele);
//	printf("性别：%s\n\n", ps->sex);
//}
//int main()
//{
//	stu s1 = { "张三",20,"12345678912","男" };
//	//stu s2 = { "李思",30,"12134556789","女" };
//	//print1 和print2那个更好一点
//	//print2好一点，不用占用空间，性能会更好
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
//	//for (i = 0; i <= 12; i++)//12的时候不报错是因为忙着死循环
//	for (i = 0; i <= 11; i++)//换成11的时候报错了
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}//死循环是因为arr[12]和i的地址相同 给i赋了0 重新进入循坏
//1.栈区的默认使用(局部变量)
//   先使用高地址 再使用低地址
//2.数组随着下标的增长由低到高变化
//越界访问 越界改变了i
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//void my_strcpy(char* dest, const char* src)//9分
//char* my_strcpy(char* dest, const char* src)//10分
//{
//	char* ret = dest;//10分
//	/*while (*src != 0)//6分
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;*/
//
//	/*if (dest != NULL && src != NULL)//7分
//	{
//		while (*dest++ = *src++)
//			{
//				;
//			}
//	}
//}*/
//	assert(dest != NULL);//8分
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//10分
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	//my_strcpy(arr1,arr2);
//	//my_strcpy(arr1, NULL);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//10分
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	//const放在指针变量*左边的时候，修饰的是*p，
//	//不能通过p来改变*p(num)的值
//	//const放在指针变量*右边的时候，修饰的是p,p不能被改变了
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//
//}

//常见的coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编程风格
//4.添加必要的注释
//5.避免编码的陷阱
int my_strlen(char* str)
{
	int count = 0;
	assert(*str != NULL);//保证指针的有效性
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