#pragma once //防止头文件重复包含
#ifndef _Identity_
#define _Identity_
#include<iostream>
using namespace std;

class Identity
{
public:
	//操作菜单  纯虚函数
	virtual void operMenu() = 0;


	//姓名
	string m_Name;
	//密码
	string m_Pwd;
};

#endif // !_Identity_


