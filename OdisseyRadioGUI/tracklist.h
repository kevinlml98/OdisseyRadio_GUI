#include <exception>

#using <system.dll>

using namespace System;
using namespace System::IO;



ref struct nodeTrack {

	int trackID;
	String^ trackArtist;
	String^ trackLength;
	String^ trackGenre;
	String^ trackTitle;
	String^ all;

	nodeTrack^ nodeNext;
};



ref class TrackList {



private:

		nodeTrack^ firstNode;
		nodeTrack^ lastNode;

public:	int lengthList = 0;



public:

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

	void deleteListTrack() {
		lengthList = 0;
		firstNode = nullptr;

	}


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