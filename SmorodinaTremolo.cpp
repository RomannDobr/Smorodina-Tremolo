// Смородиновое тремоло

#include<iostream>

using namespace std;

int main()
{
    double bpm = 110;    // необходимый темп
    double bit = 60000 / bpm;
    
    int pattern [] = { // паттерн - ритмический рисунок
        1,0,0,0,         // 1-4 четверть
        1,0,1,0,         // 5-8 четверть
        1,1,1,1,         // 9-12 четверть
        0,0,0,0          // 13-16 четверть
    };

    for (int i=0; i<16; i++) {
        if (i == 0 || i == 8) cout << ".";
        if (pattern [i] == 1) cout << "A ";
        if (pattern [i] == 0) cout << "_ ";
        if (i == 3 || i == 11) cout << "|";
        
    }
        
    cout << bit;

    return 0;
}
