/*
    COPYRIGHT (C) 2018 Zach Burkhardt (zmb14) All rights reserved.
    CSI Assignment 2-A
    Author. Zach Burkhardt
            zmb14@zips.uakron.edu
    Version. 1.00 09.24.2018
    Purpose: This program will check class sizes to verify if they pass fire code requirements.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool programLoopFlag = false; // Program repeat flag

    do
    {
        int width = 0, height = 0;
        bool inputCheck = true;

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
                inputCheck = true;
            }
            else
            {
                inputCheck = false;
            }
        } while (inputCheck);


        do
        {
            // User enters height
            cout << "Enter the height of the rectangle (1-75): ";
            cin >> height;
            cout << endl;

            // Check if width input is valid and that input is > 0 and <= 75
            if ((cin.fail()) || width <= 0 || width > 75)
            {
                cout << "*** The input is invalid. Please try again. ***" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                inputCheck = true;
            }
            else
            {
                inputCheck = false;
            }
        } while (inputCheck);


        // Outputs the rectangle
        for (int heightCounter = 0; heightCounter < height; ++heightCounter)
        {
            for (int widthCounter = 0; widthCounter < width; ++widthCounter)
            {
                cout << "X";
            }
            cout << endl;
        }


        // Checks if user wants to run program again
        do
        {
            cout << "Would you like to create another rectangle? (Y/N): ";
            char repeat;
            cin >> repeat;
            cout << endl;

            // Checks if input is valid
            if ((repeat == 'y') || (repeat == 'Y'))
            {
                programLoopFlag = true;
                inputCheck = false;
            }
            else if ((repeat == 'n') || (repeat == 'N'))
            {
                programLoopFlag = false;
                inputCheck = false;
            }
            else
            {
                cout << "*** The input is invalid. Please try again. ***" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                inputCheck = true;
            }
        } while (inputCheck);

    } while (programLoopFlag);

    return 0;
}
