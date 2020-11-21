#include <iostream>
#include <cctype>

using namespace std;


//cctype
/*
		���ڸ� ������ �Ǵ��ϴ� �Լ��� ����

		isalnum		//���ĺ� �Ǵ� ���ڸ� 1�� ��ȯ
		isalpha		//���ڸ� 1�� ��ȯ
		isblank : space, tab	//��ĭ�̸� 1 ��ȯ
		isdigit		//0~9�� 1��ȯ
		isxdigit : 16������ ���Ǵ� ���� // 0~9 A~F �� 1��ȯ
		islower		//�ҹ��ڸ�
		isupper		//�빮�ڸ�
		isspace		//�����̽���
		ispunct : punctuation,. //,.���� ��ȣ

		tolower //�ҹ��ڷ� ��ȯ
		toupper //�빮�ڷ� ��ȯ
	*/
int main()
{
	char ch;

	while (true)
	{
		cin.get(ch);
		cin.get();

		if (isalnum(ch)) cout << "alpha numberic" << endl;
		if (isalpha(ch)) cout << "alphabet" << endl;
		if (isblank(ch)) cout << "blank" << endl;
		if (isdigit(ch)) cout << "digit" << endl;
		if (isxdigit(ch)) cout << "hexa digit" << endl;
		if (ispunct(ch)) cout << "punctuation" << endl;
		if (islower(ch))
		{

			cout << "lower, " << char(toupper(ch))<< endl;
		}
		if (isupper(ch))
		{
			cout << "upper, " << char(tolower(ch)) << endl;
		}

		if (ch == '@') break;
	}

	return 0;
}