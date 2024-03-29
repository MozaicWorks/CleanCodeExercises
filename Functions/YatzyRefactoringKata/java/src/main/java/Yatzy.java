import java.util.Dictionary;
import java.util.Hashtable;

public class Yatzy {
    protected int[] dice;

    public Yatzy(int d1, int d2, int d3, int d4, int _5) {
        dice = new int[5];
        dice[0] = d1;
        dice[1] = d2;
        dice[2] = d3;
        dice[3] = d4;
        dice[4] = _5;
    }

    public Dictionary<String, Integer> ScorePerCategory() {
        Dictionary<String, Integer> scorePerCategory = new Hashtable<String, Integer>();

        // try ones
        int d1 = dice[0];
        int d2 = dice[1];
        int d3 = dice[2];
        int d4 = dice[3];
        int d5 = dice[4];
        var sum = 0;
        if (d1 == 1)
            sum++;
        if (d2 == 1)
            sum++;
        if (d3 == 1)
            sum++;
        if (d4 == 1)
            sum++;
        if (d5 == 1)
            sum++;

        // chance
        var total = 0;
        total += d1;
        total += d2;
        total += d3;
        total += d4;
        total += d5;

        //
        int result = 0;
        var counts = new int[6];
        for (int die : dice)
            counts[die - 1]++;
        for (var k = 0; k != 6; k++)
            if (counts[k] == 5)
                result = 50;

        var sumTwos = 0;
        if (d1 == 2)
            sumTwos += 2;
        if (d2 == 2)
            sumTwos += 2;
        if (d3 == 2)
            sumTwos += 2;
        if (d4 == 2)
            sumTwos += 2;
        if (d5 == 2)
            sumTwos += 2;

        int s;
        s = 0;
        if (d1 == 3)
            s += 3;
        if (d2 == 3)
            s += 3;
        if (d3 == 3)
            s += 3;
        if (d4 == 3)
            s += 3;
        if (d5 == 3)
            s += 3;

        int sum4;
        sum4 = 0;
        for (var at = 0; at != 5; at++)
            if (dice[at] == 4)
                sum4 += 4;

        // Fives
        var sFive = 0;
        int i;
        for (i = 0; i < dice.length; i++)
            if (dice[i] == 5)
                sFive = sFive + 5;

        var sumLarge = 0;
        for (var at = 0; at < dice.length; at++)
            if (dice[at] == 6)
                sumLarge = sumLarge + 6;

        //
        var pCounts = new int[6];
        pCounts[d1 - 1]++;
        pCounts[d2 - 1]++;
        pCounts[d3 - 1]++;
        pCounts[d4 - 1]++;
        pCounts[d5 - 1]++;
        int pScore = 0;
        int atP;
        for (atP = 0; atP != 6; atP++)
            if (pCounts[6 - atP - 1] == 2) {
                pScore = (6 - atP) * 2;
                break;
            }

        scorePerCategory.put("Ones", sum);
        scorePerCategory.put("Twos", sumTwos);
        scorePerCategory.put("Threes", s);
        scorePerCategory.put("Fours", sum4);
        scorePerCategory.put("Fives", sFive);
        scorePerCategory.put("Sixes", sumLarge);
        scorePerCategory.put("Pair", pScore);
        scorePerCategory.put("TwoPair", two_pair(d1, d2, d3, d4, d5));
        scorePerCategory.put("FourOfAKind", four_of_a_kind(d1, d2, d3, d4, d5));
        scorePerCategory.put("ThreeOfAKind", three_of_a_kind(d1, d2, d3, d4, d5));
        scorePerCategory.put("SmallStraight", smallStraight(d1, d2, d3, d4, d5));
        scorePerCategory.put("LargeStraight", largeStraight(d1, d2, d3, d4, d5));
        scorePerCategory.put("FullHouse", fullHouse(d1, d2, d3, d4, d5));
        scorePerCategory.put("Yatzy", result);
        scorePerCategory.put("Chance", total);

        return scorePerCategory;
    }

    private int two_pair(int d1, int d2, int d3, int d4, int d5) {
        int[] counts = new int[6];
        counts[d1 - 1]++;
        counts[d2 - 1]++;
        counts[d3 - 1]++;
        counts[d4 - 1]++;
        counts[d5 - 1]++;
        int n = 0;
        int score = 0;
        for (int i = 0; i < 6; i += 1)
            if (counts[6 - i - 1] >= 2) {
                n++;
                score += (6 - i);
            }
        if (n == 2)
            return score * 2;
        else
            return 0;
    }

    private int four_of_a_kind(int _1, int _2, int d3, int d4, int d5) {
        int[] tallies;
        tallies = new int[6];
        tallies[_1 - 1]++;
        tallies[_2 - 1]++;
        tallies[d3 - 1]++;
        tallies[d4 - 1]++;
        tallies[d5 - 1]++;
        for (int i = 0; i < 6; i++)
            if (tallies[i] >= 4)
                return (i + 1) * 4;
        return 0;
    }

    private int three_of_a_kind(int d1, int d2, int d3, int d4, int d5) {
        int[] t;
        t = new int[6];
        t[d1 - 1]++;
        t[d2 - 1]++;
        t[d3 - 1]++;
        t[d4 - 1]++;
        t[d5 - 1]++;
        for (int i = 0; i < 6; i++)
            if (t[i] >= 3)
                return (i + 1) * 3;
        return 0;
    }

    private int smallStraight(int d1, int d2, int d3, int d4, int d5) {
        int[] tallies;
        tallies = new int[6];
        tallies[d1 - 1] += 1;
        tallies[d2 - 1] += 1;
        tallies[d3 - 1] += 1;
        tallies[d4 - 1] += 1;
        tallies[d5 - 1] += 1;
        if (tallies[0] == 1 &&
                tallies[1] == 1 &&
                tallies[2] == 1 &&
                tallies[3] == 1 &&
                tallies[4] == 1)
            return 15;
        return 0;
    }

    private int largeStraight(int d1, int d2, int d3, int d4, int d5) {
        int[] tallies;
        tallies = new int[6];
        tallies[d1 - 1] += 1;
        tallies[d2 - 1] += 1;
        tallies[d3 - 1] += 1;
        tallies[d4 - 1] += 1;
        tallies[d5 - 1] += 1;
        if (tallies[1] == 1 &&
                tallies[2] == 1 &&
                tallies[3] == 1 &&
                tallies[4] == 1
                && tallies[5] == 1)
            return 20;
        return 0;
    }

    private int fullHouse(int d1, int d2, int d3, int d4, int d5) {
        int[] tallies;
        boolean _2 = false;
        int i;
        int _2_at = 0;
        boolean _3 = false;
        int _3_at = 0;

        tallies = new int[6];
        tallies[d1 - 1] += 1;
        tallies[d2 - 1] += 1;
        tallies[d3 - 1] += 1;
        tallies[d4 - 1] += 1;
        tallies[d5 - 1] += 1;

        for (i = 0; i != 6; i += 1)
            if (tallies[i] == 2) {
                _2 = true;
                _2_at = i + 1;
            }

        for (i = 0; i != 6; i += 1)
            if (tallies[i] == 3) {
                _3 = true;
                _3_at = i + 1;
            }

        if (_2 && _3)
            return _2_at * 2 + _3_at * 3;
        else
            return 0;
    }
}
