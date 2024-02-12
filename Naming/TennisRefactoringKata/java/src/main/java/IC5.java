import java.util.HashMap;
import java.util.Map;

public class IC5 {

    // region ToHide
    private static final String SAFSDF = "Invalid player name.";
    private static final String WERTGSDF = "Love-All";
    private static final String RTYHD = "Love-Fifteen";
    private static final String DGSHSDGSDF = "Love-Thirty";
    private static final String DGHSDFGSDF = "Love-Forty";
    private static final String FGSDFGSDFGSDSADFF = "Fifteen-Love";
    private static final String SAFDSDFHSGASCVX = "Fifteen-All";
    private static final String ERTHHGS = "Fifteen-Thirty";
    private static final String RTURJHDG = "Fifteen-Forty";
    private static final String TYJDFHFG = "Thirty-Love";
    private static final String YKDHG = "Thirty-Fifteen";
    private static final String UOIT = "Thirty-All";
    private static final String UIOTYKUJDH = "Thirty-Forty";
    private static final String YRTJH = "Forty-Love";
    private static final String GBSDV = "Forty-Fifteen";
    private static final String JTGDFH = "Forty-Thirty";
    private static final String JHSDGAS = "Deuce";
    private static final String FHSAD = "Invalid score.";
    private static final String HGSADF = "Advantage %s";
    private static final String JFHSDDASF = "Win for %s";
    // endregion

    private final String sdfafa;
    private final String ewtwert;
    private int ssss1;
    private int sfdalj;

    public IC5(String ssvads, String fdaf) {
        this.sdfafa = ssvads;
        this.ewtwert = fdaf;
    }

    public void M1(String werfga) {
        if (werfga.equals(sdfafa))
            ssss1++;
        else if (werfga.equals(ewtwert))
            sfdalj++;
        else
            throw new IllegalArgumentException(SAFSDF);
    }

    public String M2() {
        int p1 = ssss1;
        int p2 = sfdalj;

        while (p1 > 4 || p2 > 4) {
            p1--;
            p2--;
        }

        var lookup = new HashMap<Map.Entry, String>();
        lookup.put(Map.entry(0, 0), WERTGSDF);
        lookup.put(Map.entry(0, 1), RTYHD);
        lookup.put(Map.entry(0, 2), DGSHSDGSDF);
        lookup.put(Map.entry(0, 3), DGHSDFGSDF);
        lookup.put(Map.entry(0, 4), String.format(JFHSDDASF, ewtwert));
        lookup.put(Map.entry(1, 0), FGSDFGSDFGSDSADFF);
        lookup.put(Map.entry(1, 1), SAFDSDFHSGASCVX);
        lookup.put(Map.entry(1, 2), ERTHHGS);
        lookup.put(Map.entry(1, 3), RTURJHDG);
        lookup.put(Map.entry(1, 4), String.format(JFHSDDASF, ewtwert));
        lookup.put(Map.entry(2, 0), TYJDFHFG);
        lookup.put(Map.entry(2, 1), YKDHG);
        lookup.put(Map.entry(2, 2), UOIT);
        lookup.put(Map.entry(2, 3), UIOTYKUJDH);
        lookup.put(Map.entry(2, 4), String.format(JFHSDDASF, ewtwert));
        lookup.put(Map.entry(3, 0), YRTJH);
        lookup.put(Map.entry(3, 1), GBSDV);
        lookup.put(Map.entry(3, 2), JTGDFH);
        lookup.put(Map.entry(3, 3), JHSDGAS);
        lookup.put(Map.entry(3, 4), String.format(HGSADF, ewtwert));
        lookup.put(Map.entry(4, 0), String.format(JFHSDDASF, sdfafa));
        lookup.put(Map.entry(4, 1), String.format(JFHSDDASF, sdfafa));
        lookup.put(Map.entry(4, 2), String.format(JFHSDDASF, sdfafa));
        lookup.put(Map.entry(4, 3), String.format(HGSADF, sdfafa));
        lookup.put(Map.entry(4, 4), JHSDGAS);

        var entry = Map.entry(p1, p2);
        if (lookup.containsKey(entry)) {
            return lookup.get(entry);
        } else {
            throw new IllegalArgumentException(FHSAD);
        }
    }
}
