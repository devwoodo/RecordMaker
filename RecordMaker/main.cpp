#include "header.h"

int main(int argc, char * argv[])
{
	/*if (argc < 2) {
	std::cout << "Wrong use. Try " << std::endl << "RecordMaker number" << std::endl;
	exit(1);
	}

	int count = std::stoi(argv[1]);

	if (count < 1) {
	std::cout << "Wrong use. Second parameter should be larger than 0." << std::endl;
	exit(1);
	}*/

	EInfoList eList;

	for (int i = 0; i < 10; i++)
		eList.addPeople();

	for (auto it : eList)
		std::cout << it.second << std::endl;


	return 0;
}