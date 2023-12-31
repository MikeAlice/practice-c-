#pragma once
#ifndef _teacher_
#define _teacher_
#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include"Identity.h"
#include"orderFile.h"

class Teacher :public Identity
{
public:
	//默认构造
	Teacher();
	//有参构造
	Teacher(int empId, string name, string pwd);
	//菜单界面
	virtual void operMenu();
	//查看所有预约
	void showAllOrder();
	//审核预约
	void validOrder();
	//职工号
	int m_EmpId;
};

#endif // !_teacher_

