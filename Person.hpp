#include <string>
#include <fstream>

class Person {
  public:
  
	void showPersonInfo(){};
	
	void setAge(unsigned int);
	unsigned int getAge();
	
	std::string getTimeWindow(std::string date);
	
	/* Time Windows: 	1 ~ 00-06 hours
						2 ~ 07-09
						3 ~ 10-17
						4 ~ 18-23
	*/
	
	int analyseSensedData(unsigned int time_window,unsigned int sample_value);
		
	
	~Person();
	
  private:
	std::ofstream personFile;
	std::string name;
	int age;
};