#pragma once



ref struct nodeTrack {

	int trackID;
	System::String^ trackArtist;
	System::String^ trackLength;
	System::String^ trackGenre;
	System::String^ trackTitle;

	nodeTrack^ nodeNext;
};



ref class TrackList {



private:

	nodeTrack^ firstNode;
	nodeTrack^ lastNode;

	int lengthList = 0;



public:

	TrackList() {


	}
	~TrackList() {


	}

	void insertNode(System::String^ artist, System::String^ title, System::String^ genre, System::String^ length) {

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

	void deleteTrack(int nodeID) {


	}


	System::String^ findTrack(System::String^ title) {

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