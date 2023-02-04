#pragma once
#include "Playlist.h"
#include <fstream>
#include "json/single_include/nlohmann/json.hpp"
using json = nlohmann::json;
class PlayListMenager
{
private:
	std::vector <PlayList>playlists_;
public:
	

	std::vector <PlayList> playlists() const { return playlists_; }
	void show_active_playlists();
	void add_playlist(const PlayList& playlist){ playlists_.push_back(playlist); };
	void remove_playlist(const std::string& track_name);
	void read_from_json(const std::string& filePath);
   
	void save_to_json(const std::string& filePth) const;
};

