#ifndef KAZINO_H
#define KAZINO_H


class Kazino
{
    public:
        Kazino();
        ~Kazino();
        Kazino(const Kazino& other);

        string GetImeKazina() { return ImeKazina; }
        void SetImeKazina(string val) { ImeKazina = val; }

    protected:

    private:
        string ImeKazina;
};

#endif // KAZINO_H
