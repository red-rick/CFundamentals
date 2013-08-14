// golf.h -- for pe9-1.cpp
#ifndef GOLF_H
#define GOLF_H

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

public:
	Golf(){ strcpy(fullname, "noname"); handicap = 0; }
	Golf(const char * name, int hc);
	int setGolf();
	void setHandicap(int hc);
	void show();
};
#endif