#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

void PrintIntroduction(int Difficulty)
{
    // printing the games introduction
    cout << "pc<< You are an alien attempting to break into my highly expensive personal computer\n";
    cout << "pc<< Enter the correct code if you wish to accomplish this...\n";
    cout << "pc<< *Note : The security code strength is currently at level " << Difficulty << ".\n";
}


bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    // variable declarations
    const int CodeA = rand() % 10;
    const int CodeB = rand() % 10;
    const int CodeC = rand() % 10;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print out sum and product to the terminal, game hints
    cout << "pc<< Three integers compose my secret code\n"; 
    cout << "pc<< The sum of the three integers is " << CodeSum << ".\n";
    cout << "pc<< The product of the three integers is " << CodeProduct << ".\n";

    // players input
    int GuessA, GuessB, GuessC;
    cout << "pc<< Enter your three digit guess code\n";
    cin >> GuessA >> GuessB >> GuessC;
    cout << "\npc<< You entered: " << GuessA << GuessB << GuessC;

    // sum and product of players guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "pc<< Nice guessing! Keep going!\n";
        return true;
    }
    else
    {
        cout << "\npc<< Invalid code. Try again!\n\n\n";
        return false;
    }

}

int main()
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 7;
    while(LevelDifficulty <= MaxDifficulty) // loop ends at maximum level completion
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // clear any errors
        cin.ignore(); // discards the buffer

        if (bLevelComplete)
            // increase level difficulty
        {
            LevelDifficulty++;
        }
    }
    cout << "pc<< Sweet, you have completed all levels! You now have access to my personal computer.\n";
    return 0;
}