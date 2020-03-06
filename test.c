#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

// 预处理详解(Linux)
// 1. 预定义符号(都是在预处理时被处理的 最终编译好之后 被替换)
// _FILE_   // 进行编译的源文件名称
// _LINE_   // 当前文件的行号
// _DATE_   // 文件被编译的日期
// _TIME_   // 文件被编译的时间
// _STDC_   // 如果编译器遵循ANSI C, 其值为 1, 否则未定义
//int main1(){
//	printf("%s\n", _FILE_); // 打印出来是test.c
//	printf("%d\n", _LINE_); // 打印的是当前_LINE_所在的行号
//	printf("%s\n", _DATE_); // Mar 6 2020
//	printf("%s\n", _TIME_); // 10:17:11
//	printf("%d\n", _STDC_); // 1
//
//	system("pause");
//	return 0;
//}
// #define 定义表示符
// #define name stuff(使用后者直接替换前者) 宏本身的特征:文本替换
// 如果定义的stuff过长, 可以分成几行写, 除了最后一行外, 每行的后面都加一个反斜杠(续行符)
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n",\
//							_FILE_, _LINE_, \
//							_DATE_, _TIME_ )
// 在define标识符的时候, 不要在后面加上分号(;)
// 建议不要加上, 容易导致问题 出现语法错误
int main2(){

	system("pause");
	return 0;
}
// #define 定义宏
// #define name(parament-list) stuff 其中的parament-list是一个由逗号隔开的符号表,他们可能出现在stuff中
// 注意: 参数列表的左括号必须与name紧邻. 如果两者之间有任何空白存在,参数列表就会被解释为stuff的一部分
// 如:#define SQUARE( x ) x * x 这个宏接受一个参数 x, 如果在上述申明之后,把
// SQUARE( 5 ); 置入程序中, 预处理器就会用下面这个表达式代替上面的表达式: 5 * 5
 
#define SQUARE( x ) x * x
// 这个宏有问题, 替换文本时, 参数被替换成a + 1, 所以这个语句实际上变成了: printf("%d\n", a+1*a+1)
int  main(){
	int a = 5;
	printf("%d\n", SQUARE(a + 1));// 将打印11

	system("pause");
	return 0;
}


