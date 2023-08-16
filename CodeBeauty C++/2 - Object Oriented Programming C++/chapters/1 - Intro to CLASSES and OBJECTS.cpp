#include <iostream>
#include <list>
#include "../def/System.h"

using std::cout;
using std::string;
using std::list;
using std::endl;

class Video {
public:
	string Title;
	string Description;
	float Duration;

	int Likes;
	int Comments;
};
class YouTube_Channel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<Video> PublishedVideos;
	list<string> PublishedVideoTitles;
};

void N1_Intro_to_CLASSES_and_OBJECTS() {
	try {

		Title(1.0f, "Intro to CLASSES & OBJECTS");

		YouTube_Channel ytChannel;

		ytChannel.Name = "CodeBeauty";
		ytChannel.OwnerName = "Saldina";
		ytChannel.SubscribersCount = 1800;
		ytChannel.PublishedVideoTitles = { "C++ OPP", "HTML" };
		Video video;
		video.Title = "C++ OOP";
		video.Description = "Course about object oriente programming in C++";
		video.Duration = 1.25f;

		video.Likes = 26;
		video.Comments = 10;
		ytChannel.PublishedVideos.push_back(video);

		cout << "Name: " << ytChannel.Name << endl;
		cout << "OWner name: " << ytChannel.OwnerName << endl;
		cout << "Subscribers count: " << ytChannel.SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : ytChannel.PublishedVideoTitles) {
			cout << "Subscribers count: " << videoTitle << endl;
		}
		//cout << "Published Videos: " << ytChannel.PublishedVideos << endl;

		std::cin;
	}
	catch (int ex) {

	}

}