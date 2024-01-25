#include<iostream>
#include<cstdlib>
#include<ctime>
class game
{
private:
int target;
int attempts;
public:
game():attempts(0)
{
    srand(time(0));
    target=1+rand()%100;
}
void display()
{
    std::cout <<"\n\t\t\t NUMBER GUESSING GAME"<<std::endl;
    std::cout<<"\n\t\t\tINSTRUCTIONS"<<std::endl;
    std::cout << "*You have to guess a number between 1 and 100."
			"\n*You'll get limited chances based on the difficulty level you choose."<<std::endl;
}
void difficultylevel()
{
    int difficulty;
    int attemptlist;
    std::cout<<"Choose Difficulty Level"<<std::endl;
    std::cout<<"press 1 for easy"<<std::endl;
    std::cout<<"press 2 for medium"<<std::endl;
    std::cout<<"press 3 for hard"<<std::endl;
    std::cin>>difficulty;
    if(difficulty != 1 && difficulty != 2 && difficulty !=3)
    {
        std::cout<<"INVALID DIFFICULTY"<<std::endl;
        std::cout<<"The Default Difficulty Is set to MEDIUM"<<std::endl;
        std::cout<<"MEDIUM"<<std::endl;
        std::cout<<"you have 7 attempts"<<std::endl;
        attemptlist=7;
    }
    else{
    switch(difficulty)
    {
        case 1:
            std::cout<<"EASY"<<std::endl;
            std::cout<<"you have 10 attempts"<<std::endl;
            attemptlist=10;
            break;
        case 2:
            std::cout<<"MEDIUM"<<std::endl;
            std::cout<<"you have 7 attempts"<<std::endl;
            attemptlist=7;
            break;
        case 3:
            std::cout<<"HARD"<<std::endl;
            std::cout<<"you have 5 attempts"<<std::endl;
            attemptlist=5;
            break;
        default:
            std::cout<<"INVALID DIFFICULTY"<<std::endl;
            std::cout<<"THANK YOU"<<std::endl;
    }
    }
    while(attempts<attemptlist)
    {
        int guess;
        std::cout<<"enter your guess (1-100)"<<std::endl;
        std::cin>>guess;
        attempts++;
        if(guess == target)
        {
            std::cout<<"CONGRATULATIONS!! you guessed the number in "<<attempts<<"attempts"<<std::endl;
            break;
        
        }
        else if(guess < target)
        {
            std::cout<<"Too low!!"<<std::endl;
            std::cout<<"try again"<<std::endl;

        }
        else
        {
            std::cout<<"Too high!!"<<std::endl;
            std::cout<<"try again"<<std::endl;

        }
    }
    if (attempts==attemptlist)
    {
        std::cout<<"Sorry you have run out of atttempts"<<std::endl;
        std::cout<<"The correct number was"<<target<<std::endl;
    }
  }
};
int main() 
{
 game g;
 g.display();
 g.difficultylevel();
 return 0;
}
