/*
	파일을 읽어서 포맷팅하여 출력하기
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BioData
{
public:
	int idx;
	float height;
	float weight;
public:
	BioData(int _i, float _h, float _w) : idx(_i), height(_h), weight(_w) {}
	void PrintData();
};

void BioData::PrintData()
{
	std::cout << idx << "번은 키가 " << height << "cm이고, 체중은" << weight << "kg입니다." << endl;
}

std::vector<BioData> db;

int main()
{
	ifstream input_file("data.txt");

	if (!input_file)
	{
		cout << "Unable to open" << endl;
		exit(1);
	}

	int idx;
	float height;
	float weight;

	while (input_file.eof() == false)
	{
		input_file >> idx >> height >> weight;
		db.push_back(BioData(idx, height, weight));
	}

	double mean_h = 0.0;
	double mean_w = 0.0;
	for (auto& e : db)
	{
		mean_h += e.height;
		mean_w += e.weight;
		e.PrintData();
	}

	cout << "평균 키는 " << mean_h / db.size() << endl;
	cout << "평균 체중은 " << mean_w / db.size() << endl;

	return 0;
}