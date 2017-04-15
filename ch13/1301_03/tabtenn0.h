#ifndef TABTENN0_H_
#define TABTENN0_H_
class TableTennisPlayer
{
private:
	enum{LIM=12};
	char firstname[LIM];
	char lastname[LIM];
	bool hasTable;
public:
	TableTennisPlayer(const char *fn = "none",
				const char *ln = "none", bool ht = false);
	void Name()const;
	bool HasTable()const{ return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
	


};
#endif
