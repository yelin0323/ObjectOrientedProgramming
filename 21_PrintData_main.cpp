#include "21_PrintData.h"	//�ܺ� ���̺귯���� ����� �����ٰ� ���� �ȴ�.

using namespace std;

/*
	header file(.h)�� source code(.cpp)�� �и�
	class definition�� header file (.h)��,
	class function implementation�� .cpp
	�� class�� ����ϴ� main�Լ��� ������ .cpp��
*/

int main()
{
	PrintData* ppd = new PrintData();
	ppd->myprint(999);
	delete ppd;

	return 0;
}
