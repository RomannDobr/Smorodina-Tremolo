// СМОРОДИНОВОЕ ТРЕМОЛО:

double bpm = 219;          // ВВЕСТИ необходимый темп
double beet = 30000/bpm;
int pattern [] = {         // ВВЕСТИ паттерн - ритмический рисунок
    1,0,0,1,               // 1 четверть
    0,0,1,0,               // 2 четверть
    1,1,1,0,               // 3 четверть
    0,0,0,0                // 4 четверть
    };                    
                           // ДАЛЕЕ БОЛЬШЕ НИЧЕГО ВВОДИТЬ НЕ ТРЕУЕТСЯ


    
void setup () 
{
  pinMode(2, INPUT_PULLUP);
}
void loop ()
{
  int i = 0;
     for (i=0; i<16; i++) {
            if (i % 2 == 0)  pinMode(4, OUTPUT);      // светодиод ON
            if (i % 2 == 1) pinMode(4, INPUT_PULLUP); // светодиод OFF
        if (pattern [i] == 1) {
          pinMode(3, OUTPUT);                         // основная функция - питание плюс ON
          delay (beet);
        }
        if (pattern [i] == 0) {
          pinMode(3, INPUT_PULLUP);                   // основная функция - питание плюс OFF
          delay (beet);
        }
    }
}
