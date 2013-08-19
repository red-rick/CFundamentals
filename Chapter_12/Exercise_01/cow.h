#ifndef COW_H
#define COW_H

class Cow {
	static const int kLen = 20;
	char name[kLen];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow &c);
	~Cow();
	Cow & operator=(const Cow & c);
	void ShowCow() const; // display all cow data
};

#endif