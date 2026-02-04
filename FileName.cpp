//#include <stdio.h>
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




//#include <string.h>


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

//int Add(int x, int y) 函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数\n");
//	scanf("%d %d", &num1, &num2);
//	
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}




//数组

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	/*printf("%d", arr[8]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	return 0;
//}




//操作符


//int main()
//{
//	float a = 7 / 2.0;
//	printf("%.2f\n", a);
//	int b = 10;
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(int));
//	int  arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	return 0;
//}



//int main()
//{
//	//int a = 0;
//	//int b = 10;
//	//if (a && b)
//	//{
//	//	printf("good\n");
//	//}
//	//else if(a || b)
//	//{
//	//	printf("yes\n");
//	//}
//	
//	int a = 100;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}

//typedef 给函数重新命名

//typedef unsigned int = uint;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	return 0;
//}



//static 
//1.修饰局部变量 出了作用域，不销毁
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



//static修饰全局变量时，全局变量的外部链接属性就变成了内部链接属性，其他文件就不能使用这个全局变量了



//static 修饰函数,函数也具有外部链接属性，又变成了内部 链接属性,不能用extern int Add(int x, int y);调用了

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}





////指针
//#include<stdio.h>
//
//
//int main()
//{
//	int a = 10;
//	/*printf("%p\n", &a);*/
//	int* p = &a;
//	//p就是指针变量
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);
//	*p = 20;//解引用符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p所指向的对象
//	printf("%d\n", a);
//	return 0;
//}






//结构体


#include<stdio.h>


//学生

struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);

	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct Stu s = {"zhangsan",20,"nan","13794998455"};//初始化

	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}