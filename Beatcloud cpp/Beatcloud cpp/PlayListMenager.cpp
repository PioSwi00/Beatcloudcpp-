#include "PlayListMenager.h"

void PlayListMenager::show_active_playlists()
{
	for (int i = 0; i < playlists_.size(); ++i) {
		std::cout << playlists_[i].name() << std::endl;
	}
}

void PlayListMenager::remove_playlist(const std::string& track_name)
{
	for (std::vector<PlayList>::iterator it = playlists_.begin(); it != playlists_.end();) {
		if (it->name() == track_name) {
			it =playlists_.erase(it);
		}
		else {
			++it;
		}
	}
}

void PlayListMenager::save_to_json(const std::string& filePath) const
{
    json j;
    j["Playlists"] = json::array();
    for (int i = 0; i < playlists().size(); i++)
    {
        json playlist;
        playlist["Name"] = playlists()[i].name();
        playlist["Tracks"] = json::array();
        for (int j = 0; j < playlists()[i].getSongsNumber(); j++)
        {
            json track;
            track["Title"] = playlists()[i].getPlaylist()[j].getName();
            track["Author"] = playlists()[i].getPlaylist()[j].getAuthor();
            track["Path"] = playlists()[i].getPlaylist()[j].getPath();
            playlist["Tracks"].push_back(track);
        }
        j["Playlists"].push_back(playlist);
    }
    std::ofstream file(filePath, std::ios::out | std::ios::trunc);
    if (!file.is_open())
    {
        file.open(filePath, std::ios::out | std::ios::trunc);
    }
    file << j.dump(2);
    file.close();
}


