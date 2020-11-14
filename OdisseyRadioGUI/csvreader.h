#pragma once
#include <fstream>


ref class CSVReader {

private:



	int checkFile(char* file){

		std::ofstream myfile;
		myfile.open(file);
		
		if (myfile.is_open()) {
			return 0;
		}
		else {
			return 1;
		}
	}


public:

	CSVReader(char* file){
		
		if (checkFile(file) == 0) {
		}
		else {
		}
		
		
	}

	~CSVReader(){


	}







};