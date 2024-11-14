//------------------------------------------------------
// STRING.h
// std::string�� ����� ������ ���� ������ �����ε��� �����ϱ� ���� Ŭ����
// ��������� Ŭ������ �����Ѵ�.
//------------------------------------------------------

#pragma once
class STRING {
public:
	STRING() = default;          //����Ʈ ������
	STRING(const char* s); 		
	~STRING();					// �Ҹ���

	//STRING(const STRING&)= default;�̷��� ����
	STRING(const STRING&);               //���������
	STRING& operator=(const STRING&);	//�����Ҵ翬����
	
	//������ �����ε�
	STRING operator+(const char*);


	size_t size() const;

private:
	size_t num{};
	char* p{};

};
