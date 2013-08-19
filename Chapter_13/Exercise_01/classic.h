#ifndef CLASSIC_H
#define CLASSIC_H

class Cd { // represents a CD disk
private:
	enum {kLen1 = 20, kLen2 = 50};
	char performers[kLen2];
	char label[kLen1];
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const; // reports all CD data
	Cd & operator=(const Cd & d);
};

class Classic: public Cd
{
private:
	char * main_work;
public:
	Classic(char *s1, char * s2, char * s3,  int n, double x);
	Classic(const Classic & c);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & c);
};

#endif

