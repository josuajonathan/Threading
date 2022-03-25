#include <iostream>
#include <thread>
using namespace std;

void odd() {                                
    for (int i = 0; i < 20; i++) {
        if (i % 2 != 0) {                   
            cout << i << endl;                                  //mencetak bilangan ganjil
            this_thread::sleep_for(chrono::milliseconds(1000)); //mengatur delay 1s
        }
    }
}

void even() {                              
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            cout << i << endl;                                   //mencetak bilangan genap
            this_thread::sleep_for(chrono::milliseconds(2500));  //mengatur delay 2.5s
        }
    }
}

int main()
{
    thread ta(odd);         //memulai thread ta
    thread tb(even);        //memulai thread tb

    ta.join();              //menunggu ta selesai
    tb.join();              //menunggu tb selesai
}


