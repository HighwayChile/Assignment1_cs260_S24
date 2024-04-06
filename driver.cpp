// REMEMBER TO COMPILE BOTH THE MAIN AND FUNCTIONS FILES!!!
# include <iostream>
# include <limits>
# include "marble_functions.h"

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;
using std::endl;



int main() {

    // marbles starting with 0
    int num_marbles = 0;

    // intro
    cout << "Bag O' Marbles\n" << endl;
    cout << "You have a bag that holds marbles. In front of you is a heaping pile of marbles.\n" << endl;

    while(true) {
        int menu1;
        cout << "What would you like to do? \n1. Inspect bag \n2. Add marble \n3. Remove marble \n4. Quit \n"  << endl;
        if (cin >> menu1 && menu1 >=1 && menu1 <= 4) {
                // switch variable
                
            switch (menu1) {
            case 1:
                inspect_bag(num_marbles);
                break;
            case 2:
                add_marble(num_marbles);
                break;
            case 3:
                remove_marble(num_marbles);
                break;
            case 4:
                cout << "Don't lose your marbles!\n";
                // this method is one of many from https://xoax.net/blog/keeping-the-c-console-window-open/
                system("pause");
                return 0;
            default:
                break;
            }

        } else {
        cout << "please choose a valid menu choice\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";
        }

    }
    return 0; 
}