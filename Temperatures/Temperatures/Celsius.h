class iostream;
class Fahrenheit;

/* Temperature in C.*/
class Celsius {

	double my_degrees;
	
public:
	explicit Celsius();
	explicit Celsius(double d);
	explicit Celsius(Fahrenheit f);
	double convert_to_F() const;
	double get_degrees() const;
    friend std::ostream& operator<<(std::ostream& os, const Celsius& obj);
	
};