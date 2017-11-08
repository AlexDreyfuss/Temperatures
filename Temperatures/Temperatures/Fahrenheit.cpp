#include <iostream>
#include "Fahrenheit.h"
#include "Celsius.h"
/* func converts f to c
Input:
Output: double formatted conversion of f*/
double Fahrenheit::convert_to_C() const
{
	return (my_degrees - 32.0) * 5 / 9;
}

double Fahrenheit::get_degrees() const
{
	return my_degrees;
}

Fahrenheit::Fahrenheit():my_degrees(32.0)
{
}

Fahrenheit::Fahrenheit(double d):my_degrees(d)
{
}

Fahrenheit::Fahrenheit(Celsius d)
{
	my_degrees = d.convert_to_F();
}
/* overloader to print to cmd details bout temperature
Input: ostream object and obj to write
Output: print to cmd
*/
std::ostream& operator<<(std::ostream& os, const Fahrenheit& obj)
{
	os <<  obj.get_degrees() << " Fahrenheit";
	return os;
}
