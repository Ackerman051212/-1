#include <stdio.h>
//int main()
//{
//	//printf("%d\n", sizeof(char));
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(long long));
//	//printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(double));
//	//int num1 = 0;
//	//int num2 = 0;
//	//scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	//printf("%d\n", sum);
//	const int a = 10;//const修饰的常变量，a的本质是变量，但是不能被修改，具有常量的属性
//
//	printf("%d\n", a);
//	return 0;
//}




//#define MAX 100
//#define STR "abcdef"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}






//枚举类型

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//
//};
//
//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	
//	return 0;
//}




#include <string.h>


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len = strlen("abcdef");//求字符串长度的一个函数,string length
//		printf("%d\n", len);
//	return 0;
//}











//int main()
//{
//	int input = 0;
//	printf("电子信息");
//	printf("要好好学习吗？(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好工作工资高\n");
//	}
//	else
//	{
//		printf("不好的工作工资低\n");
//	}
//	return 0;
//}






//int main()
//{
//	int line = 0;
//	printf("加入比特");
//	while (line < 20000)
//	{
//		printf("继续写代码\n");
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("大牛\n");
//	}
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数\n");
	scanf("%d %d", &num1, &num2);
	
	int sum = Add(num1, num2);
	printf("%d", sum);
	return 0;
}
