#include <iostream>


struct nodeList {

	int nodeID;
	char* nombre;

	nodeList *nodeNext;
};



ref class CVCLibrary {



private:

	nodeList *firstNode;
	nodeList* lastNode;

	int lengthList = 0;
	


public:

	CVCLibrary() {


	}

	void insertNode() {

		if (firstNode->nodeID != 0) {
			firstNode = new nodeList();
			lastNode = firstNode;
			
			
			lastNode->nodeID = lengthList;
			lengthList++;

			
		}
		else {
			nodeList* aux = new nodeList();
			lastNode->nodeNext = aux;
			lastNode = aux;

			
			lastNode->nodeID = lengthList;
			lengthList++;

		}


	}

	void deleteNode(int nodeID) {


	}

	
	void findNode(int nodeID) {

		nodeList* aux = firstNode;
		
		for (int i = 0; i < lengthList; i++) {
			if (aux->nodeID == nodeID) {
				std::cout << aux->nodeID << std::endl;
				//return aux;
			}
			else {
				std::cout << aux->nodeID << std::endl;
				aux = aux->nodeNext;
			}

		}
		
		//return firstNode;

	}




};