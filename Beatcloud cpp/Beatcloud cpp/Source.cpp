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
	std::cout << "\n\n";
	DRUGA.remove_track("U2");
	DRUGA.show_Playlist();
	pierwsza.shuffle();
	pierwsza.show_Playlist();
	pierwsza.sort_by_name();
	pierwsza.show_Playlist();




	std::cout << "\n\n";
	pierwsza.shuffle();
	pierwsza.show_Playlist();
	std::cout << "\n\n"; std::cout << "\n\n";
	m.add_playlist(pierwsza);
	m.add_playlist(DRUGA);
	m.remove_playlist("druga");
	m.show_active_playlists();
	std::cout << "---------"<<std::endl;
	m.add_playlist(DRUGA);
	m.show_active_playlists();

	m.save_to_json("C:/Users/Piter/Desktop/jsonfilletest/p.json");

}