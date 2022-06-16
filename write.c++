
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string output;
int main()
{
    fstream sonnets, reprint;
    sonnets.open(R"(C:\Users\NEAK\Documents\Speare\sonnets_file.txt)", ios::in);
    reprint.open(R"(C:\Users\NEAK\Documents\Speare\reprint_file.txt)", ios::out);
    int count = 1;
    string line;
    if(sonnets.is_open())
    {
        while(getline(sonnets, line ))
        {
            if(reprint.is_open())
            {
                reprint << count << ". " << line << "\n";
                count += 1;
            }

        }
    }
    sonnets.close();

    return 0;
}
