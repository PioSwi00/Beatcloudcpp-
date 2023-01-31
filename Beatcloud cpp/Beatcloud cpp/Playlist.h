#pragma once
#include <vector>
#include "Track.h"
#include <algorithm>
#include <random>
#include <iomanip>
class PlayList
{
private:
	std::string name_;	
	std::vector <Track> tracks_;
public:
	PlayList(std::string name){
		this->name_ = name;
	}

	std::string name() { return name_; }
	void add_track(Track track);
	void remove_track(const std::string& track_name);
	std::vector<Track> getPlaylist();
	int getSongsNumber() { return tracks_.size(); }
	void show_Playlist();
	std::vector<Track>tracklist();
	void shuffle();

	
	void sort_by_name();
};

