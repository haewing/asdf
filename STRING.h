//------------------------------------------------------
// STRING.h
// std::string의 기능을 구현해 보며 연산자 오버로딩을 연습하기 위한 클래스
// 헤더에서는 클래스를 선언한다.
//------------------------------------------------------

#pragma once
class STRING {
public:
	STRING() = default;          //디폴트 생성자
	STRING(const char* s); 		
	~STRING();					// 소멸자

	//STRING(const STRING&)= default;이러면 죽음
	STRING(const STRING&);               //복사생성자
	STRING& operator=(const STRING&);	//복사할당연산자
	
	//연산자 오버로딩
	STRING operator+(const char*);


	size_t size() const;

private:
	size_t num{};
	char* p{};

};
