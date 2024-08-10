#include<iostream>
#include<vector>
using namespace std;

void greet(){
    cout<<"\t\t================\n";
    cout<<"\t\tHangman: The Game\n";
    cout<<"\t\t================\n";
    cout<<"Instructions: Save your friend from being hanged by guessing the letter in the codewords.\n";
}

void display_misses(int misses){
    if(misses==0)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"  ===========\n";
    }
    else if(misses==1)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"  ===========\n";
    }
    else if(misses==2)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"   |   |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"  ===========\n";
    }
    else if(misses==3)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"  /|   |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"  ===========\n";
    }
    else if(misses==4)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"  /|\\ |  \n";
        cout<<"       |  \n";
        cout<<"       |  \n";
        cout<<"  ===========\n";
    }
    else if(misses==5)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"  /|\\  |  \n";
        cout<<"  /     |  \n";
        cout<<"        |  \n";
        cout<<"  ===========\n";
    }
    else if (misses==6)
    {
        cout<<"   +---+  \n";
        cout<<"   |   |  \n";
        cout<<"   O   |  \n";
        cout<<"  /|\\  |  \n";
        cout<<"  / \\  |  \n";
        cout<<"        |  \n";
        cout<<"  ===========\n";
    }


}


void display_status(vector<char>incorrect, string answer)
{
    cout<<"Incorrect Guesses: \n";

    for(int i=0; i<incorrect.size(); i++)
    {
        cout<<incorrect[i]<<" ";
    }
    cout<<"\nCodeword: \n";

    for(int i=0; i<answer.length(); i++)
    {
        cout<<answer[i]<<" ";
    }
}

void end_game(string answer, string codeword)
{
    if(answer==codeword)
    {
        cout<<"You Saved the Person!! \n";
        cout<<"Congratulations! \n";
    }
    else
    {
        cout<<"The man is hanged :( \n";
    }
}

int main(){

greet();

string codeword = "hangman";
string answer= "_______";

int misses = 0;

vector<char> incorrect;
bool guess = false ;
char letter;

while(answer!=codeword && misses<7)
{
    display_misses(misses);
    display_status(incorrect, answer);

    cout<<"\n\nPlease enter your guess: ";
    cin>>letter;

    for (int i = 0; i < codeword.length(); i++)
    {
        if(letter==codeword[i])
        {
            answer[i] = letter;
            guess= true;
        }
    }
    if(guess)
    {
        cout<<"\nCorrect!\n";
    }
    else{
        cout<<"\nInCorrect! Another Portion of the man is drawn..\n";
        incorrect.push_back(letter);
        misses++;
    }
    guess=false;
}   
   end_game(answer, codeword);
    return 0;


}