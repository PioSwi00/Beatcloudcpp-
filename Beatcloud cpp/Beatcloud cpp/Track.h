#pragma once
#include <iostream>
class Track
{
private:
	std::string name_;
	std::string author_;
	std::string path_;
public:
	Track(std::string name, std::string author, std::string path) {
		this->name_ = name;
		this->author_ = author;
		this->path_ = path;
	}
	std::string getName() { return name_; }
	std::string getAuthor() { return author_; }
	std::string getPath() { return path_; }	
	bool operator==(const Track& a);
};

