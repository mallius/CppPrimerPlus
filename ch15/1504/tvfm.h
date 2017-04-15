// tvfm.h -- Tv and Remote classes using a friend member
#ifndef TVFM_H_
#define TVFM_H_

class Tv;						// forward declaration

// 定义Remote类先让Tv类识别,此之前需要Tv类的声明
class Remote
{
public:
	enum State{Off, On};
	enum {MinVal, MaxVal = 20};
	enum {Antenna, Cable};
	enum {TV, VCR};
private:
	int mode;
public:
	Remote(int m = TV):mode(m){}
	bool volup(Tv & t);				// prototype only, 此之前只有Tv类的声明，函数声明只能放类外
	bool voldown(Tv & t);
	void onoff(Tv & t);
	void chanup(Tv & t);
	void chandown(Tv & t);
	void set_mode(Tv & t);
	void set_input(Tv & t);
	void set_chan(Tv & t, int c);
};

class Tv
{
public:
	friend void Remote::set_chan(Tv & t, int c);	// Remote类的友元方法,此之前需定义Remote类
	enum State{Off, On};
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

private:
	int state;					// on or off
	int volume;					// assumed to be digitized
	int maxchannel;				// maximum number of channels
	int channel;				// current channel setting
	int mode;					// broadcast or cable
	int input;					// TV or VCR
};


//内联函数已类外的形式定义
inline bool Remote::volup(Tv & t){return t.volup(); }
inline bool Remote::voldown(Tv & t){return t.voldown(); }
inline void Remote::onoff(Tv & t){t.onoff(); }
inline void Remote::chanup(Tv & t){t.chanup(); }
inline void Remote::chandown(Tv & t){t.chandown(); }
inline void Remote::set_mode(Tv & t){t.set_mode(); }
inline void Remote::set_input(Tv & t){t.set_input(); }
inline void Remote::set_chan(Tv & t, int c){t.channel = c; }

#endif
