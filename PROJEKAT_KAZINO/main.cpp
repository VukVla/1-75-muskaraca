#include <iostream>

using namespace std;

class Kazino
{
private:
    string ImeKazina;
public:
    Kazino(){}
    Kazino(string IImeKazina)
    {
        ImeKazina = IImeKazina;
    }
    Kazino(const Kazino &KAZINO)
    {
        ImeKazina = KAZINO.ImeKazina;
    }
    ~Kazino(){}
    string getImeKazina()
    {
        return ImeKazina;
    }
    void setImeKazina(string NewImeKazina)
    {
        ImeKazina = NewImeKazina;
    }
};

class Covek : public Kazino
{
private:
    string ImePrezime;
    int Godine;
    int Pare;
public:
    Covek(){}
    Covek(string IImePrezime, int GGodine, int PPare)
    {
        ImePrezime = IImePrezime;
        Godine = GGodine;
        Pare = PPare;
    }
    Covek(const Covek &COVEK)
    {
        ImePrezime = COVEK.ImePrezime;
        Godine = COVEK.Godine;
        Pare = COVEK.Pare;
    }
    ~Covek(){}
    string getImePrezime()
    {
        return ImePrezime;
    }
    int getGodine()
    {
        return Godine;
    }
    int getPare()
    {
        return Pare;
    }
    void setImePrezime(string NewImePrezime)
    {
        ImePrezime = NewImePrezime;
    }
    void setGodine(int NewGodine)
    {
        Godine = NewGodine;
    }
    void setPare(int NewPare)
    {
        Pare = NewPare;
    }
};

enum TipRadnika{Sanker, Konobar, Kuvar, Cistac, Obezbedjenje, Croupier};

class Radnik : public Covek
{
private:
    int RadnoVremep;
    int RadnoVremek;
    TipRadnika tipradnika;
    int Plata;
public:
    Radnik(){}
    Radnik(int RRadnoVremep, int RRadnoVremek, TipRadnika ttipradnika, int PPlata)
    {
        RadnoVremep = RRadnoVremep;
        RadnoVremek = RRadnoVremek;
        tipradnika = ttipradnika;
        Plata = PPlata;
    }
    Radnik(const Radnik &RADNIK)
    {
        RadnoVremep = RADNIK.RadnoVremep;
        RadnoVremek = RADNIK.RadnoVremek;
        tipradnika = RADNIK.tipradnika;
        Plata = RADNIK.Plata;
    }
    ~Radnik(){}
    int getRadnoVremep()
    {
        return RadnoVremep;
    }
    int getRadnoVremek()
    {
        return RadnoVremek;
    }
    TipRadnika gettipradnika()
    {
        return tipradnika;
    }
    int getPlata()
    {
        return Plata;
    }
    void setRadnoVremep(int NewRadnoVremep)
    {
        RadnoVremep = NewRadnoVremep;
    }
    void setRadnoVremek(int NewRadnoVremek)
    {
        RadnoVremek = NewRadnoVremek;
    }
    void settipradnika(TipRadnika Newtipradnika)
    {
        tipradnika = Newtipradnika;
    }
    void setPlata(int NewPlata)
    {
        Plata = NewPlata;
    }
};

class Vlasnik : public Covek
{
private:
    unsigned int Prihod;
public:
    Vlasnik(){}
    Vlasnik(unsigned int PPrihod)
    {
        Prihod = PPrihod;
    }
    Vlasnik(const Vlasnik &VLASNIK)
    {
        Prihod = VLASNIK.Prihod;
    }
    ~Vlasnik(){}
    unsigned int getPrihod()
    {
        return Prihod;
    }
    void setPrihod(unsigned int NewPrihod)
    {
        Prihod = NewPrihod;
    }
};

class Musterija : public Covek
{
private:
    bool Pusac;
    int Tokeni;
public:
    Musterija(){}
    Musterija(bool PPusac, int TTokeni)
    {
        Pusac = PPusac;
        Tokeni = TTokeni;
    }
    Musterija(const Musterija &MUSTERIJA)
    {
        Pusac = MUSTERIJA.Pusac;
        Tokeni = MUSTERIJA.Tokeni;
    }
    ~Musterija(){}
    bool getPusac()
    {
        return Pusac;
    }
    int getTokeni()
    {
        return Tokeni;
    }
    void setPusac(bool NewPusac)
    {
        Pusac = NewPusac;
    }
    void setTokeni(int NewTokeni)
    {
        Tokeni = NewTokeni;
    }
};

class Menadzer : public Radnik
{
private:
    int PlataMenadzer;
public:
    Menadzer(){}
    Menadzer(int PPlataMenadzer)
    {
        PlataMenadzer = PPlataMenadzer;
    }
    Menadzer(const Menadzer &MENADZER)
    {
        PlataMenadzer = MENADZER.PlataMenadzer;
    }
    ~Menadzer(){}
    int getPlataMenadzer()
    {
        return PlataMenadzer;
    }
    void setPlataMenadzer(int NewPlataMenadzer)
    {
        PlataMenadzer = NewPlataMenadzer;
    }
    void DodajKonobara()
    {

    }
    void DodajKasirkuWC()
    {

    }
    void DodajKasirkuT()
    {

    }
    void DodajKuvara()
    {

    }
    void DodajSankera()
    {

    }
    void DodajCistaca()
    {

    }
    void DodajCroupiera()
    {

    }
    void DodajObezbedjenje()
    {

    }
};

class Prostorija : public Kazino
{
private:
    double Dimenzijax;
    double Dimenzijay;
    double Dimenzijaz;
    bool PusackaZona;
public:
    Prostorija(){}
    Prostorija(bool PPusackaZona, double DDimenzijax, double DDimenzijay, double DDimenzijaz;)
    {
        Dimenzijax = DDimenzijax;
        Dimenzijay = DDimenzijay;
        Dimenzijaz = DDimenzijaz;
        PusackaZona = PPusackaZona;
    }
    Prostorija(const Prostorija &PROSTORIJA)
    {
        Dimenzijax = PROSTORIJA.Dimenzijax;
        Dimenzijay = PROSTORIJA.Dimenzijay;
        Dimenzijaz = PROSTORIJA.Dimenzijaz;
        PusackaZona = PROSTORIJA.PusackaZona;
    }
    ~Prostorija(){}
    double getDimenzijax()
    {
        return Dimenzijax;
    }
    double getDimenzijay()
    {
        return Dimenzijay;
    }
    double getDimenzijaz()
    {
        return Dimenzijaz;
    }
    bool getPusackaZona()
    {
        return PusackaZona;
    }
    void setDimenzijax(double NewDimenzijax)
    {
        Dimenzijax = NewDimenzijax;
    }
    void setDimenzijay(double NewDimenzijay)
    {
        Dimenzijay = NewDimenzijay;
    }
    void setDimenzijaz(double NewDimenzijaz)
    {
        Dimenzijaz = NewDimenzijaz;
    }
    void setPusackaZona(bool NewPusackaZona)
    {
        PusackaZona = NewPusackaZona;
    }
};

class Ostava : public Prostorija
{
private:
    int Cistaci;
public:
    Ostava(){}
    Ostava(int CCistaci)
    {
        Cistaci = CCistaci;
    }
    Ostava(const Ostava &OSTAVA)
    {
        Cistaci = OSTAVA.Cistaci;
    }
    ~Ostava(){}
    int getCistaci()
    {
        return Cistaci;
    }
    void setCistaci(int NewCistaci)
    {
        Cistaci = NewCistaci;
    }
};

class WC : public Prostorija
{
private:
    Kasirka WCKasirka;
    unsigned int Naplata;
    unsigned int Korisnici;
public:
    WC(){}
    WC(Kasirka WWCKasirka, unsigned int NNaplata, unsigned int KKorisnici)
    {
        WCKasirka = WWCKasirka;
        Naplata = NNaplata;
        Korisnici = KKorisnici;
    }
    WC(const WC &WCCOPY)
    {
        WCKasirka = WCCOPY.WCKasirka;
        Naplata = WCCOPY.Naplata;
        Korisnici = WCCOPY.Korisnici;
    }
    ~WC(){}
    Kasirka getWCKasirka()
    {
        return WCKasirka;
    }
    unsigned int getNaplata()
    {
        return Naplata;
    }
    unsigned int getKorisnici()
    {
        return Korisnici;
    }
    void setWCKasirka(Kasirka NewWCKasirka)
    {
        WCKasirka = NewWCKasirka;
    }
    void setNaplata(unsigned int NewNaplata)
    {
        Naplata = NewNaplata;
    }
    void setKorisnici(unsigned int NewKorisnici)
    {
        Korisnici = NewKorisnici;
    }
};

class Kuhinja : public Prostorija
{
private:
    List<Radnik> Kuhinjari;
    List<Proizvod> Cenovnik;
public:
    Kuhinja(){}
    ~Kuhinja(){}
};

enum VrstaProizvoda{Rucak, Dorucak, Vecera, Voda, Sok, Alkohol};

class Proizvod
{
private:
    VrstaProizvoda vrstaproizvoda;
    int Cena;
public:
    Proizvod(){}
    Proizvod(VrstaProizvoda vvrstaprizvoda, int CCena)
    {
        Cena = CCena;
        vrstaproizvoda = vvrstaprizvoda;
    }
    Proizvod(const Proizvod &PROIZVOD)
    {
        Cena = PROIZVOD.Cena;
        vrstaproizvoda = PROIZVOD.vrstaprizvoda;
    }
    ~Proizvod(){}
    VrstaProizvoda getvrstaprizvoda()
    {
        return vrstaproizvoda;
    }
    int getCena()
    {
        return Cena;
    }
    void setvrstaproizvoda(VrstaProizvoda Newvrstaproizvoda)
    {
        vrstaproizvoda = Newvrstaproizvoda;
    }
    void setCena(int NewCena)
    {
        Cena = NewCena;
    }
};

class Trpezarija : public Prostorija
{
private:
    int Stolovi;
    int Stolice;
    Kasirka TKasirka;
public:
    Trpezarija(){}
    Trpezarija(int SStolovi, int SStolice, Kasirka TTKasirka)
    {
        Stolovi = SStolovi;
        Stolice = SStolice;
        TKasirka = TTKasirka;
    }
    Trpezarija(const Trpezarija &TRPEZARIJA)
    {
        Stolovi = TRPEZARIJA.Stolovi;
        Stolice = TRPEZARIJA.Stolice;
        TKasirka = TRPEZARIJA.TKasirka;
    }
    ~Trpezarija(){}
    Kasirka getTKasirka()
    {
        return TKasirka;
    }
    int getStolovi()
    {
        return Stolovi;
    }
    int getStolice()
    {
        return Stolice;
    }
    void setTKasirka(Kasirka NewTKasirka)
    {
        TKasirka = NewTKasirka;
    }
    void setStolovi(int NewStolovi)
    {
        Stolovi = NewStolovi;
    }
    void setStolice(int NewStolice)
    {
        Stolice = NewStolice;
    }
};

class Lobi : public Prostorija
{
private:
    int Musterije;
    int Croupieri;
public:
    Lobi(){}
    Lobi(int MMusterije, int CCroupieri)
    {
        Musterije = MMusterije;
        Croupieri = CCroupieri;
    }
    Lobi(const Lobi &LOBI)
    {
        Musterije = LOBI.Musterije;
        Croupieri = LOBI.Croupieri;
    }
    ~Lobi(){}
    int getMusterije()
    {
        return Musterije;
    }
    int getCroupieri()
    {
        return Croupieri;
    }
    void setMusterije(int NewMusterije)
    {
        Musterije = NewMusterije;
    }
    void setCroupieri(int NewCroupieri)
    {
        Croupieri = NewCroupieri;
    }
};

class Igra : public Kazino
{
private:
    int Stolovi;
    int Stolice;
    List<Musterija> Igraci;
public:
    Igra(){}
    Igra(int SStolovi, int SStolice)
    {
        Stolovi = SStolovi;
        Stolice = SStolice;
    }
    Igra(const Igra &IGRA)
    {
        Stolovi = IGRA.Stolovi;
        Stolice = IGRA.Stolice;
    }
    ~Igra(){}
    int getStolovi()
    {
        return Stolovi;
    }
    int getStolice()
    {
        return Stolice;
    }
    void setStolovi(int NewStolovi)
    {
        Stolovi = NewStolovi;
    }
    void setStolice(int NewStolice)
    {
        Stolice = NewStolice;
    }
};

void Vockice(Musterija.getPare())
{
    if(i==4)
        {
            int i, n, v, ulog;
            printf("Dobro dosao na vockice(samo sto nema voca nego brojeva)\n");
            printf("Unesi ulog\n");
            scanf("%i", &ulog);
            ifMusterija.getPare()<0)
            {
                printf("Brate svorc si, pali odavde.\n");
                break;
            }


            n=3;
            int niz[n];
            srand(time(0));
            niz[0]=rand()%3+1;
            niz[1]=rand()%3+1;
            niz[2]=rand()%3+1;
            for(int j=0; j<3; j++)
            {
                printf("%i ", niz[j]);

            }
            printf("\n");

            if (niz[0]==niz[1] && niz[1]==niz[2])
            {
                i=ulog*9;
                printf("Dobio si %i dinara\n", i);
                Musterija.getPare()=+i;
            }
            else
            {
                printf("Vise srece sledeci put\n");
                Musterija.getPare()=-ulog;
                continue;
            }
        }
}

void Lucky4(Musterija.getPare())
{
    int n=4, ulog, dobitak, dobit;
    printf("Dobro dosao na tocak srece!\n");
    printf("Koliko zelis para da stavis?\n");
    scanf("%i", &ulog);

    if(Musterija.getPare()<0)
    {
        printf("Brate svorc si, pali odavde\n");
        continue;
    }
    int niz[n];
    niz[0]=0;
    niz[1]=0;
    niz[2]=0.5ulog;
    niz[3]=4ulog;
    srand(time(0));
    dobitak=rand()%4;
    if(dobitak==0)
    {
        Musterija.getPare()-=ulog;
        printf("Krompir\n");
    }
    if(dobitak==1)
    {
        Musterija.getPare()-=ulog;
        printf("Krompir\n");
    }
    if(dobitak==2)
    {
        int suma=ulog*0.5;
        printf("Dobio si %i dinara (pola novca koje su uplatio\n)", suma);
        Musterija.getPare()-=suma;
    }
    if(dobitak==3)
    {
        dobit=ulog*4;
        printf("Dobio si %i dinara\n", dobit);
        Musterija.getPare()+=dobit;
    }
}

void Rulet(Musterija.getPare())
{
    printf("Dobro dosao na tocak-rulet!\n");
    printf("Koliko zelis para da stavis?\n");
    int ulog, dobitak, x=2;
    int niz[x];
    scanf("%i", &ulog);
    if(Musterija.getPare()<ulog)
    {
        printf("Brate svorc si, pali odavde.\n");
        continue;
    }
    int suma=ulog*2;
    niz[0]=0;
    niz[1]=0;
    srand(time(0));
    dobitak=rand()%2;
    if(dobitak==0)
    {
        Musterija.getPare()-=ulog;
        printf("Krompir\n");
        continue;
    }
    if(dobitak==1)
    {
        Musterija.getPare()+=suma;
        printf("Bravo dobio si %i dinara\n", suma);
        continue;
    }
}

void Interface()
{
    while(1==1)
    {
        ovde:

        int p1=0, p2=0, p3=0, p4=0, p5=0;
        printf("1.Kladionica\n2.Bingo\n3.Tocak\n4.APARAT\n5.STANJE NA RACUNU\n6.EXIT");
        int i, n, v;
        printf("\nIzaberi igru(1=Klajdza, 2=Bingo, 3=Lucky4, 4=Vockice, 5=Stanje na racunu, 6=izadji)\n");
        scanf("%i", &i);
        switch(n)
        {
        case 1:
            Klajdza(Musterija.getPare());
            break;
        case 2:
            Bingo(Musterija.getPare());
            break;
        case 3:
            Lucky4(Musterija.getPare());
            break;
        case 4:
            Vockice(Musterija.getPare());
            break;
        case 5:
            cout << Musterija.getPare() << endl;
            break;
        case 6:
            return;
        }
    }
}

void Bingo(Musterija.getPare())
{
    if(i==2)
        {

            printf("Hoces bingo ili bingo+(1=bingo, 2=bingo+)\n");
            int i;
            scanf("%i", &i);
            while (i<1 || i>2)
            {
                printf("Izaberi broj od 1 do 2\n");
                scanf("%i", &i);
            }
            if(i==1)
            {
                int kombinacija=78;
                int kombinacijaIgraca;
                int novcanica;
                int kusur;
                int ulog;
                if(Musterija.getPare()<200)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    continue;
                }
                int suma=ulog*2;

                printf("Unesi svoju kombinaciju(HINT! broj je dvocifren)\n");
                scanf("%i", &kombinacijaIgraca);
                if(kombinacija==kombinacijaIgraca)
                {
                    printf("Dobio si 10 000 dinara!\n");
                    Musterija.getPare()+=10000;
                    continue;
                }
                else
                {
                    printf("Unlucky, ovaj promasaj te kosta 200 dinara\n");
                    Musterija.getPare()-=200;
                    continue;
                }
            }
        }
        if(i==2)
        {
            int kombinacija=922;
            int kombinacijaIgraca;
            int novcanica;
            int kusur;
             if(Musterija.getPare()<200)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    continue;
                }
            printf("Unesi svoju kombinaciju(HINT! broj je trocifren)\n");
            scanf("%i", &kombinacijaIgraca);
            if(kombinacija==kombinacijaIgraca)
            {
                Musterija.getPare()+=300000;
                printf("Dobio si 300 000\n");
            }
            else
            {
                printf("Unlucky, ovaj promasaj te kosta 1000 dinara\n");
                Musterija.getPare()-=1000;
            }
            continue;
        }
}

void Klajdza(Musterija.getPare())
{
    while(1==1)
    {
        ovde:
        int p1=0, p2=0, p3=0, p4=0, p5=0;
        printf("1.Kladionica\n2.Bingo\n3.Tocak\n4.APARAT\n5.STANJE NA RACUNU\n6.EXIT");
        int i, n, v;
        printf("\nIzaberi igru(1=kladza, 2=bingo, 3=tocak, 4=aparat, 5=novac na kartici, 6=IZACI CES)\n");
        scanf("%i", &i);
        while (i<1 || i>6)
        {
            printf("Izaberi broj od 1 do 6\n");
            scanf("%i", &i);
        }
        int dobitak=0;
        double kvota=1;

        if(i==1)
        {
            while(1==1)
            {
                int ulog;
                printf("Ponuda:\n1.EURO pobednik\n2.NBA MVP\n3.ROLAN GAROS\n4.NBA MECEVI.");
                printf("Izaberi igru (1=EURO, 2=NBA MVP, 3=ROLAN GAROS, 4=NBA MECEVI)\n");
                scanf("%i", &n);
                while (n<1 || n>4)
                {
                    printf("Izaberi broj od 1 do 4\n");
                    scanf("%i", &n);
                }
                if(n==1)
                {
                    printf("Ko osvaja EURO?\n1.FRANCUSKA(kvota 6), 2.ENGLESKA(kvota 6), 3.BELGIJA(kvota 10)\n");
                    scanf("%i", &v);
                    while (v<1 || v>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &v);
                    }
                    if(v==1 || v==2)

                        kvota*=6;
                    else kvota*=10;
                    if(v>0 && v<4)
                        p1++;
                    ponovo:
                    if(p1>1 || p2>1 || p3>1 || p4>1 || p5>1)
                    {
                        printf("Ne moze dvaput da se igra ista igra.\n");
                        break;
                    }
                    printf("Da li zelite da igrate jos nesto iz nase ponude?\n1.DA\n2.NE\n");
                    int sigurni, dobitak;

                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)

                    {
                        printf("Izaberi broj od 1 do 2.\n");
                        scanf("%i", &sigurni);
                    }
                    if(sigurni==1)
                        continue;
                    if(sigurni==2);
                    {
                        printf("Unesi ulog(ulog mora biti veci od 20 dinara).\n");
                        int ulog;
                        scanf("%i", &ulog);
                        while (ulog<20)
                        {
                            printf("Ulog mora biti veci od 20 dinara.\n");
                            scanf("%i", &ulog);
                        }
                        dobitak=ulog*kvota;
                        Musterija.getPare()-=ulog;
                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara.\n", dobitak);
                        goto ovde;
                    }
                }
                if(n==2)
                {
                    int mvp;
                    printf("Ko ce biti NBA MVP?\n1.JOKIC(kvota 1.10), 2.CURRY(kvota 10), 3.EMBID(kvota 15)\n");
                    scanf("%i", &mvp);
                    while (mvp<1 || mvp>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &mvp);
                    }
                    if(mvp==1)
                    {
                        printf("Belezio oko 11 skokova, 8 asistenicja i 26 poena, 3. mesto na zapadu.\n");
                        kvota*=1.10;
                    }
                    if(mvp==2)
                    {
                        printf("Belezio 32 poena, oko 5 skokova i 6 asistenicja, nije usao u plej of.\n");
                        kvota*=10;
                    }
                    if(mvp==3)
                    {
                        printf("Nije odigrao skoro trecinu utakmica, belezio oko 28 poena, 11 skokova i 3 asistencije, prvo mesto na Istoku.\n");
                        kvota*=15;
                    }
                    if(mvp>0 && mvp<4)
                        ++p2;
                    goto ponovo;
                    printf("Unesi ulog(ulog mora biti veci od 20 dinara)\n");
                    int ulog;
                    scanf("%i", &ulog);
                    while (ulog<20)
                    {
                        printf("Ulog mora biti veci od 20 dinara\n");
                        scanf("%i", &ulog);
                    }
                    printf("Da li ste sigurni?\n1.DA\n2.NE\n");
                    int sigurni;
                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &sigurni);
                    }

                    if(sigurni==1)
                    {
                        int dobitak;
                        dobitak=ulog*kvota;
                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara\n", dobitak);
                    }
                    else continue;
                }
                if(n==3)
                {
                    int osvajac;
                    int ulog;
                    int dobitak;
                    printf("Ponuda:1.NOLE(2), 2.NADAL(2), 3.FEDERER(10)\n");
                    scanf("%i", &osvajac);
                    while (osvajac<1 || osvajac>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &osvajac);
                    }
                    if(osvajac==1 || osvajac==2)
                    {

                        printf("Jedan od favorita.\n");
                        kvota*=2;
                    }
                    if(osvajac==3)
                    {
                        printf("Vratio se sa velike pauze, outsajder.\n");

                        kvota*=10;
                    }
                    if(osvajac>0 && osvajac<4)
                        p3++;
                    goto ponovo;
                    printf("Unesi ulog(ulog mora biti veci od 20 dinara).\n");

                    scanf("%i", &ulog);
                    while (ulog<20)
                    {
                        printf("Ulog mora biti veci od 20 dinara\n");
                        scanf("%i", &ulog);
                    }
                    printf("Da li ste sigurni?\n1.DA\n2.NE\n");
                    int sigurni;
                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &sigurni);
                    }

                    if(sigurni==1)
                    {
                        int dobitak;
                        dobitak=ulog*kvota;
                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara\n", dobitak);
                    }
                    else
                        continue;

                }
                if(n==4)
                {
                    int g;
                    int v;
                    printf("PONUDA:\n1.BRUKLIN-MILVOKI\n2.FILADELFIJA-ATLANTA\n");
                    scanf("%i", &g);
                    while (g<1 || g>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &g);
                    }
                    if(g==1)
                    {
                        printf("Ko pobedjuje? 1=Bruklin(1.7), 2=MILVOKI(2.2)\n");
                        scanf("%i", &v);
                        while (v<1 || v>2)
                        {
                            printf("Izaberi broj od 1 do 2.\n");
                            scanf("%i", &v);
                        }
                        if(v==1 || v==2)
                            p4++;
                        printf("Hoces da igras jos nesto iz nase ponude?\n");
                        if(v==1)

                            kvota*=1.7;
                        else kvota*=2.2;

                        goto ponovo;


                    }
                    if(g==2)
                    {
                        printf("Ko pobedjuje? 1=FILADELFIJA(1.8), 2=ATLANTA(2.6).\n");
                        scanf("%i", &v);
                        while (v<1 || v>2)
                        {
                            printf("Izaberi broj od 1 do 2\n");
                            scanf("%i", &v);
                        }
                        if (v==1)
                            kvota*=1.8;
                        else kvota*=2.6;
                        if(v==1 || v==2)
                            p5++;
                        printf("Hoces da igras jos nesto iz nase ponude?\n");
                        goto ponovo;

                    }
                }
            }
        }
    }
}

int main()
{
    Interface();
    return 0;
}
