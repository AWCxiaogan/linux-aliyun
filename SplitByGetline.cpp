#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s,temp;
    getline(cin,s,'\n');
    stringstream ss(s);
    while(getline(ss,temp,','))
        cout<<temp<<endl;
    return 0;
}
