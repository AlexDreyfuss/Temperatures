class iostream;
class Celsius;


/* Temperature in F.*/
class Fahrenheit {
	double my_degrees;
	
public:
	explicit Fahrenheit();
	explicit Fahrenheit(double d);
	explicit Fahrenheit(Celsius d);
	double convert_to_C() const;
	double get_degrees() const;
	friend std::ostream& operator<<(std::ostream& os, const Fahrenheit& obj);
};