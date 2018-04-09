//把一个整数按8  10  16 打印出来。
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int x=0;
	cout <<"请输入一个整数：";

	cin >>x;

	cout <<"这个整数的8进制是："<<oct<<x<<endl;
	cout <<"这个整数的10进制是："<<x<<endl;
	cout <<"这个整数的16进制是："<<hex<<x<<endl;

	return 0;


}