#include "header.h"

int main(int argc, char * argv[])
{
	// 실행문 형식이 맞지 않는 경우
	if (argc < 2) {
	std::cout << "Wrong use. Try " << std::endl << "RecordMaker number" << std::endl;
	exit(1);
	}

	int count = std::stoi(argv[1]);

	// 실행문 형식이 맞지 않는 경우
	if (count < 1) {
	std::cout << "Wrong use. Second parameter should be larger than 0." << std::endl;
	exit(1);
	}

	// 사원 정보 리스트 생성
	EInfoList eList;
	for (int i = 0; i < count+1; i++)
		eList.addPeople();

	// 사원 정보 출력
	int it = 1;
	for (const auto& el : eList) {
		std::cout << el.second << std::endl;
		if (it >= count)
			break;
		it++;
	}


	return 0;
}