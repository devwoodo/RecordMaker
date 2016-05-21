#include "header.h"

namespace CONST
{
	unsigned int MIN_NUMBER = 0;
	unsigned int MAX_NUMBER = 99999;
	unsigned int MIN_SCORE = 0;
	unsigned int MAX_SCORE = 99;
}

EmployeeInform::EmployeeInform() :_position("NT"), _number(0), _score(0)
{}
EmployeeInform::EmployeeInform(unsigned int number, unsigned int score) : EmployeeInform() 
{
	_number = number;
	_score = score;
}
EmployeeInform::EmployeeInform(const EmployeeInform & ei) : _position(ei._position)
{
	*this = ei;
}
EmployeeInform::EmployeeInform(EmployeeInform && ei) : _position(ei._position)
{
	*this = ei;
}
EmployeeInform & EmployeeInform::operator=(const EmployeeInform & ei)
{
	this->_number = ei._number;
	this->_score = ei._score;

	return *this;
}
EmployeeInform & EmployeeInform::operator=(EmployeeInform && ei)
{
	this->_number = ei._number;
	this->_score = ei._score;

	return *this;
}
std::string EmployeeInform::get_position() const
{
	return _position;
}
unsigned int EmployeeInform::get_number() const
{
	return _number;
}
unsigned int EmployeeInform::get_score() const 
{
	return _score;
}
void EmployeeInform::set_number(unsigned int newNumber)
{
	_number = newNumber;
}
void EmployeeInform::set_score(unsigned int newScore)
{
	_score = newScore;
}
std::ostream & operator<<(std::ostream & os, const EmployeeInform & ei)
{
	return os << ei._position << std::setw(5) << std::setfill('0') << ei._number << " " << ei._score;
}

int randomNumber(int minVal, int maxVal)
{
	int interval = maxVal - minVal + 1;
	std::mt19937 ranNum(std::chrono::system_clock::now().time_since_epoch().count());

	return (ranNum() % interval - minVal);
}

EInfoList::EInfoList()
{}

void EInfoList::addPeople()
{
	unsigned int newNum = randomNumber(CONST::MIN_NUMBER, CONST::MAX_NUMBER);
	while (_list.find(newNum) != _list.cend())
		newNum = randomNumber(CONST::MIN_NUMBER, CONST::MAX_NUMBER);
	_list.insert(std::make_pair(newNum, EmployeeInform(newNum, randomNumber(CONST::MIN_SCORE, CONST::MAX_SCORE))));
}
