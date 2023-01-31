#include "Playlist.h"

void PlayList::add_track(Track track)
{
	tracks_.push_back(track);
}

void  PlayList::remove_track(const std::string& track_name) {

	for (std::vector<Track>::iterator it = tracks_.begin(); it != tracks_.end();) {
		if (it->getName() == track_name) {
			it = tracks_.erase(it);
		}
		else {
			++it;
		}
	}
}

std::vector<Track> PlayList::getPlaylist()
{
	return tracks_;
}

//void PlayList::shuffle()
//{
//	std::shuffle(tracks_.begin(), tracks_.end(), std::mt19937{ std::random_device{}() });
//}
/* PlayList::sort_by_name()
{
	std::sort(tracks_.begin(), tracks_.end(), [](const auto & a, const auto& b)
	{
			return a.name() < b.name();
	});
}*/
void PlayList::show_Playlist()
{
	getSongsNumber();
	const char sep = ' ';
	const int spaceWidth = 30;
	std::cout <<"Playlist:" <<name() << "\n\nNames" << std::setw(spaceWidth) << std::setfill(sep) << "Author" << std::endl;
	for (Track track : tracks_) {
		std::cout << track.getName() << std::setw(spaceWidth) << std::setfill(sep) << track.getAuthor() << std::endl;
	}
}

std::vector<Track> PlayList::tracklist()
{
	return tracks_;
}
