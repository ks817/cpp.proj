#include <iostream>
using namespace std;

void displayWelcomeMessage() {
    cout << "    ╔═══════════════════════════════════════════════════════════════════════╗\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ║           ███████╗███╗   ██╗ █████╗ ██╗  ██╗███████╗                  ║\n";
    cout << "    ║          ██╔════╝████╗  ██║██╔══██╗██║ ██╔╝██╔════╝                   ║\n";
    cout << "    ║          ███████╗██╔██╗ ██║███████║█████╔╝ █████╗                     ║\n";
    cout << "    ║          ╚════██║██║╚██╗██║██╔══██║██╔═██╗ ██╔══╝                     ║\n";
    cout << "    ║          ███████║██║ ╚████║██║  ██║██║  ██╗███████╗                   ║\n";
    cout << "    ║          ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝                   ║\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ║          WELCOME TO THE JUNGLE! HUNT AND GROW LONGER!                 ║\n";
    cout << "    ║          MOVE THROUGH THE MAZE, FIND SOMETHING TO GRAZE!              ║\n";
    cout << "    ║          DON'T CRASH INTO WALLS OR BITE YOUR OWN TAIL!                ║\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ║       CONTROLS: I (UP), J (LEFT), K (DOWN), L (RIGHT), Q (QUIT)       ║\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ║                 PRESS ANY KEY TO START THE HUNT...                    ║\n";
    cout << "    ║                                                                       ║\n";
    cout << "    ╚═══════════════════════════════════════════════════════════════════════╝\n";
}

int main(){
    displayWelcomeMessage();
    return 0;
}