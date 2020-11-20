#pragma once
#include <iostream>
#include <string>


/// <summary>
/// Nodo de la lista de canciones
/// </summary>
ref struct nodeList {

	int nodeID;
	System::String^ nodeRuta;
	System::String^ nodeTitle;
	
	nodeList^ nodeNext;
};


/// <summary>
/// Almacena el dataset en una lista enlazada
/// </summary>
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

	/// <summary>
	/// Agrega un nodo a la lista
	/// </summary>
	/// <param name="ruta">Lugar donde se inserta el nodo</param>
	/// <param name="title">Nodo a insertar</param>
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

	/// <summary>
	/// Busca un nodo en la lista
	/// </summary>
	/// <param name="title">Titulo del nodo a buscar</param>
	/// <returns>Nodo con el titulo que se indica</returns>
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