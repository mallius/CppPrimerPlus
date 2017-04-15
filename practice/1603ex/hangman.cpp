#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>

using std::string;

/**const int NUM = 26;
const string wordlist_temp[NUM] = {"apiary", "beetle", "cereal",
	"danger", "ensign", "florid", "garage", "health", "insult",
	"jackal", "keeper", "loaner", "manager", "nonce", "onset",
	"plaid", "quilt", "remote", "stolid", "train", "useful",
	"valid", "whence", "xenon", "yearn", "zippy"};
***/

int main(void)
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;


	using namespace std;
	vector<string> wordlist; //存取字符

	ifstream fin;
	fin.open("words.txt");
	if(fin.is_open() == false)
	{
		cerr << "Can't open file.Bye.\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;

	getline(fin, item, '\n');
	while(fin)
	{
		++count;
		// cout << count << ": " << item << endl;

		wordlist.push_back(item);

		getline(fin, item, '\n');
	}
	cout << count << ": words Done.\n";
	fin.close();


	int num = wordlist.size();

	cout << "Num: " << num << endl;
	for(int i = 0; i < num; i++)
	{
		cout << wordlist[i] << endl;
	}

	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game? <y/n> ";
	cin >> play;
	play = tolower(play);
	while(play == 'y')
	{
		int temp = std::rand()%num;
		string target = wordlist[temp];

		cout << "temp: " << temp << endl;
		cout << "wordlist[temp]: " << wordlist[temp] << endl;

		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length
			<< " letters, and you guess\n"
			<< "one letter at a time, You get " << guesses
			<< " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while(guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if(badchars.find(letter) != string::npos 
			 || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if(loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				--guesses;
				badchars += letter;  // add to string
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				// check if letter apperas again
				loc = target.find(letter, loc+1);
				while(loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc+1);
				}
			}
			cout << "You word: " << attempt << endl;
			if(attempt != target)
			{
				if(badchars.length()>0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << " bad guesses left\n";
			}
		}
		if(guesses > 0)
			cout << "That's right!\n";
		else
			cout << "Sorry, the word is " << target << ".\n";
		cout << "Will you play another? <y/n> ";
		cin >> play;
		play = tolower(play);
	}
	cout << "Bye\n";
	return 0;
}
