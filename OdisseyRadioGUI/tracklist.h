#include <exception>

#using <system.dll>

using namespace System;
using namespace System::IO;


/// <summary>
/// Almacena las canciones en nodos
/// </summary>
ref struct nodeTrack {

	int trackID;
	String^ trackArtist;
	String^ trackLength;
	String^ trackGenre;
	String^ trackTitle;
	String^ all;

	nodeTrack^ nodeNext;
};


/// <summary>
/// Lista de canciones disponibles para reproducir
/// </summary>
ref class TrackList {



private:

		nodeTrack^ firstNode;
		nodeTrack^ lastNode;

public:	int lengthList = 0;



public:

	/// <summary>
	/// Lee el dataset y agrega las canciones en una lista
	/// </summary>
	/// <param name="fileName">Dataset que contiene los datos de las canciones que se añaden a la lista</param>
	void addDataset(String^ fileName) {
		


		try
		{
			Console::WriteLine("trying to open file {0}...", fileName);
			StreamReader^ din = File::OpenText(fileName);

			String^ str;
			int count = 0;

			while ((str = din->ReadLine()) != nullptr){
			
				insertAll(str, count);
				count++;
			}
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				Console::WriteLine("file '{0}' not found", fileName);
			else
				Console::WriteLine("problem reading file '{0}'", fileName);
		}

	}

	TrackList() {

	}

	~TrackList() {


	}

	/// <summary>
	/// Inserta una cancion en la lista de reproduccion
	/// </summary>
	/// <param name="artist">Artista de la cancion</param>
	/// <param name="title">Nombre de la cancion</param>
	/// <param name="genre">Genero de la cancion</param>
	/// <param name="length">Duracion de la cancion</param>
	void insertTrack(String^ artist, String^ title, String^ genre,String^ length) {

		if (firstNode == nullptr) {
			firstNode = gcnew nodeTrack();
			lastNode = firstNode;


			lastNode->trackID = lengthList;
			lastNode->trackArtist = artist;
			lastNode->trackGenre = genre;
			lastNode->trackLength = length;
			lastNode->trackTitle = title;
			lengthList++;



		}
		else {
			nodeTrack^ aux = gcnew nodeTrack();
			lastNode->nodeNext = aux;
			lastNode = aux;

			lastNode->trackID = lengthList;
			lastNode->trackArtist = artist;
			lastNode->trackGenre = genre;
			lastNode->trackLength = length;
			lastNode->trackTitle = title;
			lengthList++;

		}


	}

	/// <summary>
	/// Inserta todas las canciones del archivo de dataset a la lista
	/// </summary>
	/// <param name="all">CSV que contiene todas las canciones</param>
	/// <param name="count">Cantidad de canciones en el CSV</param>
	void insertAll(String^ all, int count) {


		if (firstNode == nullptr) {
			firstNode = gcnew nodeTrack();
			lastNode = firstNode;
			

			lastNode->trackID = count;
			lastNode->all = all;
			lengthList++;


			

		}
		else {
			nodeTrack^ aux = gcnew nodeTrack();
			lastNode->nodeNext = aux;
			lastNode = aux;


			lastNode->trackID = count;
			lastNode->all = all;
			lengthList++;
			

		}




	}

	/// <summary>
	/// Borra una cancion de la lista
	/// </summary>
	void deleteListTrack() {
		lengthList = 0;
		firstNode = nullptr;

	}

	/// <summary>
	/// Busca una cancion que esta en la lista
	/// </summary>
	/// <param name="count">Posicion de la cancion</param>
	/// <returns>Cancion que se busca</returns>
	String^ findTrack(int count) {

		

		nodeTrack^ aux = firstNode;

		for (int i = 0; i < lengthList; i++) {
			if (aux->trackID == count) {
				
				return aux->all;
			}
			else {
				
				aux = aux->nodeNext;
			}

		}

		return "File does not exist";

	}




};