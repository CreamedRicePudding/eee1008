#include"Person.hpp"
#include<iostream>
#include<time.h>
#include<unistd.h>
#include<fstream>
#include<stdlib.h>
#include <iomanip> 

using namespace std;

void Person::setAge(unsigned int Age){						//setAge
	age = Age;
}
unsigned int Person::getAge(){								//getAge
	return age;
}

string Person::getTimeWindow(std::string date){		//Algorithm for converting timestamp to time_window int
	int hour = stoi(date.substr(11,2));						//Read the hour from the timestamp
	string time_window;
	
	if (hour < 7) {
		time_window = "Night";
	}
	else if (hour < 10) {
		time_window = "Morning";
	}
	else if (hour < 18) {
		time_window = "Day";
	}
	else if (hour < 24) {
		time_window = "Evening";
	}
	else cout << "\nTimestamp interface error.\n\n";
	
	
	return time_window;
}

int Person::analyseSensedData(unsigned int time_window,unsigned int sample_value){
	int critical_value;
	
	return critical_value;
}




Person::~Person(){
	if(personFile.is_open())	
		personFile.close();
}

