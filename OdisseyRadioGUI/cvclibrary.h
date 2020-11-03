#pragma once
#include <iostream>
#include <string>



ref struct nodeList {

	int nodeID;
	System::String^ nodeRuta;
	System::String^ nodeTitle;
	
	nodeList^ nodeNext;
};



ref class CVCLibrary {



private:

	nodeList^ firstNode;
	nodeList^ lastNode;

	int lengthList = 0;
	


public:

	CVCLibrary() {


	}
	~CVCLibrary() {


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
			lengthList++;

		}


	}

	void deleteNode(int nodeID) {


	}

	
	void findNode(int nodeID) {

		nodeList^ aux = firstNode;
		
		for (int i = 0; i < lengthList; i++) {
			if (aux->nodeID == nodeID) {
				std::cout << aux->nodeID << std::endl;
				
			}
			else {
				std::cout << aux->nodeID << std::endl;
				aux = aux->nodeNext;
			}

		}
		
		

	}




};