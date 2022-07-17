#include <iostream>
#include <vector>
using namespace std;

vector<string> Ways(int n)
{

    if(n==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }else if(n<0){
        vector<string> bres;
        return bres;
    }

    vector<string> paths1 = Ways(n - 1);
    vector<string> paths2 = Ways(n - 2);
    vector<string> paths3 = Ways(n - 3);

    vector<string> paths;

    for (string path : paths1)
    {
        paths.push_back("1" + path);
    }
    for (string path : paths2)
    {
        paths.push_back("2" + path);
    }
    for (string path : paths3)
    {
        paths.push_back("3" + path);
    }
    return paths;
}
int main()
{
    int stairs;
    cout << "Enter No. of Stairs : ";
    cin >> stairs;
    vector<string> finalPaths = Ways(stairs);
    for(int i=0;i<finalPaths.size();i++){
        cout<<finalPaths[i]<<endl;
    }
    return 0;
}