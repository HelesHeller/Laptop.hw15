#include <iostream>
#include <string>

#include "Laptop.h"

using namespace std;

int main() {

    Mouse mouse("Logitech", "M185");
    Printer printer("HP", "LaserJet");

    Laptop* laptop = new Laptop("Acer", "Aspire 7", &mouse, &printer);

    laptop->SetProcessor("AMD", "Ryzen 5 5000H", 6, 12, 11, 4);
    laptop->SetRam(16);
    laptop->SetGPU("NVIDIA", "GeForce GTX 1650");
    laptop->SetWebcam("HD 720p");

    laptop->Print();

    delete laptop;

    cout << "_______________________________________________" << endl;

    mouse.Print();
    printer.Print();

    cout << "_______________________________________________" << endl;


    return 0;
}
