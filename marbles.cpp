# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    while(true) {
        int menu1;

        cout << "Bag O' Marbles" << endl;
        cout << "You have a bag that holds marbles. In front of you is a heaping pile of marbles. \nRed marbles, blue marbles, and green marbles." << endl;
        cout << "What would you like to do? (add, remove, check)" << endl;
        cin >> menu1;
        switch (menu1) {
        case 1:
            /* code add*/
            cout << "You have added\n";
            break;
        case 2:
            // remove
            cout << "You have removed\n";
            break;
        case 3:
            // check
            cout << "You have checked the bag\n";
            break;
        case 4:
            // quit
            cout << "You have quit\n";
            break;
        
        default:
            break;
        }
        cout << "\n";

        // this method is one of many from https://xoax.net/blog/keeping-the-c-console-window-open/
        // system("pause");
        // return 0; 
    }
    system("pause");
    return 0; 
}