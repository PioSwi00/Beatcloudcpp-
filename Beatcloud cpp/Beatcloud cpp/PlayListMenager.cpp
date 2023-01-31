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

