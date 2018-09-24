/*
    COPYRIGHT (C) 2018 Zach Burkhardt (zmb14) All rights reserved.
    CSI Assignment 3-A
    Author. Zach Burkhardt
            zmb14@zips.uakron.edu
    Version. 1.00 09.24.2018
    Purpose: This program will display a rectangle based on user-inputted dimensions.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool programLoop = false; // Flag to run program again

    do
    {
        int width = 0, height = 0;
        bool inputInvalid = true;

        do
        {
            // User enters width
            cout << "Enter the width of the rectangle (1-75): ";
            cin >> width;
            cout << endl;

            // Check if width input is valid and that input is > 0 and <= 75
            if ((cin.fail()) || width <= 0 || width > 75)
            {
                cout << "*** The input is invalid. Please try again. ***" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                inputInvalid = true;
            }
            else
            {
                inputInvalid = false;
            }
        } while (inputInvalid);


        do
        {
            // User enters height
            cout << "Enter the height of the rectangle (1-75): ";
            cin >> height;
            cout << endl;

            // Check if height input is valid and that input is > 0 and <= 75
            if ((cin.fail()) || height <= 0 || height > 75)
            {
                cout << "*** The input is invalid. Please try again. ***" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                inputInvalid = true;
            }
            else
            {
                inputInvalid = false;
            }
        } while (inputInvalid);


        // Prints out rectangle to console
        for (int heightCounter = 0; heightCounter < height; ++heightCounter)
        {
            for (int widthCounter = 0; widthCounter < width; ++widthCounter)
            {
                cout << "X";
            }
            cout << endl;
        }
        cout << endl;


        // Checks if user wants to run program again
        do
        {
            cout << "Would you like to create another rectangle? (Y/N): ";
            char repeat;
            cin >> repeat;
            cout << endl;

            // Checks if input is valid
            if ((repeat == 'Y') || (repeat == 'y'))
            {
                programLoop = true;
                inputInvalid = false;
            }
            else if ((repeat == 'N') || (repeat == 'n'))
            {
                programLoop = false;
                inputInvalid = false;
            }
            else
            {
                cout << "*** The input is invalid. Please try again. ***" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                inputInvalid = true;
            }
        } while (inputInvalid);

    } while (programLoop);

    return 0;
}
