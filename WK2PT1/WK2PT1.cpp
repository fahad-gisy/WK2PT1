

#include <iostream>
#include "Student.h"
#include "Phone.h"
#include <vector>

std::vector<Phone> _phones;

void PrintAllPhonesInfo() 
{
	for (int i = 0; i < _phones.size(); i++)
	{
		_phones[i].PrintPhoneInfo();
	}
}

void AddPhonesToVector(Phone& _phone)
{
     _phones.push_back(_phone);
     std::cout << "Phone: " << _phone.GetPhoneName() << " added to the vector\n";	
}



void MakeCall(Phone* _phone)
{
	if (_phone == nullptr) 
	{
		std::cout << "You have no phone to call with\n";
		return;
	}

	_phone->MakeCall(); 
}

int main()
{
	Phone _iPhone11("IPhone 11",100,"1122");
	Phone _S23("Samsung S23",3,"2233");

	//MakeCall(&_iPhone11);
	//MakeCall(&_S23);// other phone with low battery

	//AddPhonesToVector(_iPhone11);
	//AddPhonesToVector(_S23);

	//PrintAllPhonesInfo();

	//Student st("Fahad"); One More class
	
}


