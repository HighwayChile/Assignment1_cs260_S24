# Assignment1_cs260_S24
Assignment 1 for Spring 2024, CS260, LBCC

# Assignment 1 (Bag of Marbles):  


# Design  
This is a bag that holds three colors of marbles: red, blue, and green.  

1. I intend to have three variables and three functions. One for adding a marble, one for removing a marble, and one for inspecting the contents of the bag. All of these will be running in a main loop.    
2. My marble variables will be something like: red_marble, blue_marble, and green_marble. These will be integer values that start at zero.  
3. The function to add could ask what color the user wants to add, then ask how many, or it could add one at a time, OR I could use my parser from my previous C program to parse the user input. I think simpler is better. I will do something more like the former. Will add to the bag with variable+=1  
4. To remove marbles, I intend to make the same function as the add function, but decrement, instead of increment.  
One thing I want to program defensively is that I don't want to be able to remove any marbles if the bag is empty  



# Reflection  
As per usual my plans change, and they change fluidly (in this case, meaning constantly). I decided to start with only one choice "marbles" instead of having three colors. I could go in and add the color functionality now, but I was trying to maintain some level of simplicity. My goal was to make this program as simple as possible, while also being as unbreakable as possible.

I think adding the three colors would increase the length of my source code by at least 20 lines.

Testing: I tested manually in all of the ways I could imagine. I planned for users inputting the wrong data types, and I had to go back and solve the problem of integer overflow when the user input or the number of marbles in the bag exceeds the max limit for the machine. And I only just realised that a 32-bit machine might not be able to handle a number as large as 2 billion. More testing is needed! (but I like having my large number)

In the end, I am happy with the functionality I have. The program prompts the user when necessary and the user is able to exit the program from within the program. I used four functions and a main function located in the driver.cpp file.


NOTE 04/08/2024: I realized that I can use string compare to compare the input. I looked up the implementation of using string compare in C++, and it is different than C.  
I found a couple good implementations using string compare which is used with the built-in C++ string library.  

One includes using getline to read the input and two variables, so "std::getline(std::cin, input2)" then compare that to the acceptable inputs using a conditional. I would also need to declare variables beforehand, input1 and input2, where input1 is the placeholder for the cin.  
I really like this solution, but I don't think it makes my code simpler.  

