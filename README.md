# Assignment1_cs260_S24
Assignment 1 for Spring 2024, CS260, LBCC

# Assignment 1 (Bag of Marbles):  

    In your GitHub repo, create a folder for assignment1 and a README file in that folder,  

    In your README file (feel free to include labeled drawings!) explain what a program could do to model a bag of marbles, with a list of properties (variables) and behaviors (methods), including at least something like the following:  

        some way of representing marbles (what makes up a marble in this program?),    

        a way to add new marbles into the bag (how do we interact with marbles and add them into the bag?),  

        a way to remove a marble out of the bag (perhaps a random marble taken out of the bag?),  

        a few ways that we could use to show that our implementation should be working correctly (tests),  
        (perhaps you start with an empty bag, put a marble in with some known values, then you pull the marble out and verify that it has the same values, perhaps you try to pull a marble out of an empty bag, perhaps you try to add 3 billion marbles... maybe you do not have to go that high or maybe your solution is smart enough to deal with this 🙂)  

    Attempt to implement your bag of marbles in a program as simply as possible (Note: you can fail this implementation and still get full points on the assignment based on design, documentation, and whatever your attempt at implementation is)!  

    test our implementation in a driver file with our tests (a driver file is just the file we would use to launch our program)
    Note: This assignment is intended to get you thinking about how simple your implementations could be, to make sure your programming environment is set up properly, and to get you thinking about how we store data in different structures.  

    Once you have implemented and tested your code, add to the README file what line(s) of code or inputs and outputs show your work meeting each of the above requirements (or better, include a small screen snip of where it meets the requirement!).  

    Submit a link to your repo to Moodle as a reminder to us to grade your work 🙂!   


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



