#include <iostream>  
#include <string>

using namespace std;

//casting
/*
int main()
{
	char c = 'a';
	cout << c << endl;
	cout << (int)c << endl; //casting
	cout << int(c) << endl; //casting

	return 0;
}
*/


//float vs double
/*
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //더 정확하게 출력하기 위한 명령어
	float a = 10.0 / 3.0;
	double b = 10.0 / 3.0;

	a = a * 1e6; //1*10^6 지수형
	b = b * 1e6;

	cout << a << endl;
	cout << b << endl;

	return 0;
}
*/

//const
/*
int main()
{
	//define보다는 const를 사용하는 것이 변수형을 알 수 있기 때문에 더 좋다

	const int a = 10;
	cout << a << endl;
	// a = 20; -> const 변수는 변경 금지

	return 0;
}
*/

//array(배열) -> 같은 data type, 연속된 공간
/*
int main()
{
	//1. array 배열, 2. 문자열 배열 3. 문자열 입력받기 - cin.getline(배열, 최대크기 + 널문자 +1)

	const int arSize = 20;
	char buf[arSize];

	cout << "Enter answer : ";
	cin.getline(buf, arSize); // 줄바꿈이 나오기 전까지만입력으로 받겠다.

	cout << "Answer is : " << buf << endl;


	return 0;
}
*/

//string class -> 문자열 처리를 위한 c++의 강력한 도구
int main()
{
	string answer;

	//cout << "Enter answer : ";
	//cin >> answer;				//이렇게 하면 첫 단어만 입력
	//cout << "Your answer is : " << answer << endl;

	cout << "Enter answer : ";
	getline(cin, answer);
	cout << "Your answer is : " << answer << endl;

	cout << "Length : " << answer.length() << endl; // 문자열의 길이
	cout << "first : " << answer[0] << endl; //첫 번째 글자
	cout << "last : " << answer[answer.length() - 1] << endl; //마지막 글자

	return 0;
}
