#pragma once
#include <iostream>
#include <string>



ref struct nodeList {

	int nodeID;
	System::String^ nodeRuta;
	System::String^ nodeTitle;
	
	nodeList^ nodeNext;
};



ref class CSVLibrary {



private:

	nodeList^ firstNode;
	nodeList^ lastNode;

	int lengthList = 0;
	


public:

	CSVLibrary() {


	}
	~CSVLibrary() {


	}

	void insertNode(System::String^ ruta, System::String^ title) {

		if (firstNode == nullptr) {
			firstNode = gcnew nodeList();
			lastNode = firstNode;
			
			
			lastNode->nodeID = lengthList;
			lastNode->nodeRuta = ruta;
			lastNode->nodeTitle = title;
			lengthList++;
			

			
		}
		else {
			nodeList^ aux = gcnew nodeList();
			lastNode->nodeNext = aux;
			lastNode = aux;

			lastNode->nodeID = lengthList;
			lastNode->nodeRuta = ruta;
			lastNode->nodeTitle = title;
			lengthList++;

		}


	}

	void deleteNode(int nodeID) {


	}

	
	System::String^ findNode(System::String^ title) {

		nodeList^ aux = firstNode;
		
		for (int i = 0; i < lengthList; i++) {
			if (aux->nodeTitle == title) {
				return aux->nodeRuta;
			}
			else {
				aux = aux->nodeNext;
			}

		}
		
		return "File does not exist";

	}




};