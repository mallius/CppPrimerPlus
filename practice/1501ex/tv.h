// tv.h -- Tv and Remote classes
#ifndef TV_H_
#define TV_H_

class Remote;

enum{Normal, Ineraction};

class Tv
{
public:
	friend class Remote;		// Remote can access Tv private parts
	enum{Off, On};
	enum{MinVal, MaxVal = 20};
	enum{Antenna, Cable};
	enum{TV, VCR};

	Tv(int s = Off, int mc = 100):state(s),volume(5),
		maxchannel(mc),channel(2),mode(Cable), input(TV){}
	void onoff(){state = (state == On)?Off:On;}
	bool ison()const{return state==On;}
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode(){mode = (mode == Antenna)?Cable:Antenna; }
	void set_input(){input = (input == TV)?VCR:TV; }
	void settings()const;		// display all settings

	//新增一个对Remote的state进行切换的方法,仅当TV处于打开是才能运行
	int change_remote_state(Remote & r);


private:
	int state;					// on or off
	int volume;					// assumed to be digitized
	int maxchannel;				// maximum number of channels
	int channel;				// current channel setting
	int mode;					// broadcast or cable
	int input;					// TV or VCR
};

class Remote
{
private:
	int mode;					// controls TV or VCR
	int state;                 // 遥控器状态：正常、互动
public:
	friend class Tv;
	// enum{Normal, Ineraction};

	Remote(int m = Tv::TV, int st = Normal):mode(m), state(st){}
	bool volup(Tv & t){return t.volup();}
	bool voldown(Tv & t){return t.voldown(); }
	void onoff(Tv & t){ t.onoff(); }
	void chanup(Tv & t){t.chanup(); }
	void chandown(Tv & t){t.chandown(); }
	void set_chan(Tv & t, int c) {t.channel = c;}
	void set_mode(Tv & t){t.set_mode(); }
	void set_input(Tv & t){t.set_input(); }
	int show_mode(){return state;}
};

#endif
