#ifndef PLORG_H
#define PLORG_H

class plorg
{
private:
	static const int kLen = 20;
	char m_name[kLen];
	int m_ci;
public:
	plorg(const char *name = "Plorga", int ci = 50);
	void setci(int n);
	void report() const;
};

#endif
