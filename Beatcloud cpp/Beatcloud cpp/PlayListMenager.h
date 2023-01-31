#pragma once
#include "Playlist.h"
class PlayListMenager
{
private:
	std::vector <PlayList>playlists_;
public:
	

	std::vector <PlayList> playlists() const { return playlists_; }
	void show_active_playlists();
	void add_playlist(const PlayList& playlist){ playlists_.push_back(playlist); };
	void remove_playlist(const std::string& track_name);


};

