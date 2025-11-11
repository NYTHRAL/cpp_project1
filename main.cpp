#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstdlib>

using namespace std;

void printMainMenu()
{
    cout << "HELLO!" << endl;
    cout << "Welcome to the Dahua's Program" << endl;
    cout << "Please enter your name:" << endl;
    cout << endl;
}

void printAfterName()
{
    string name;
    cin  >> name;
    cout << "Nice to meet you " << name << endl;
    cout << "My name is Dino, i am a personal helper in this programm." << endl;
    cout << "Can i help you?" << endl;
}

void printAnswerYes()
{
    cout << "Great!" << endl;
    cout << "I can help you" << endl;
    cout << "Please choice the problem: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "1. I cant find the commands." << endl;
    cout << "2. I cant open commands." << endl;
    cout << "3. I cant close commands line." << endl;
    cout << "4. Commands is not working" << endl;
    cout << "------------------------------------------------" << endl;
}

void printAnswerNo()
{
    cout << "Okay, if you need help. say with me:)" << endl;
}

void problem1()
{
    cout << "Okay, enter command 'command list' and command list is opened!" << endl;
    cout << "This is commands list`" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "|                     COMMAND LIST                       |" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "        command list - open command lsit                  " << endl;
    cout << "        command exit - close command lsit                 " << endl;
    cout << "        problem list - open problem list                  " << endl;
    cout << "        problem exit - close problem list                 " << endl;
    cout << "        problem detected - open input menu for problem    " << endl;
    cout << "        detected close - cloase input menu for problem    " << endl;
    cout << "----------------------------------------------------------" << endl;
}

void problem2()
{
    cout << "Sorry, its not working, our developers is workin for this probmel" << endl;
}

void problem3()
{
    cout << "Okay, pls restart programm." << endl;
}

void problem4()
{
    cout << "Commands is not working, with is not have code, our developers is workin for this probmel" << endl;
}

void CommandList()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "|                     COMMAND LIST                       |" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "        command list - open command lsit                  " << endl;
    cout << "        command exit - close command lsit                 " << endl;
    cout << "        problem list - open problem list                  " << endl;
    cout << "        problem exit - close problem list                 " << endl;
    cout << "        problem detected - open input menu for problem    " << endl;
    cout << "        detected close - cloase input menu for problem    " << endl;
    cout << "----------------------------------------------------------" << endl;
}

int main() {

    int proplemnum;

    string answer;
    string command;
    string probleminput;


    printMainMenu();


    printAfterName();
    cin >> answer;

    while (true) {

    if (answer == "yes")
    {
        printAnswerYes();

        cin >> proplemnum;
        if (proplemnum == 1)
        {
            problem1();
        } else if (proplemnum == 2)
        {
            problem2();
        } else if (proplemnum == 3)
        {
            problem3();
        } else if (proplemnum == 4)
        {
            problem4();
        }

    } else if (answer == "no") {
        printAnswerNo();
    }

    if (command == "command list")
    {
        CommandList();
        cout << "Enter command: " << endl;
        cin >> command;
    } else if (command == "close command list")
    {
        system("cls");
        cout << "Enter command: " << endl;
        cin >> command;
    } else if (command == "problem list")
    {
        problem1();
        problem2();
        problem3();
        problem4();
        cout << "Enter command: " << endl;
        cin >> command;
    } else if (command == "problem exit ")
    {
        system("cls");
        cout << "Enter command: " << endl;
        cin >> command;
    } else if (command == "problem detected ")
    {
        cout << "Please enter problem: ";
        cin >> probleminput;
        cout << "Thank you for noticing the problem, we will try to solve is.";
        system("cls");
        cout << "Enter command: " << endl;
        cin >> command;
    } else if (command == "detected close")
    {
        system("cls");
        cout << "Enter command: " << endl;
        cin >> command;
    }


}
    return 0;
}