#pragma once
#include "Playlist.h"
class PlayListMenager
{
private:
	std::vector <PlayList>playlists_;
public:
	//PlayListMenager();
	//PlayListMenager(std::string p_name,std::string t_name)

	std::vector <PlayList> playlists() const{ return playlists_; }
	void add_playlist(const PlayList& playlist);
	//void remove_playlist(const PlayList& playlist);


};

