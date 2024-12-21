#pragma once
#include <iostream>

class Phone 
{
public:

	Phone(std::string _phoneName, int _batteryCharge, std::string _serialNumber);

	void SetSerialNumber(int _charge)
	{
		this->_batteryCharge = _charge;
	}

	//Encapsulation
	void SetSerialNumber(std::string _serialNumber)
	{
		this-> _serialNumber = _serialNumber;
	}

	std::string GetSerialNumber()
	{
		return _serialNumber;
	}

	std::string GetPhoneName()
	{
		return _phoneName;
	}


	int GetBatteryCharge() 
	{
		return _batteryCharge;
	}

	void MakeCall()
	{
		if (_batteryCharge > 5)
		{
			_batteryCharge -= 5;
			std::cout << "Making Call \n";
			std::cout << "Call is done, Battery is :" << _batteryCharge;
		}
		else
		{
			std::cout << "Low battery please charge! \n";
		}
	}

	void PrintPhoneInfo()
	{
		std::cout << "Phone Name : " << _phoneName << "\n";
		std::cout << "SerialNumber : " << _serialNumber << "\n";
    }

private:
	std::string _phoneName;
	int _batteryCharge;
	std::string _serialNumber;

};
