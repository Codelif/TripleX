#include <iostream> //Preprocessor Directive
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    //Expression Statements
    std::cout << "You are a secret agent breaking into a level " << Difficulty << " secure server room";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //Declaration Statements
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Expression Statements;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        return true;
    }else{
        return false;
    }
}

int main() //Main Function
{
    srand(time(NULL));

    int bLevelDifficulty = 1;
    const int MaxDifficulty = 7;

    while (bLevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(bLevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards any buffer

        if (bLevelComplete)
        {
            ++bLevelDifficulty;
            std::cout << "You Win!\n" << "Moving to Next Level\n\n";
        }else {
            std::cout << "You Lose!\n" << "Retrying\n\n";
        }
        
    }

    std::cout << "You have beaten the game!" << std::endl;
    return 0; // Return Statement
}