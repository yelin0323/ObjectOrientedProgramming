#include <iostream>
#include <cctype>

using namespace std;


//cctype
/*
		문자를 종류를 판단하는 함수를 제공

		isalnum		//알파벳 또는 숫자면 1을 반환
		isalpha		//문자면 1을 반환
		isblank : space, tab	//빈칸이면 1 반환
		isdigit		//0~9면 1반환
		isxdigit : 16진수에 사용되는 숫자 // 0~9 A~F 면 1반환
		islower		//소문자면
		isupper		//대문자면
		isspace		//스페이스면
		ispunct : punctuation,. //,.같은 기호

		tolower //소문자로 변환
		toupper //대문자로 변환
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