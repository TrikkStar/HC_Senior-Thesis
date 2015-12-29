
class Gamestate
{
public:
	Gamestate();
private:
	int score;
	int defcon;
	int turn;
	int round;
public:
	// returns score
	int get_score();
	// sets score
	void set_score(int x);
};
