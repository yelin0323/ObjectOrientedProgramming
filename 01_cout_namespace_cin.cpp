#include <iostream>

//hello world
/*
int main()
{
	std::cout << "Hello World" << std::endl; //endl : end of line (줄바꿈)
	//std : name space, cout : std namespace의 객체

	using namespace std; //std라는 namespace를 선언할테니까 밑에 객체들이 혼동될거같은면 std를 붙여봐라는 의미
	cout << "Hello World" << endl;

	cout << "Apple";
	cout << "Banana"; //endl이 없으면 줄바꿈없이 출력

	cout << endl;
	cout << "Apple";
	cout << endl;	//줄바꿈
	cout << "Banana"; 



	return 0;
}

*/

//변수 생성
/*
int main()
{
	using namespace std;

	int n;

	cout << "n has ";
	n = 25;
	cout << n << endl;

	n -= 1;

	cout << "n has now " << n << endl;

	return 0;
}
*/

//입력 받기
int main()
{
	using namespace std;

	cout << "enter number: ";
	int n;
	cin >> n;
	cout << "The number you entered is " << n << endl;

	return 0;
}

