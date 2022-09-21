#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("file.txt", ios::app);
    char str[20];
     
    while (1)
    {
        cout << "Enter an sting to add to dictionary\n"
             << "Enter the to stop adding in dictionary\n";
        cin >> str;

        if ((str[0] == 'X' && str[1] == '\0') || (str[0] == 'x' && str[1] == '\0'))
        {
            break;
        }
        if ((str[0] == 'a' || str[0] == 'A'))
        {
            fout << str << "\n";
        }
        else
        {
            continue;
        }
    }
    fout.close();
    ifstream fin("file.txt");
    while(1)
    {
        fin>>str;
        cout<<str<<endl;
        if(fin.eof())
        {
            break;
        }
    }
    return 0;
}