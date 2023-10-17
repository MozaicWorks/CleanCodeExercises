#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

const std::string tennis_score(int p1Score, int p2Score);

TEST_CASE("LoveAll_0_0") { CHECK_EQ("Love-All", tennis_score(0, 0)); }

TEST_CASE("FifteenAll_1_1") { CHECK_EQ("Fifteen-All", tennis_score(1, 1)); }

TEST_CASE("ThirtyAll_2_2") { CHECK_EQ("Thirty-All", tennis_score(2, 2)); }

TEST_CASE("Deuce_3_3") { CHECK_EQ("Deuce", tennis_score(3, 3)); }

TEST_CASE("Deuce_4_4") { CHECK_EQ("Deuce", tennis_score(4, 4)); }

TEST_CASE("FifteenLove_1_0") { CHECK_EQ("Fifteen-Love", tennis_score(1, 0)); }

TEST_CASE("LoveFifteen_0_1") { CHECK_EQ("Love-Fifteen", tennis_score(0, 1)); }

TEST_CASE("ThirtyLove_2_0") { CHECK_EQ("Thirty-Love", tennis_score(2, 0)); }

TEST_CASE("LoveThirty_0_2") { CHECK_EQ("Love-Thirty", tennis_score(0, 2)); }

TEST_CASE("FortyLove_3_0") { CHECK_EQ("Forty-Love", tennis_score(3, 0)); }

TEST_CASE("LoveForty_0_3") { CHECK_EQ("Love-Forty", tennis_score(0, 3)); }

TEST_CASE("Winforplayer1_4_0") { CHECK_EQ("Win for player1", tennis_score(4, 0)); }

TEST_CASE("Winforplayer2_0_4") { CHECK_EQ("Win for player2", tennis_score(0, 4)); }

TEST_CASE("ThirtyFifteen_2_1") { CHECK_EQ("Thirty-Fifteen", tennis_score(2, 1)); }

TEST_CASE("FifteenThirty_1_2") { CHECK_EQ("Fifteen-Thirty", tennis_score(1, 2)); }

TEST_CASE("FortyFifteen_3_1") { CHECK_EQ("Forty-Fifteen", tennis_score(3, 1)); }

TEST_CASE("FifteenForty_1_3") { CHECK_EQ("Fifteen-Forty", tennis_score(1, 3)); }

TEST_CASE("Winforplayer1_4_1") { CHECK_EQ("Win for player1", tennis_score(4, 1)); }

TEST_CASE("Winforplayer2_1_4") { CHECK_EQ("Win for player2", tennis_score(1, 4)); }

TEST_CASE("FortyThirty_3_2") { CHECK_EQ("Forty-Thirty", tennis_score(3, 2)); }

TEST_CASE("ThirtyForty_2_3") { CHECK_EQ("Thirty-Forty", tennis_score(2, 3)); }

TEST_CASE("Winforplayer1_4_2") { CHECK_EQ("Win for player1", tennis_score(4, 2)); }

TEST_CASE("Winforplayer2_2_4") { CHECK_EQ("Win for player2", tennis_score(2, 4)); }

TEST_CASE("Advantageplayer1_4_3") { CHECK_EQ("Advantage player1", tennis_score(4, 3)); }

TEST_CASE("Advantageplayer2_3_4") { CHECK_EQ("Advantage player2", tennis_score(3, 4)); }

TEST_CASE("Advantageplayer1_5_4") { CHECK_EQ("Advantage player1", tennis_score(5, 4)); }

TEST_CASE("Advantageplayer2_4_5") { CHECK_EQ("Advantage player2", tennis_score(4, 5)); }

TEST_CASE("Advantageplayer1_15_14") { CHECK_EQ("Advantage player1", tennis_score(15, 14)); }

TEST_CASE("Advantageplayer2_14_15") { CHECK_EQ("Advantage player2", tennis_score(14, 15)); }

TEST_CASE("Winforplayer1_6_4") { CHECK_EQ("Win for player1", tennis_score(6, 4)); }

TEST_CASE("Winforplayer2_4_6") { CHECK_EQ("Win for player2", tennis_score(4, 6)); }

TEST_CASE("Winforplayer1_16_14") { CHECK_EQ("Win for player1", tennis_score(16, 14)); }

TEST_CASE("Winforplayer2_14_16") { CHECK_EQ("Win for player2", tennis_score(14, 16)); }
