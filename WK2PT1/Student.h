#pragma once

#include <iostream>

class Student 
{
public:
	Student(std::string _name);

	std::string GetName()
	{
		return _name;
	}

	//Encapsulation
	void SetName(std::string _name)
	{
		this->_name = _name;
	}

	

private:
	std::string _name;
};
