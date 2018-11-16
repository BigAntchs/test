/*
	author:big ant
	测试点：测试构造函数能否作为回调函数。
	结论：构造函数可以作为回调函数。
*/
#include <stdio.h>
void __attribute__((constructor))test(void)
{
	printf("test\n");
	return;
}
typedef void(*pfuc)(void);
void test2(pfuc pfuntest)
{
	pfuntest();
	return;
}
int main(int argc, char** argv)
{
	printf("main\n");
	test2(test);
	return 0;
}
