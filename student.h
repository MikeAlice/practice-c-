#pragma once
#ifndef _student_
#define _student_
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"globalFile.h"
#include"computerRoom.h"
using namespace std;
#include"orderFile.h"
#include"Identity.h"

class Student :public Identity
{
public:
	//默认构造
	Student();
	//有参构造
	Student(int id, string naeme, string pwd);
	//菜单界面
	virtual void operMenu();
	//申请预约
	void applyOrder();
	//查看自身预约
	void showMyOrder();
	//查看所有预约
	void showAllOder();
	//取消预约
	void cancelOrder();
	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;

	//初始化机房信息
	void initComRoom();
};


#endif // !_student_

