//------------------------------------------------------
// STRING.cpp
// std::string�� ����� ������ ���� ������ �����ε��� �����ϱ� ���� Ŭ����
// ���⿡�� Ŭ������ ����Լ��� �����Ѵ�.
// 
// 2024.11.13 
//------------------------------------------------------

#include<Cstring>
#include"STRING.h"
#include<iostream>

bool ����{false};

STRING::STRING(const char* s)
	: num{ strlen(s) }
{
	p = new char[num];
	//for �� �����ϸ� cpu �� ������ 
	memcpy(p, s, num);

	if(����)
		std::cout << "������ - "<< num << ", �ּ� - " << this << std::endl;
}
STRING::~STRING()
{
	if (����)
		std::cout << "�Ҹ��� - " << num << ", �ּ� - " << this << std::endl;
	delete[] p;

}// �Ҹ���

STRING::STRING(const STRING& other)
	: num { other.num }
{
	p = new char[num];
	memcpy(p, other.p, num);

	if (����)
		std::cout << "��������� - " << num << ", �ּ� - " << this << std::endl;
}//���������

STRING& STRING::operator=(const STRING& other)
{
	if (this == &other)
		return *this;

	delete[] p;

	num = other.num;
	p = new char[num];

	memcpy(p, other.p, num);

	if (����)
		std::cout << "�����Ҵ翬���� - " << num << ", �ּ� - " << this << std::endl;

	return *this;
}//�����Ҵ翬����

//������ �����ε�
STRING operator+(const char*) {
	//���� ���翡 ä������!
	
}


size_t STRING::size() const
{
	return num;
}