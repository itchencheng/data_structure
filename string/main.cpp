/* author: chencheng
 *
 */

#include<iostream>
#include<string>

using namespace std;

int main(int argc, char **argv)
{
    /*
    std::string program = argv[0];
    std::string name = argv[1];
    std::cout << name << std::endl;
    */
    if(argc > 1)
    {
        for(int i = 0; i < argc; i++)
        {
            string name = argv[i];
            cout << name << endl;
        }
    }

    /* important functions of string class */

    return 0;
}
