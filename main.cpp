#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];                            // alulvon�s hi�nyzik az N_ELEMENTS-b�l
    std::cout << '1-100 ertekek duplazasa'                  // sorv�gi ; hi�nyzik, nem megfelel� a sz�veg jel�l�se (' helyett " sz�ks�ges), hi�nyzik a sort�r�s
        for (int i = 0;)                                    // ciklus hi�nyos (a meddig �rt�k �s a l�ptet�s m�rt�ke/ir�nya hi�nyzik), rosszul van tabul�lva 
        {
            b[i] = i * 2;                                   // i + 1. �rt�ket kell 2-vel szorozni, mert 1-t�l 100-ig kell a sz�mokat 
        }
    for (int i = 0; i; i++)                                 // hi�nyzik a m�sodik i-re vonatkoz� felt�tel (meddig mehet a ciklus) 
    {
        std::cout << "Ertek:"                               // sorv�gi ; hi�nyzik, nincs megadva az �rt�k, nincs sort�r�s
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                              // nincs kezd� �rt�ke a v�ltoz�nak
    for (int i = 0; i < N_ELEMENTS, i++)                    // , helyett ; kell haszn�lni a ciklusban, 
    {
        atlag += b[i]                                       // sorv�gi ; hi�nyzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
