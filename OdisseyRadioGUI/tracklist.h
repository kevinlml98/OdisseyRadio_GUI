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

	int lengthList = 0;



public:

	TrackList(String^ fileName) {
		


		try
		{
			Console::WriteLine("trying to open file {0}...", fileName);
			StreamReader^ din = File::OpenText(fileName);

			String^ str;
			int count = 0;

			while ((str = din->ReadLine()) != nullptr)
			{
				count++;
				Console::WriteLine("line {0}: {1}", count, str);
				insertAll(str);
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

	void insertAll(String^ all) {


		if (firstNode == nullptr) {
			firstNode = gcnew nodeTrack();
			lastNode = firstNode;
			

			lastNode->trackID = lengthList;
			lastNode->all = all;
			lengthList++;



		}
		else {
			nodeTrack^ aux = gcnew nodeTrack();
			lastNode->nodeNext = aux;
			lastNode = aux;


			lastNode->trackID = lengthList;
			lastNode->all = all;
			lengthList++;

		}




	}

	void deleteTrack(int nodeID) {


	}


	String^ findTrack(String^ title) {

		nodeTrack^ aux = firstNode;

		for (int i = 0; i < lengthList; i++) {
			if (aux->trackTitle == title) {
				return aux->trackTitle;
			}
			else {
				aux = aux->nodeNext;
			}

		}

		return "File does not exist";

	}




};