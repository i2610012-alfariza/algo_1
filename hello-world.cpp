
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    // ANSI Color
    const string green = "\033[1;32m";
    const string cyan  = "\033[1;36m";
    const string red   = "\033[1;31m";
    const string reset = "\033[0m";

    cout << cyan;
    cout << "====================================\n";
    cout << "       WELCOME TO MY PROGRAM        \n";
    cout << "====================================\n\n";
    cout << reset;

    cout << green << "[+] Initializing system";
    
    for (int i = 0; i < 5; i++) {
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << ".";
    }

    cout << "\n[+] System successfully loaded!\n\n";
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << cyan;
    cout << " _   _ _____ _     _     ___    \n";
    cout << "| | | | ____| |   | |   / _ \\   \n";
    cout << "| |_| |  _| | |   | |  | | | |  \n";
    cout << "|  _  | |___| |___| |__| |_| |  \n";
    cout << "|_| |_|_____|_____|_____\\___/   \n\n";
    cout << reset;

    cout << green << "HELLO WORLD!" << reset << endl;
    cout << red << "Keep Coding, Keep Learning!" << reset << endl;

    cout << "\n====================================\n";
    cout << "       PROGRAM TERMINATED           \n";
    cout << "====================================\n";

    return 0;
}
