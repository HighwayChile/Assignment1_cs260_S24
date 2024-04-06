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
As per usual, my plans change, and they change fluidly (in this case, meaning constantly). I decided to start with only one choice "marbles" instead of having three colors. I could go in and add the color functionality now, but I was trying to maintain some level of simplicity. My goal was to make this program as simple as possible, while also being as unbreakable as possible.

I think adding the three colors would increase the length of my source code by at least 10 lines.



