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

// 宏定义(普通, 类函数)
// #define 定义表示符
// #define name stuff(使用后者直接替换前者) 宏本身的特征:文本替换
// 如果定义的stuff过长, 可以分成几行写, 除了最后一行外, 每行的后面都加一个反斜杠(续行符)
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n",\
//							_FILE_, _LINE_, \
//							_DATE_, _TIME_ )
// 在define标识符的时候, 不要在后面加上分号(;)
// 建议不要加上, 容易导致问题 出现语法错误
//#define M 10
//#define M 10;
//#define F 0
//int main(){
//	int a = 0;
//	if (F){
//		a = M;// 当宏定义后面有; 时, 这里替换后为 a = 10;; 
//		// 两个分号之间存在空语句 而if else中间只能有一条语句 而这里有两条
//	}
//	else{
//		a = M * 10;// 这里替换为a = 10;*10;  语法错误
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


// #define 定义宏 
// #define name(parament-list) stuff 其中的parament-list是一个由逗号隔开的符号表,他们可能出现在stuff中
// 注意: 参数列表的左括号必须与name紧邻. 如果两者之间有任何空白存在,参数列表就会被解释为stuff的一部分
// 如:#define SQUARE( x ) x * x 这个宏接受一个参数 x, 如果在上述申明之后,把
// SQUARE( 5 ); 置入程序中, 预处理器就会用下面这个表达式代替上面的表达式: 5 * 5
 
//#define SQUARE( x ) x * x
//#define SQUARE( x ) (x) * (x)  // 这样就对了
//#define DOUBLE(x) (x) + (x)
//#define DOUBLE(x) ((x) + (x))// 这就对了
//#define N 10
//#define DOUBLE(x) ((x) + (x))
//#define M N
//#define N M // 不能出现递归 
//#define MIN "hello"

//int  main(){
//	char* msg = "MINabcMIN";// MIN不会被字符串常量替换掉 
//	char* str = "hello";
	//int a = M;
	//int b = N;// 预处理期没有处理
	//printf("%d, %d\n", a, b);
// printf("%d\n", N * DOUBLE(DOUBLE(N)));// 10*(( (((10) + (10))) + (((10) + (10))) )) 
//	printf("%d\n", N * DOUBLE(N));// 10 * (10 + 10) = 200
//	//printf("%d\n", DOUBLE(20));// 40
//	//printf("%d\n", 10 * DOUBLE(20));// 10 * (20) + (20) = 220

//	//int a = 5;
// 这个宏有问题, 替换文本时, 参数被替换成a + 1, 所以这个语句实际上变成了: printf("%d\n", a+1*a+1)
//	//printf("%d\n", SQUARE(a + 1));// 将打印11 后者打印出来是36
//
//	system("pause");
//	return 0;
//}

// # 和 ##
// 只有当字符串作为宏参数的时候 才可以吧字符串放在字符串中,
//#define PRINT(FORMAT, VALUE) \
//	printf("the value is: "FORMAT"\n", VALUE);
//
//int main(){
//	PRINT("%d", 10);// 结果为the value is: 10  被替换成 printf("the value is: ""%d""\n", 10);;
//	//// 相邻字符串连接
//	//printf("hello world\n""hello bit\n");
//	//const char* msg = "abcd""efg";
//	//printf("%s""xyz\n", msg);// 打印 abcdefgxyz 将多个字符串常量放在一起便成为了一个字符串 
//
//	system("pause");
//	return 0;
//}

// ## 可以吧位于它两边的符号合成一个符号, 它允许宏定义从分离的文本段创建标识符
// 带副作用的宏参数
// x + 1; x++ 
//#define SUM(num, value) a##num+=value

#define MAX(a,b) ((a) > (b)) ? (a) : (b)) // MAX是比较a, b大小的问题 正常情况下这样写是对的
int main(){
	x = 5;
	y = 8;
	z = 0;
	z = MAX(x++, y++);
	// z = ((x++) > (y++) ? (x++) : (y++));
	printf("x = %d y = %d z = %d\n", x, y, z);// 


	//int a = 10;
	//// a + 1;// 没有副作用
	//a++;
	//printf("%d\n", a);
	////int a1 = 10;
	////SUM(1, 20);// 变成 a1 += 20
	////printf("%d\n", a1);// 30

	system("pause");
	return 0;
}

