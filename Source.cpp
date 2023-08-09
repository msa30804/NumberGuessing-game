#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class guessgame
{
private:
    int attempts = 3;
    int no,  guess;

public:
    guessgame()
    {
        cout << "\t\t\t\t\t\t<-------THREE Attempts--------->" << endl;
        srand(time(NULL));
        no = (rand() % 10) + 1;
        cout << "This is the number to be guessed: " << "#" << endl;
        input();
    }
    void input()
    {
       
        cout << " hey Guess The number : "; cin >> guess;
    }
    void play()
    {
        bool correct = false;
        while (attempts > 0 && !correct)
        {
            if (guess == no)
            {
                cout << "\t\t\t\t\tWelldone! you have guessed right " << endl;
                break;
            }
            else if (guess < no)
            {
                cout << "\tYour Guess is Too low " << endl;;
            }
            else if (guess > no)
            {
                cout << "\tYour Guess is too high " << endl;
            }
            if (!correct)
            {

                input();
            }
            attempts--;
            if (attempts == 0)
            {
                cout << " \t\t\t\t\t\t<---You Lose---> " << endl;
            }
        }
    }
};

int main()
{
    guessgame g1;
   
    g1.play();
}
