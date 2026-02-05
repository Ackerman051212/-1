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


//#include<stdio.h>


//学生

//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = {"zhangsan",20,"nan","13794998455"};//初始化
//
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}



//#include<stdio.h>
//
//typedef struct student
//{
//	int height;
//	char name[20];
//
//}stu;
//
//
//
//
//int main()
//{
//	stu stu = { 170,"张三" };
//	
//
//	printf("height=%d,name=%s", stu.height, stu.name);
//
//	return 0;
//}






//#include <stdio.h>
//
//
//int main()
//{
	//int a = 10;
	//if (a = 3)//a非零为真
	//	printf("yes");

	//int age = 0;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能喝酒\n");
	//}
	//	
	//else
	//	printf("成年\n");
//	printf("请输入年龄\n");
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age <= 100)
//	{
//		printf("老年\n");
//	}
//	else
//		printf("老寿星\n");
//	return 0;
//}








#include<stdio.h>

//int test()
//{
//	int a = 6;
//		if (a == 3)
//			return 1;
//		else
//			return 0;
//}
//
//
//int main()
//{
//	int r = test();
//		printf("%d", r);
//
//	return 0;
//}

//判断一个数是否为奇数

//int main()
//{
//	int num = 0;
//	printf("请输入一个数:");
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("这个数不是奇数是偶数");
//	}
//	else
//	{
//		printf("这个数是奇数");
//	}
//	return 0;
//}




//输出1到100之间的奇数


//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		num++;
//		if (0 != num % 2)
//		{
//			printf("%d\n", num);
//		}
//		else
//			;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误!");
//		break;
//	}
//
//	return 0;
//}


//打印1~10的数字

//while循环
//break的作用是永久地终止循环
//continue的作用是跳过本次循环后面的代码,直接去判断部分，进行下一次循环的判断



//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//密码
//int main()
//{
//	char password[20];
//	printf("请输入密码:");
//	scanf("%s", password);
//	//清理输入缓冲区
//	//getchar();//读取了\n
//	//如果abcdef xxxx\n有这样一系列的字符串需要清理
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			printf("ok\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}



//计算n的阶乘
//1*2*3*4*...*n


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret=ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}




//计算1!+2!+3!+...+10!

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	int n = 0;
	for (n = 1;n <= 10;n++)
	{
		ret = 1;
		for (i = 1;i <= n;i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	
	printf("%d\n", sum);

	return 0;
}