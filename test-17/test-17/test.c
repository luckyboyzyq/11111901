#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}
//���Ʋ�����
//1.�������� -�ұ߶�������߲�ԭ����λ
//2.�߼����� -�ұ߶�������߲�0

//���Ʋ����� -��߶������ұ߲�0
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//λ������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;��     00000000 00000000 00000000 00000011
//				//		 00000000 00000000 00000000 00000101
//	//int c = a | b;��
//	int c = a^b;//���-��ͬΪ0 ��ͬΪ1
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//	int temp = 0;
//	printf("����ǰa=%d,b=%d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("����ǰa=%d,b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//		for (i = 0; i < 32; i++)
//		{
//			if (1 == ((num >> i) & 1))
//			{
//				count++;
//			}
//		}
//	/*while(num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	 
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s=a+5));//sizeof���������������a+5�ǰ���
//	//short������2���ֽ�
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//aΪ0 ������ԭ�뷴�벹��һ�� ���벹��
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111ȡ��  
//	//11111111 11111111 11111111 11111110���루�����1��
//	//10000000 00000000 00000000 00000001ԭ�롷-1
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2); //000000000000000000000001011
//		              //000000000000000000000000100
//	printf("%d\n", a);
//	a = a&(~(1 << 2));//000000000000000000000001111
//	                  //111111111111111111111111011
//	                  //000000000000000000000000100
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//int (3.14)//err
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4ch��ָ�룬����4���ֽ�
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//����ȥ���ǵ�ַ���ǵ�ַ�͵���ָ�����
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&&b;//�߼���
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;
//	////   0  ����Ĳ����� ������ֵû��
//	//printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a,b,c,d);
//	//return 0;
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;
//	//printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2335
//	//return 0;
//
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;
//	//   0  ����Ĳ����� ������ֵû��
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2234
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//	//b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "����",20,"2022012154" };
//	struct stu* ps=&s1;
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->name);
//
//	/*printf("%s\n",(*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011---a
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111----b
//	char c = a + b;
//	//10000010---c//�з���������λ�� �޷�����ֱ�Ӳ�0
//	//11111111 11111111 11111111 10000010 ����
//	//11111111 11111111 11111111 10000001 ����
//	//10000000 00000000 00000000 01111110 ԭ��
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//+���������������
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//a*b+c*d+e*f������� �޷���֤����˳��
//���ܱ�֤��3��*�ȵ�1��*��ִ��
//c + --c;
//����ֵΪ1 ����ȷ��c��--����ǰ���������
