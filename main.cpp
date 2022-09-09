#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];                            // alulvonás hiányzik az N_ELEMENTS-bõl
    std::cout << '1-100 ertekek duplazasa'                  // sorvégi ; hiányzik, nem megfelelõ a szöveg jelölése (' helyett " szükséges), hiányzik a sortörés
        for (int i = 0;)                                    // ciklus hiányos (a meddig érték és a léptetés mértéke/iránya hiányzik), rosszul van tabulálva 
        {
            b[i] = i * 2;                                   // i + 1. értéket kell 2-vel szorozni, mert 1-tõl 100-ig kell a számokat 
        }
    for (int i = 0; i; i++)                                 // hiányzik a második i-re vonatkozó feltétel (meddig mehet a ciklus) 
    {
        std::cout << "Ertek:"                               // sorvégi ; hiányzik, nincs megadva az érték, nincs sortörés
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                              // nincs kezdõ értéke a változónak
    for (int i = 0; i < N_ELEMENTS, i++)                    // , helyett ; kell használni a ciklusban, 
    {
        atlag += b[i]                                       // sorvégi ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
