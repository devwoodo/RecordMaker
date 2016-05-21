#include "header.h"

int main(int argc, char * argv[])
{
	EmployeeInform ei(randomNumber(0, 99999), randomNumber(0,99));

	std::cout << ei << std::endl;

	EInfoList eList;

	for (int i = 0; i < 10; i++)
		eList.addPeople();

	for (auto it : eList)
		std::cout << it.second << std::endl;


	return 0;
}