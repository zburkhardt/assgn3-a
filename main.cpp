/* INSERT HEADER INFO
INSERT HEADER INFO
INSERT HEADER INFO
INSERT HEADER INFO */

#include <iostream> // for input-output stream operations
#include <iomanip> // for providing parametric manipulators operations
#include <limits> // for providing elements with the characteristics of arithmetic types
using std::cout; // qualifies cout element in standard namespace; for displaying console output
using std::cin; // qualifies cin element in standard namespace; for accepting input
using std::endl; // qualifies endl element in standard namespace; for ending line

using namespace std;

int main()
{
    bool loopFlag = false;

    do // post test loop
    {
        int width = 0, height = 0;

        cout << "Enter the width of the rectangle: "; // output stream a message
        cin >> width; //input stream a variable
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        cout << endl;

        // Do not accept a number less than 2 for the
        // starting size of the population
        if ((cin.fail()) || width < 2) // decision construct tests 2 conditions
        {
            cout << "The starting number of organisms " // output stream a message
                 << "must be a valid number that is at least 2.\n"; // continues message on same line
            cin.clear(); // clear error flag for cin
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignores input in buffer until the line break
        }
        else // runs if above "if" statement is false
        {
            for (int heightCounter = 0; heightCounter < height; ++heightCounter) // change Boolean value to end this loop (good input!)
            {
                for (int widthCounter = 0; widthCounter < width; ++widthCounter) // change Boolean value to end this loop (good input!)
                {
                    cout << "X";
                }
                cout << endl;
            }
        }

        do
        {
            cout << endl;
            cout << "Would you like to create another rectangle? (Y/N): ";
            cin >> loopFlag;
        } while ();
    } while (loopFlag); // loop control expression is a Boolean value

    return 0;
}
