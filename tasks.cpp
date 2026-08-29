#include <ios>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Display the contents of the file
int main()
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
