#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

// Ԥ�������(Linux)
// 1. Ԥ�������(������Ԥ����ʱ������� ���ձ����֮�� ���滻)
// _FILE_   // ���б����Դ�ļ�����
// _LINE_   // ��ǰ�ļ����к�
// _DATE_   // �ļ������������
// _TIME_   // �ļ��������ʱ��
// _STDC_   // �����������ѭANSI C, ��ֵΪ 1, ����δ����
//int main1(){
//	printf("%s\n", _FILE_); // ��ӡ������test.c
//	printf("%d\n", _LINE_); // ��ӡ���ǵ�ǰ_LINE_���ڵ��к�
//	printf("%s\n", _DATE_); // Mar 6 2020
//	printf("%s\n", _TIME_); // 10:17:11
//	printf("%d\n", _STDC_); // 1
//
//	system("pause");
//	return 0;
//}

// �궨��(��ͨ, �ຯ��)
// #define �����ʾ��
// #define name stuff(ʹ�ú���ֱ���滻ǰ��) �걾�������:�ı��滻
// ��������stuff����, ���Էֳɼ���д, �������һ����, ÿ�еĺ��涼��һ����б��(���з�)
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n",\
//							_FILE_, _LINE_, \
//							_DATE_, _TIME_ )
// ��define��ʶ����ʱ��, ��Ҫ�ں�����Ϸֺ�(;)
// ���鲻Ҫ����, ���׵������� �����﷨����
//#define M 10
//#define M 10;
//#define F 0
//int main(){
//	int a = 0;
//	if (F){
//		a = M;// ���궨�������; ʱ, �����滻��Ϊ a = 10;; 
//		// �����ֺ�֮����ڿ���� ��if else�м�ֻ����һ����� ������������
//	}
//	else{
//		a = M * 10;// �����滻Ϊa = 10;*10;  �﷨����
//	}
//	printf("%d\n", a);// 10

	//int a = 10;
	//char* msg = "hello world";
	//printf("%d, %s\n", \
	//	a, \
	//	msg);// 10, hello world
//	system("pause");
//	return 0;
//}


// #define ����� 
// #define name(parament-list) stuff ���е�parament-list��һ���ɶ��Ÿ����ķ��ű�,���ǿ��ܳ�����stuff��
// ע��: �����б�������ű�����name����. �������֮�����κοհ״���,�����б�ͻᱻ����Ϊstuff��һ����
// ��:#define SQUARE( x ) x * x ��������һ������ x, �������������֮��,��
// SQUARE( 5 ); ���������, Ԥ�������ͻ�������������ʽ��������ı��ʽ: 5 * 5
 
//#define SQUARE( x ) x * x
//#define SQUARE( x ) (x) * (x)  // �����Ͷ���
//#define DOUBLE(x) (x) + (x)
//#define DOUBLE(x) ((x) + (x))// ��Ͷ���
//#define N 10
//#define DOUBLE(x) ((x) + (x))
//#define M N
//#define N M // ���ܳ��ֵݹ� 
//#define MIN "hello"

//int  main(){
//	char* msg = "MINabcMIN";// MIN���ᱻ�ַ��������滻�� 
//	char* str = "hello";
	//int a = M;
	//int b = N;// Ԥ������û�д���
	//printf("%d, %d\n", a, b);
// printf("%d\n", N * DOUBLE(DOUBLE(N)));// 10*(( (((10) + (10))) + (((10) + (10))) )) 
//	printf("%d\n", N * DOUBLE(N));// 10 * (10 + 10) = 200
//	//printf("%d\n", DOUBLE(20));// 40
//	//printf("%d\n", 10 * DOUBLE(20));// 10 * (20) + (20) = 220

//	//int a = 5;
// �����������, �滻�ı�ʱ, �������滻��a + 1, ����������ʵ���ϱ����: printf("%d\n", a+1*a+1)
//	//printf("%d\n", SQUARE(a + 1));// ����ӡ11 ���ߴ�ӡ������36
//
//	system("pause");
//	return 0;
//}

// # �� ##
// ֻ�е��ַ�����Ϊ�������ʱ�� �ſ��԰��ַ��������ַ�����,
//#define PRINT(FORMAT, VALUE) \
//	printf("the value is: "FORMAT"\n", VALUE);
//
//int main(){
//	PRINT("%d", 10);// ���Ϊthe value is: 10  ���滻�� printf("the value is: ""%d""\n", 10);;
//	//// �����ַ�������
//	//printf("hello world\n""hello bit\n");
//	//const char* msg = "abcd""efg";
//	//printf("%s""xyz\n", msg);// ��ӡ abcdefgxyz ������ַ�����������һ����Ϊ��һ���ַ��� 
//
//	system("pause");
//	return 0;
//}

// ## ���԰�λ�������ߵķ��źϳ�һ������, ������궨��ӷ�����ı��δ�����ʶ��
// �������õĺ����
// x + 1; x++ 
//#define SUM(num, value) a##num+=value

#define MAX(a,b) ((a) > (b)) ? (a) : (b)) // MAX�ǱȽ�a, b��С������ �������������д�ǶԵ�
int main(){
	x = 5;
	y = 8;
	z = 0;
	z = MAX(x++, y++);
	// z = ((x++) > (y++) ? (x++) : (y++));
	printf("x = %d y = %d z = %d\n", x, y, z);// 


	//int a = 10;
	//// a + 1;// û�и�����
	//a++;
	//printf("%d\n", a);
	////int a1 = 10;
	////SUM(1, 20);// ��� a1 += 20
	////printf("%d\n", a1);// 30

	system("pause");
	return 0;
}

