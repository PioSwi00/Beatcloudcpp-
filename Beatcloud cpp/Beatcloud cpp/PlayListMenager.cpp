#include "PlayListMenager.h"

void PlayListMenager::add_playlist(const PlayList& playlist)
{
	playlists_.push_back(playlist);
}

//void PlayListMenager::remove_playlist(const PlayList& playlist)
//{
//	auto it = std::find(playlists_.begin(),playlists_.end(),playlist);
//	if (it != playlists_.end())
//	{
//		playlists_.erase(it);
//	}
//}
