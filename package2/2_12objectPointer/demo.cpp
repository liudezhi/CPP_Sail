#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;

/****************************************************************
Ҫ��
	����Coordinate��
	���ݳ�Ա��m_iX,m_iY
	��������ָ�룬��ͨ��ָ��ٿض���

	���������㣬�ᡢ������ĺ�
***********************************************************/


int main(void)
{
	//Coordinate *p1 = NULL;
	//p1 = new Coordinate;
	//Coordinate *p2 = new Coordinate();//()���޶���

	//p1->m_iX = 10;
	//p1->m_iY = 20;
	//(*p2).m_iX = 30;
	//(*p2).m_iY = 40;
	//cout << p1->m_iX+(*p2).m_iX << endl;
	//cout << p1->m_iY+(*p2).m_iY << endl;
	//delete p1;
	//delete p2;
	//p1 = NULL;
	//p2 = NULL;

	Coordinate p1;
	Coordinate *p2 = &p1;

	p2->m_iX = 10;
	p2->m_iY = 20;

	cout << p1.m_iX << " " << p1.m_iY << endl;

	system("pause");
	return 0;
}