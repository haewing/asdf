//-----------------------------------------------------------
// save.h										2024.09.04
// 
// ���б� ���Ǹ� �����ϴ� �Լ� save
//-----------------------------------------------------------
#include<iostream>
#include<string>
#include<fstream>
#include<chrono>


void save(const std::string& inFileName) {
	std::ifstream in{ inFileName };
	//�б���� ����
	std::ofstream out{ "2024 2�б� c++ ��910 ��910.txt",std::ios::app };
	//�̸� ������ ����α�
	out << '\n' << '\n';
	out << "============================ = " << '\n';
	//�ð����
	auto now = std::chrono::system_clock::now();
	using namespace std::literals;
	now += 9h; // �ѱ��ð�
	out << "����ð�" << now << '\n';
	out << "============================ = " << '\n';
	out << '\n';

	//���� �ð� ���
	char c{};
	in >> std::noskipws;
	while (in >> c) {
		out << c; // �������ڸ����Ͽ� �����Ѵ�
	}
	//�ѱ��ھ� �о����
	//���� ���ڸ����Ͽ� ����
}
