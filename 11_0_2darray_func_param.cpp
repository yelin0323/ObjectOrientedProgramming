#include <iostream>

using namespace std;


/*
	1. Two-dimensional array as Function argument
	2. Three-dimensional array as Function argument
*/

//2차원 배열의 합
//int sum_2d_array(int _array[][3], int _row_cnt)
int sum_2d_array(int (*_array)[3], int _row_cnt)
{
	int sum(0);

	for (int r = 0; r < _row_cnt; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			sum += _array[r][c];
			//sum += *(*(_array +r) +c); //포인터를 사용해서 계산하려면
		}
	}

	return sum;
}

//3차원 배열의 합
//int sum_3d_array(int _array[][2][3], int _row_cnt)
int sum_3d_array(int (*_array)[2][3], int _row_cnt)
{
	int sum(0);

	for (int r = 0; r < _row_cnt; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			for (int k = 0; k < 3; k++)
			{
				sum += _array[r][c][k];
				//sum += *(*(*(_array + r) +c) +k);
			}	
		}
	}

	return sum;
}

int main()
{
	int array_2d_a[2][3] = { {1,1,1},{2,2,2} };

	int array_3d_a[2][2][3] = { {{1,1,1},{1,1,1}},{{2, 2, 2}, {2, 2, 2}}
};

	cout << "2d_Sum: " << sum_2d_array(array_2d_a, 2) << endl;

	cout << "3d_Sum: " << sum_3d_array(array_3d_a, 2) << endl;
	return 0;
}