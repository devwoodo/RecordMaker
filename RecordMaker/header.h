#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <random>
#include <unordered_map>

// 사원 정보
class EmployeeInform
{
public:
	EmployeeInform(unsigned int number, unsigned int score);
	EmployeeInform(const EmployeeInform&);
	EmployeeInform(EmployeeInform&&);
	
	EmployeeInform& operator=(const EmployeeInform&);
	EmployeeInform& operator=(EmployeeInform&&);
	
	// accessor
	std::string get_position() const;
	unsigned int get_number() const;
	unsigned int get_score() const;
	// mutator
	void set_number(unsigned int newNumber);
	void set_score(unsigned int newScore);
public:
private:
	EmployeeInform();
private:
	const std::string _position;
	unsigned int _number;
	unsigned int _score;

	friend std::ostream& operator<<(std::ostream& os, const EmployeeInform& ei);
};

// 사원 정보 목록
class EInfoList
{
public:
	EInfoList();

	void addPeople();
	std::unordered_map<unsigned int, EmployeeInform>::iterator begin();
	std::unordered_map<unsigned int, EmployeeInform>::iterator end();
	std::unordered_map<unsigned int, EmployeeInform>::const_iterator cbegin();
	std::unordered_map<unsigned int, EmployeeInform>::const_iterator cend();



public:
private:
private:
	std::unordered_map<unsigned int, EmployeeInform> _list;
};

int randomNumber(int minVal, int maxVal);