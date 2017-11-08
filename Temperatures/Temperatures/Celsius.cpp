#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"

Celsius::Celsius()
{
	my_degrees = 0;
}

Celsius::Celsius(double d):my_degrees(d)
{	
}

Celsius::Celsius(Fahrenheit f)
{
	my_degrees = f.convert_to_C();
}
/* func converts c to f
Input: 
Output: double formatted conversion of c*/
double Celsius::convert_to_F() const
{
	return (my_degrees * 9 / 5) + 32.0;
}
double Celsius::get_degrees() const
{
	return my_degrees;
}
/* overloader to print to cmd details bout temperature
Input: ostream object and obj to write
Output: print to cmd
*/
std::ostream& operator<<(std::ostream& os, const Celsius& obj)
{
	os << obj.get_degrees() << " Celsius";
	return os;
}