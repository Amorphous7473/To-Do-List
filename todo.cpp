#include <ios>
#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include<vector>
using namespace std;
//Take the input of the user and store it in the file
void input()
{
    cout<<"Enter the task: ";
    string n;
    getline(cin, n);
    fstream file;
    file.open("tasks.txt", ios::app);
    if(file.is_open())
    {
        file<<n<<"\n";
        file.close();
    }
}
//Display the contents of the file
void display()
{
    cout<<"Your remaining tasks are:\n";
    fstream file;
    string n;
    int i = 1;
    file.open("tasks.txt", ios::in);
    if(file.is_open())
    {
        while (getline(file, n))
        {
            cout<<i<<". "<<n<<endl;
            i++;
        }
    }
}
void del()
{
    cout<<"Select which task to delete. (Select the number)\n";
    fstream file;
    string n;
    int a;
    int i = 1;
    vector<string>tasks;
    file.open("tasks.txt", ios::in);
    if(file.is_open())
    {
        while (getline(file, n))
        {
            cout<<i<<". "<<n<<"\n";
            i++;
            tasks.push_back(n);
        }
        file.close();

        while(true)
        {
            if(cin>>a)
            {
                if(a<=0 || a>tasks.size())
                {
                    cout<<"Please enter a valid task number";
                    continue;
                }
            }
            else if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Please enter a valid number";
                continue;
            }
            break;
        }
        tasks.erase(tasks.begin()+ a-1);
        fstream file;
        file.open("tasks.txt", ios::out | ios::trunc);
        if(file.is_open())
        {
            for(string i : tasks)
            {
                file<<i<<"\n";
            }
        }
        file.close();
        cout<<"Task Removed successfully";
    }

}
int main()
{
    int n;
    //Ask if the user want to check the pending tasks or if he wants to add a new task
        cout<<"To-Do List\n\n";
        cout<<"What do you wanna do right now(Enter either 1 or 2):\n1.Add a new tasks\n2.See existing tasks\n 3. Delete existing task: ";
        while(true)
        {
            if(cin>>n)
            {
                if(n<1 || n>3)
                {
                    cout<<"Please enter either 1, 2 or 3";
                    continue;
                }
            }
            else if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Please Enter a valid number";
            }
            if(n == 1 || n == 2 || n == 3)
            {
                cin.clear();
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
    else if(n == 3)
    {
        del();
    }
}
