#include "marble_functions.h"
#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;
using std::endl;


void inspect_bag(int& num) {
    if (num == 1) {
        // cout << "\n";
        cout << "There is " << num << " marble in your bag\n";
        cout << "\n";
    } else {
        // cout << "\n";
        cout << "There are " << num << " marbles in your bag\n";
        cout << "\n";
    }
}

int add_marble(int& num) {
    while (true) {
        // user input variable to choose number to add
        int num_add = 0;
        cout << "How many would you like to add?\n";
        // user may use numbers between 0 and 2 billion (overflow prevention)
        if (cin >> num_add && num_add >= 0 && num + num_add <= 2000000000)  {
            num += num_add;
            cout << "added " << num_add << " marbles to the bag\n";
            cout << "\n";
            return num;
        // num + num_add must be below 2 billion
        } else if(num + num_add > 2000000000) {
            cout << "This magic bag can only hold 2 billion marbles!\n" << endl;
            cout << "You have " << num << " marbles in your magic bag!\n" << endl;
        } else {
            // I got this part straight from ChatGPT. My inclination was to restrict the use of string type, but was not able to.
            // If I were to problem-solve on my own, I think I would have ended up reading the unicode and using that.
            cout << "please choose a valid number of marbles\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int remove_marble(int& num) {
    while (true) {
        // user input variable to choose number to remove
        int num_remove = 0;
        cout << "How many would you like to remove?\n";
        if (cin >> num_remove && num_remove >= 0 && num_remove <= num)  {
            num -= num_remove;
            cout << "removed " << num_remove << " marbles from the bag\n";
            cout << "\n";
            return num;
        } else {
            cout << "please choose a valid number of marbles\n";
            inspect_bag(num);
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int empty_bag(int& num) {
    num = 0;
    cout << "bag has been emptied\n\n";
    return num;
}