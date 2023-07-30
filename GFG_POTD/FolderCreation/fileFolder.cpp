#include <iostream>
#include <direct.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    for (int i = 17; i <= 30; i++)
    {
        string path1 = "D:/Learning/Practice/GFG_POTD/POTD_";
        string path2 = std::to_string(i);
        string path3 = "_July_2023";
        string finalPathFolder = path1 + path2 + path3;
        const char *mm = finalPathFolder.c_str();

        cout << finalPathFolder << endl;
        if (mkdir(mm) == -1)
            cerr << " Error : " /*<< strerror(errno) */ << endl;

        else
        {
            ofstream file_, file_2;
            string finalPathFile = path1 + path2 + path3 + "/POTD_" + path2 + path3 + ".cpp";
            cout << finalPathFile << endl;
            string finalPathFile2 = path1 + path2 + path3 + "/POTD_" + path2 + path3 + "_Question.txt";
            cout << finalPathFile2 << endl;
            const char *f1 = finalPathFile.c_str();
            const char *f2 = finalPathFile2.c_str();
            cout << f1 << endl;
            // const char *f = ().c_str();
            file_.open(f1);
            file_2.open(f2);
            file_.close();
            file_2.close();
            // std::cin.get();
            cout << "Directory & File created";
        }
    }
}