// Fibonacci.cpp : Diese Datei enthält die Funktion "main". 
// Hier beginnt und endet die Ausführung des Programms.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Fibonacci - Folge:\n";

    int secondLast = 1;
    int last = 1;

    cout << setw(9) << secondLast << endl;
    cout << setw(9) << last << endl;
    
    int current = secondLast + last;

    cout << setw(9) << current << endl;

    system("pause");
}
