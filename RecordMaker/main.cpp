#include "header.h"

int main(int argc, char * argv[])
{
	if (argc < 2) {
	std::cout << "Wrong use. Try " << std::endl << "RecordMaker number" << std::endl;
	exit(1);
	}

	int count = std::stoi(argv[1]);

	if (count < 1) {
	std::cout << "Wrong use. Second parameter should be larger than 0." << std::endl;
	exit(1);
	}

	EInfoList eList;

	for (int i = 0; i < count+1; i++)
		eList.addPeople();

	int it = 1;

	for (const auto& el : eList) {
		std::cout << el.second << std::endl;
		if (it >= count)
			break;
		it++;
	}


	return 0;
}