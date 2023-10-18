#ifndef YATZY_INCLUDED
#define YATZY_INCLUDED
#include <string>
#include <vector>
#include <map>

class Yatzy
{
public:

    static int Chance(int d1, int d2, int d3, int d4, int d5);
    static int yatzy(int dice[]);
    static int Twos(int d1, int d2, int d3, int d4, int d5);
    static int Threes(int d1, int d2, int d3, int d4, int d5);

protected:
    std::vector<int> dice;
public:
    Yatzy();
    Yatzy(int d1, int d2, int d3, int d4, int _5);
    int Fours();
    int Fives();
    int sixes();
    int ScorePair(int d1, int d2, int d3, int d4, int d5);
    static int TwoPair(int d1, int d2, int d3, int d4, int d5);
    static int FourOfAKind(int _1, int _2, int d3, int d4, int d5);
    static int ThreeOfAKind(int d1, int d2, int d3, int d4, int d5);

    static int SmallStraight(int d1, int d2, int d3, int d4, int d5);
    static int LargeStraight(int d1, int d2, int d3, int d4, int d5);
    static int FullHouse(int d1, int d2, int d3, int d4, int d5);

    std::map<std::string, int> ScorePerCategory();
};

#endif