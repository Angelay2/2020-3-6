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
// #define �����ʾ��
// #define name stuff(ʹ�ú���ֱ���滻ǰ��) �걾�������:�ı��滻
// ��������stuff����, ���Էֳɼ���д, �������һ����, ÿ�еĺ��涼��һ����б��(���з�)
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n",\
//							_FILE_, _LINE_, \
//							_DATE_, _TIME_ )
// ��define��ʶ����ʱ��, ��Ҫ�ں�����Ϸֺ�(;)
// ���鲻Ҫ����, ���׵������� �����﷨����
int main2(){

	system("pause");
	return 0;
}
// #define �����
// #define name(parament-list) stuff ���е�parament-list��һ���ɶ��Ÿ����ķ��ű�,���ǿ��ܳ�����stuff��
// ע��: �����б�������ű�����name����. �������֮�����κοհ״���,�����б�ͻᱻ����Ϊstuff��һ����
// ��:#define SQUARE( x ) x * x ��������һ������ x, �������������֮��,��
// SQUARE( 5 ); ���������, Ԥ�������ͻ�������������ʽ��������ı��ʽ: 5 * 5
 
#define SQUARE( x ) x * x
// �����������, �滻�ı�ʱ, �������滻��a + 1, ����������ʵ���ϱ����: printf("%d\n", a+1*a+1)
int  main(){
	int a = 5;
	printf("%d\n", SQUARE(a + 1));// ����ӡ11

	system("pause");
	return 0;
}


