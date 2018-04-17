#include<iostream>
#include"csv_reader.h"

int helpInfo()
{
    std::cout<< "# this program is used for CSV reading" << std::endl;
    std::cout<< "# used STL string, cstring "<<std::endl;
}


int main()
{
    helpInfo();

    CSVReader reader("test.csv");

    return 0;
}
