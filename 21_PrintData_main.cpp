#include "21_PrintData.h"	//외부 라이브러리의 헤더만 가져다가 쓰면 된다.

using namespace std;

/*
	header file(.h)와 source code(.cpp)로 분리
	class definition은 header file (.h)로,
	class function implementation은 .cpp
	이 class를 사용하는 main함수는 별도의 .cpp로
*/

int main()
{
	PrintData* ppd = new PrintData();
	ppd->myprint(999);
	delete ppd;

	return 0;
}
