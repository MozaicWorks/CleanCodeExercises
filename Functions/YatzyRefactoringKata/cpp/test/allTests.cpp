#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "yatzy.hpp"

static int *ints(int a, int b, int c, int d, int e)
{
    int *r = new int[5];
    r[0] = a;
    r[1] = b;
    r[2] = c;
    r[3] = d;
    r[4] = e;
    return r;
}

TEST_CASE("Chance scores sum of all dice")
{
    CHECK_EQ(15, Yatzy().Chance(2, 3, 4, 5, 1));
    CHECK_EQ(16, Yatzy().Chance(3, 3, 4, 5, 1));
}

TEST_CASE("Yatzy scores 50")
{
    CHECK_EQ(50, Yatzy().yatzy(ints(4, 4, 4, 4, 4)));
    CHECK_EQ(50, Yatzy().yatzy(ints(6, 6, 6, 6, 6)));
    CHECK_EQ(0, Yatzy().yatzy(ints(6, 6, 6, 6, 3)));
}

TEST_CASE("ones")
{
    CHECK_EQ(1, Yatzy().Ones(1, 2, 3, 4, 5));
    CHECK_EQ(2, Yatzy().Ones(1, 2, 1, 4, 5));
    CHECK_EQ(0, Yatzy().Ones(6, 2, 2, 4, 5));
    CHECK_EQ(4, Yatzy().Ones(1, 2, 1, 1, 1));
}

TEST_CASE("twos")
{
    CHECK_EQ(4, Yatzy().Twos(1, 2, 3, 2, 6));
    CHECK_EQ(10, Yatzy().Twos(2, 2, 2, 2, 2));
}

TEST_CASE("threes")
{
    CHECK_EQ(6, Yatzy().Threes(1, 2, 3, 2, 3));
    CHECK_EQ(12, Yatzy().Threes(2, 3, 3, 3, 3));
}

TEST_CASE("fours")
{
    CHECK_EQ(12, Yatzy(4, 4, 4, 5, 5).Fours());
    CHECK_EQ(8, Yatzy(4, 4, 5, 5, 5).Fours());
    CHECK_EQ(4, Yatzy(4, 5, 5, 5, 5).Fours());
}

TEST_CASE("fives")
{
    CHECK_EQ(10, Yatzy(4, 4, 4, 5, 5).Fives());
    CHECK_EQ(15, Yatzy(4, 4, 5, 5, 5).Fives());
    CHECK_EQ(20, Yatzy(4, 5, 5, 5, 5).Fives());
}

TEST_CASE("sixes")
{
    CHECK_EQ(0, Yatzy(4, 4, 4, 5, 5).sixes());
    CHECK_EQ(6, Yatzy(4, 4, 6, 5, 5).sixes());
    CHECK_EQ(18, Yatzy(6, 5, 6, 6, 5).sixes());
}

TEST_CASE("one pair")
{
    CHECK_EQ(6, Yatzy().ScorePair(3, 4, 3, 5, 6));
    CHECK_EQ(10, Yatzy().ScorePair(5, 3, 3, 3, 5));
    CHECK_EQ(12, Yatzy().ScorePair(5, 3, 6, 6, 5));
}

TEST_CASE("two pair")
{
    CHECK_EQ(16, Yatzy().TwoPair(3, 3, 5, 4, 5));
    CHECK_EQ(16, Yatzy().TwoPair(3, 3, 5, 5, 5));
}

TEST_CASE("three of a kind")
{
    CHECK_EQ(9, Yatzy().ThreeOfAKind(3, 3, 3, 4, 5));
    CHECK_EQ(15, Yatzy().ThreeOfAKind(5, 3, 5, 4, 5));
    CHECK_EQ(9, Yatzy().ThreeOfAKind(3, 3, 3, 3, 5));
}

TEST_CASE("four of a kind")
{
    CHECK_EQ(12, Yatzy().FourOfAKind(3, 3, 3, 3, 5));
    CHECK_EQ(20, Yatzy().FourOfAKind(5, 5, 5, 4, 5));
    CHECK_EQ(12, Yatzy().FourOfAKind(3, 3, 3, 3, 3));
}

TEST_CASE("small straight")
{
    CHECK_EQ(15, Yatzy().SmallStraight(1, 2, 3, 4, 5));
    CHECK_EQ(15, Yatzy().SmallStraight(2, 3, 4, 5, 1));
    CHECK_EQ(0, Yatzy().SmallStraight(1, 2, 2, 4, 5));
}

TEST_CASE("large straight")
{
    CHECK_EQ(20, Yatzy().LargeStraight(6, 2, 3, 4, 5));
    CHECK_EQ(20, Yatzy().LargeStraight(2, 3, 4, 5, 6));
    CHECK_EQ(0, Yatzy().LargeStraight(1, 2, 2, 4, 5));
}

TEST_CASE("full house")
{
    CHECK_EQ(18, Yatzy().FullHouse(6, 2, 2, 2, 6));
    CHECK_EQ(0, Yatzy().FullHouse(2, 3, 4, 5, 6));
}
