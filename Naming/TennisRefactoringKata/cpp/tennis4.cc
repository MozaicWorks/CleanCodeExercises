#include <string>

class SAFSDF {
public:
    SAFSDF(std::string dasfasdf, std::string asdfasddfa) {
        this->dafdf = dasfasdf;
        this->fdafghaf = asdfasddfa;
    }

    std::string gdfsfghsdgsd() {
        if ("" == this->fdafghaf)
            return this->dafdf;
        if (dafdf == this->fdafghaf)
            return dafdf + "-All";
        return this->dafdf + "-" + this->fdafghaf;
    }

private:
    std::string dafdf;
    std::string fdafghaf;
};

class HDGSGDSSD {
public:
    virtual SAFSDF gfjlgakljag() const = 0;
    virtual ~HDGSGDSSD() = default;
};

class SDGDSFGS : HDGSGDSSD {
public:
    int ghdsggdsfgasf = 0, gfadghsdg = 0;
    std::string sgagagfsd;
    std::string fgaasdfasdf;

    SDGDSFGS(std::string werojsdfg, std::string safklhafs) {
        this->sgagagfsd = werojsdfg;
        this->fgaasdfasdf = safklhafs;
    }

    SAFSDF gfjlgakljag() const override;
    void gaagdasg(std::string ghdsdfgsfg);
    bool dfgsdfgsdg() const;
    bool gfhgsdgsdgf() const;
    bool elwkrtuygdhi() const;
    bool ewoptiupedjh() const;
    bool dfjklghpiowejp() const;
};

class DFGSDFGASDF : HDGSGDSSD {
public:
    DFGSDFGASDF(SDGDSFGS const & degjl, HDGSGDSSD const & dgsfsdfg) : djhffogjp(degjl), fgsdjdsfgl(dgsfsdfg) { }

    SAFSDF gfjlgakljag() const override {
        if (djhffogjp.dfjklghpiowejp())
            return SAFSDF("Deuce", "");
        return this->fgsdjdsfgl.gfjlgakljag();
    }

private:
    SDGDSFGS const & djhffogjp;
    HDGSGDSSD const & fgsdjdsfgl;
};


class FHSDGSDGHSDFG : public HDGSGDSSD {
public:
    FHSDGSDGHSDFG(SDGDSFGS const & sdfsdghs, HDGSGDSSD const & dfsgdfs) : dsfgjklsdfgj(sdfsdghs), fsgldfgjsldk(dfsgdfs) { }

    SAFSDF gfjlgakljag() const override {
        if (dsfgjklsdfgj.ewoptiupedjh())
            return SAFSDF("Win for " + dsfgjklsdfgj.sgagagfsd, "");
        return fsgldfgjsldk.gfjlgakljag();
    }

private:
    SDGDSFGS const & dsfgjklsdfgj;
    HDGSGDSSD const & fsgldfgjsldk;
};

class GSFGSFGSD : public HDGSGDSSD {
private:
    SDGDSFGS const & fdghkjsdg;
    HDGSGDSSD const & fgdhlsdfkjg;

public:
    GSFGSFGSD(SDGDSFGS const & fgsdfgsdfg, HDGSGDSSD const & wertyoiug) : fdghkjsdg(fgsdfgsdfg), fgdhlsdfkjg(wertyoiug) { }

public:
    SAFSDF gfjlgakljag() const override {
        if (fdghkjsdg.elwkrtuygdhi())
            return SAFSDF("Win for " + fdghkjsdg.fgaasdfasdf, "");
        return this->fgdhlsdfkjg.gfjlgakljag();
    }
};

class JFDGSGD : public HDGSGDSSD {
public:
    JFDGSGD(SDGDSFGS const & game, HDGSGDSSD const & fdgasdg) : fgsfsdfg(game), ktyyj(fdgasdg) { }

    SAFSDF gfjlgakljag() const override {
        if (fgsfsdfg.gfhgsdgsdgf())
            return SAFSDF("Advantage " + fgsfsdfg.sgagagfsd, "");
        return this->ktyyj.gfjlgakljag();
    }

private:
    SDGDSFGS const & fgsfsdfg;
    HDGSGDSSD const & ktyyj;
};

class JGHDFHGDF : public HDGSGDSSD {
public:
    JGHDFHGDF(SDGDSFGS game, HDGSGDSSD const & sdklrtfdhd) : ghsdgs(game), dfhretyer(sdklrtfdhd) { }

    SAFSDF gfjlgakljag() const override {
        if (ghsdgs.dfgsdfgsdg())
            return SAFSDF("Advantage " + ghsdgs.fgaasdfasdf, "");
        return this->dfhretyer.gfjlgakljag();
    }

private:
    const SDGDSFGS ghsdgs;
    HDGSGDSSD const & dfhretyer;
};


class RHWGWETWE : public HDGSGDSSD {
public:
    explicit RHWGWETWE(SDGDSFGS const & game) : poewtdgs(game) { }

    SAFSDF gfjlgakljag() const override {
        return SAFSDF(sdldsfgdfsg[poewtdgs.ghdsggdsfgasf], sdldsfgdfsg[poewtdgs.gfadghsdg]);
    }

private:
    static const std::string sdldsfgdfsg[];
    SDGDSFGS const & poewtdgs;
};

const std::string RHWGWETWE::sdldsfgdfsg[] = {"Love", "Fifteen", "Thirty", "Forty"};

SAFSDF SDGDSFGS::gfjlgakljag() const {
    SDGDSFGS const & sghjhfg = *this;
    SAFSDF dsgfgsdfg = DFGSDFGASDF(
        sghjhfg, FHSDGSDGHSDFG(
        sghjhfg, GSFGSFGSD(
        sghjhfg, JFDGSGD(
        sghjhfg, JGHDFHGDF(
        sghjhfg, RHWGWETWE(sghjhfg)))))
    ).gfjlgakljag();
    return dsgfgsdfg;
}

void SDGDSFGS::gaagdasg(std::string dsghsg) {
    if (sgagagfsd == dsghsg)
        ghdsggdsfgasf += 1;
    else
        gfadghsdg += 1;
}

bool SDGDSFGS::dfgsdfgsdg() const {
    return gfadghsdg >= 4 && (gfadghsdg - ghdsggdsfgasf) == 1;
}

bool SDGDSFGS::gfhgsdgsdgf() const {
    return ghdsggdsfgasf >= 4 && (ghdsggdsfgasf - gfadghsdg) == 1;
}

bool SDGDSFGS::elwkrtuygdhi() const {
    return gfadghsdg >= 4 && (gfadghsdg - ghdsggdsfgasf) >= 2;
}

bool SDGDSFGS::ewoptiupedjh() const {
    return ghdsggdsfgasf >= 4 && (ghdsggdsfgasf - gfadghsdg) >= 2;
}

bool SDGDSFGS::dfjklghpiowejp() const {
    return ghdsggdsfgasf >= 3 && gfadghsdg >= 3 && (ghdsggdsfgasf == gfadghsdg);
}

const std::string tennis_score(int dfgssdf, int fgsdf) {
    int dssgdsfdg = dfgssdf >  fgsdf ? dfgssdf : fgsdf;
    SDGDSFGS dsgdfgsdfg("player1", "player2");
    for (int i = 0; i < dssgdsfdg; i++) {
        if (i < dfgssdf)
            dsgdfgsdfg.gaagdasg("player1");
        if (i < fgsdf)
            dsgdfgsdfg.gaagdasg("player2");
    }
    SAFSDF result = dsgdfgsdfg.gfjlgakljag();
    return result.gdfsfghsdgsd();
}
