#include"Sensor.hpp"
#include"Person.hpp"
#include<iostream>
#include<cstdlib>
#include<sstream>
#include<fstream>

using namespace std;



int main(int argc, char *argv[]){
	if (argc < 2) {
        	cerr << "Usage: " << argv[0] << " <sampleTime> <precisionBits> <numberOfSimulatedSamples> <NoPersons> <Age1> <Age2>..." << std::endl;
			return 0;
    	}
	else{
		cout << "You passed the following arguments: ";
		for(int argcount = 1; argcount < argc; argcount++){
			cout << argv[argcount] << "\t";
		}
		cout << endl;
		
		int sampleTime = atoi(argv[1]);
		int precisionBits = atoi(argv[2]);
		int samples = atoi(argv[3]);
		
		
		/* TODO: Process the first three arguments */
	}

	Sensor A("A", atoi(argv[1]), atoi(argv[2])); 
	A.showInfo();

	A.generateSamples(atoi(argv[3]));

	/* TODO: Declare the person objects here with different weights and ages */
	int NoPersons = atoi(argv[4]);
	if (argc == atoi(argv[4])+5){
		cout << "\nNumber of persons entered: " << NoPersons << endl; }
	else {
		cout << "\nFor " << NoPersons << " persons please enter " << NoPersons << " ages." << endl;
		return 0; }
	
	Person pA;									//Set ages with main arguments
	pA.setAge(atoi(argv[5]));
	
	Person pB;
	pB.setAge(atoi(argv[6]));
	
	Person pC;
	pC.setAge(atoi(argv[7]));
	
	Person pD;
	pD.setAge(atoi(argv[8]));
	
	Person pE;
	pE.setAge(atoi(argv[9]));
	
	cout << "Ages are: \t" << pA.getAge() <<"\t"<< pB.getAge() <<"\t"<< pC.getAge() <<"\t"<< pD.getAge() <<"\t"<< pE.getAge() <<endl;
	
	/* TODO: Read the sensed samples with timestamps and process sample information as directed in the Project info */
	
	
	
	//pA.getTimeWindow(date);
	//pA.analyseSensedData(time_window,sample_value);
	
	/* TODO: Store analysed criticality info of the persons/samples in analysis.txt file */

	return 0;
}
