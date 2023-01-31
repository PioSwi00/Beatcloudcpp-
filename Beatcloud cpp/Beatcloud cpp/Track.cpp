#include "Track.h"
bool Track::operator==(const Track& a){
	if(name_ == a.name_ && author_ == a.author_ && path_ == a.path_){
		return true;
	}
	return false;
}
