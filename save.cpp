//-----------------------------------------------------------
// save.h										2024.09.04
// 
// 한학기 강의를 저장하는 함수 save
//-----------------------------------------------------------
#include<iostream>
#include<string>
#include<fstream>
#include<chrono>


void save(const std::string& inFileName) {
	std::ifstream in{ inFileName };
	//읽기모드로 열기
	std::ofstream out{ "2024 2학기 c++ 월910 수910.txt",std::ios::app };
	//미리 쓰기모로 열어두기
	out << '\n' << '\n';
	out << "============================ = " << '\n';
	//시간기록
	auto now = std::chrono::system_clock::now();
	using namespace std::literals;
	now += 9h; // 한국시간
	out << "저장시간" << now << '\n';
	out << "============================ = " << '\n';
	out << '\n';

	//저장 시간 기록
	char c{};
	in >> std::noskipws;
	while (in >> c) {
		out << c; // 읽은글자를파일에 저장한다
	}
	//한글자씩 읽어오기
	//읽은 글자를파일에 쓰기
}
