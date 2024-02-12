using System;

namespace A
{
    public class IC5
    {
        #region ToHide
        private const string SAFSDF = "Invalid player name.";
        private const string WERTGSDF = "Love-All";
        private const string RTYHD = "Love-Fifteen";
        private const string DGSHSDGSDF = "Love-Thirty";
        private const string DGHSDFGSDF = "Love-Forty";
        private const string FGSDFGSDFGSDSADFF = "Fifteen-Love";
        private const string SAFDSDFHSGASCVX = "Fifteen-All";
        private const string ERTHHGS = "Fifteen-Thirty";
        private const string RTURJHDG = "Fifteen-Forty";
        private const string TYJDFHFG = "Thirty-Love";
        private const string YKDHG = "Thirty-Fifteen";
        private const string UOIT = "Thirty-All";
        private const string UIOTYKUJDH = "Thirty-Forty";
        private const string YRTJH = "Forty-Love";
        private const string GBSDV = "Forty-Fifteen";
        private const string JTGDFH = "Forty-Thirty";
        private const string JHSDGAS = "Deuce";
        private const string FHSAD = "Invalid score.";
        private const string JFHSDDASF = "Win for {0}";
        private const string HGSADF = "Advantage {0}";
        #endregion

        private int ssss1;
        private int sfdalj;
        private string sdfafa;
        private string ewtwert;

        public IC5(string ssvads, string fdaf)
        {
            this.sdfafa = ssvads;
            this.ewtwert = fdaf;
        }

        public void M1(string werfga)
        {
            if (werfga == sdfafa)
                ssss1++;
            else if (werfga == ewtwert)
                sfdalj++;
            else
                throw new ArgumentException(SAFSDF);
        }

        public string M2()
        {
            int fsdgsjl = ssss1;
            int wertgvsdfg = sfdalj;

            while (fsdgsjl > 4 || wertgvsdfg > 4)
            {
                fsdgsjl--;
                wertgvsdfg--;
            }

            return (fsdgsjl, wertgvsdfg) switch
            {
                (0, 0) => WERTGSDF,
                (0, 1) => RTYHD,
                (0, 2) => DGSHSDGSDF,
                (0, 3) => DGHSDFGSDF,
                (0, 4) => String.Format(JFHSDDASF, ewtwert),
                (1, 0) => FGSDFGSDFGSDSADFF,
                (1, 1) => SAFDSDFHSGASCVX,
                (1, 2) => ERTHHGS,
                (1, 3) => RTURJHDG,
                (1, 4) => String.Format(JFHSDDASF, ewtwert),
                (2, 0) => TYJDFHFG,
                (2, 1) => YKDHG,
                (2, 2) => UOIT,
                (2, 3) => UIOTYKUJDH,
                (2, 4) => String.Format(JFHSDDASF, ewtwert),
                (3, 0) => YRTJH,
                (3, 1) => GBSDV,
                (3, 2) => JTGDFH,
                (3, 3) => JHSDGAS,
                (3, 4) => String.Format(HGSADF, ewtwert),
                (4, 0) => String.Format(JFHSDDASF, sdfafa),
                (4, 1) => String.Format(JFHSDDASF, sdfafa),
                (4, 2) => String.Format(JFHSDDASF, sdfafa),
                (4, 3) => String.Format(HGSADF, sdfafa),
                (4, 4) => JHSDGAS,
                _ => throw new ArgumentException(FHSAD)
            };
        }
    }
}
