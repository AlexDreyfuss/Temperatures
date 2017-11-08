// written by Alexandre dreyfuss
// the project gives me Temperature conversions capability
// available functions:
// 1. get_degree in double format
// 2. convert_to_"C/F"
#include <iostream>
#include "Fahrenheit.h"
#include "Celsius.h"

void main()
{
	// testing the conversions
	Celsius c(50.0);
	Fahrenheit f(70);
	Fahrenheit f1(70); 
	f = static_cast<Fahrenheit>(c);
	c = static_cast<Celsius>(f1);
	f = static_cast<Fahrenheit>(c);
	// table for temperatures:

	std::cout << "----------------------------------------------------------------" << std::endl; 
	std::cout << "|Water boiling point:  |"<< Celsius(100) << "     or  "<< Fahrenheit(Celsius(100))<< "     |" <<std::endl;
	std::cout << "|Water freezing point: |" << Celsius(0) << "       or  " << Fahrenheit(Celsius(0)) << "      |" << std::endl;
	std::cout << "|Absolure zero:        |" << Celsius(-1 * 273.15) << " or  " << Fahrenheit(Celsius(-1 * 273.15)) << " |" << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
}