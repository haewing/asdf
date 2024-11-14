//------------------------------------------------------
// STRING.cpp
// std::string의 기능을 구현해 보며 연산자 오버로딩을 연습하기 위한 클래스
// 여기에서 클래스의 멤버함수를 정의한다.
// 
// 2024.11.13 
//------------------------------------------------------

#include<Cstring>
#include"STRING.h"
#include<iostream>

bool 관찰{false};

STRING::STRING(const char* s)
	: num{ strlen(s) }
{
	p = new char[num];
	//for 로 복사하면 cpu 가 개입함 
	memcpy(p, s, num);

	if(관찰)
		std::cout << "생성자 - "<< num << ", 주소 - " << this << std::endl;
}
STRING::~STRING()
{
	if (관찰)
		std::cout << "소멸자 - " << num << ", 주소 - " << this << std::endl;
	delete[] p;

}// 소멸자

STRING::STRING(const STRING& other)
	: num { other.num }
{
	p = new char[num];
	memcpy(p, other.p, num);

	if (관찰)
		std::cout << "복사생성자 - " << num << ", 주소 - " << this << std::endl;
}//복사생성자

STRING& STRING::operator=(const STRING& other)
{
	if (this == &other)
		return *this;

	delete[] p;

	num = other.num;
	p = new char[num];

	memcpy(p, other.p, num);

	if (관찰)
		std::cout << "복사할당연산자 - " << num << ", 주소 - " << this << std::endl;

	return *this;
}//복사할당연산자

//연산자 오버로딩
STRING operator+(const char*) {
	//담주 월욜에 채워보기!
	
}


size_t STRING::size() const
{
	return num;
}