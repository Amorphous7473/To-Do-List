#include <ios>
#include <iostream>
#include <fstream>
#include <limits>
#include <string>
using namespace std;
//Take the input of the user and store it in the file
void input()
{
    cout<<"Enter the task";
    string n;
    getline(cin, n);
    fstream file;
    file.open("tasks.txt", ios::app);
    if(file.is_open())
    {
        file<<n;
        file.close();
    }
}
//Display the contents of the file
void display()
{

}
int main()
{
    int n;
    //Ask if the user want to check the pending tasks or if he wants to add a new task
        cout<<"To-Do List\n\n";
        cout<<"What do you wanna do right now(Enter either 1 or 2):\n1.Add a new tasks\n2.See existing tasks: ";
        while(true)
        {
            if(cin>>n)
            {
                if(n<1 || n>2)
                {
                    cout<<"Please enter either 1 or 2";
                }
            }
            else if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Please Enter a valid number";
            }
            if(n == 1 || n == 2)
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }
    //Input the new tasks
    if(n == 1)
    {
       input();
    }
    else if(n == 2)
    {
        display();
    }

    //Display the Tasks
}
