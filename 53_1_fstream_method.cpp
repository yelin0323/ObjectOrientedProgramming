/*
	fstream의 input, output method 활용

	// get() : read by character
	// put() : write by charater

	// getline(stream, string) : read by string
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	std::ifstream input_file("data.txt");
	std::ofstream output_file("data_copy.txt");

	if (input_file.fail() == true)
	{
		cout << "Unable to open data.txt" << endl;
		exit(1);
	}

	if (output_file.fail() == true)
	{
		cout << "Unable to open data_copy.txt" << endl;
		exit(1);
	}

	char c;
	std::string s;

	while (input_file.eof() == false)
	{
		getline(input_file, s);
		output_file << s << endl;

		
		//한글자씩 읽고 쓰기
		//input_file.get(c);
		//output_file.put(c);

		//이렇게하면 띄어쓰기와 줄바꿈이 없어짐
		//input_file >> c;
		//output_file << c; 
	}



	return 0;
}

