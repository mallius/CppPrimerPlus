// base class
class Cd
{
private:
	char *performers;
	char *label;
	int selections;  // number of selections 
	double playtime; // playint time in minutes
public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;  // reports all CD data
	Cd & operator=(const Cd & d);
};

class Classic: public Cd
{
private:
	char *desc;
public:
	Classic(char *des, char *s1, char *s2, int n, double x);
	Classic(char *des, const Cd & c);
	Classic();
	~Classic();
	virtual void Report()const;
	Classic & operator=(const Classic & c);
};
