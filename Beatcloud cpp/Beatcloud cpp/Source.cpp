#include <iostream>
#include "Playlist.h"
#include "PlayListMenager.h"
#include "Track.h"
int main()
{
	PlayListMenager m;
	Track t1("Darude", "Sandstorm", "c:/a");
	Track t2("PhonkMan", "Shiot.mp3", "c:/v");
	Track t3("U2", "One", "c:/z");
	Track t4("Darude", "Sandstorm", "c:/a");

	PlayList pierwsza("pierwsza");
	pierwsza.add_track(t1);
	pierwsza.add_track(t2);
	pierwsza.add_track(t3);
	pierwsza.show_Playlist();
	std::cout << "\n\n";
	PlayList DRUGA("druga");
	DRUGA.add_track(t1);
	DRUGA.add_track(t1);
	DRUGA.add_track(t3);
	DRUGA.show_Playlist();

	m.playlists();
	
	if (t1 == t4)
		std::cout << "good";
	else
		std::cout << "bad";
	

}