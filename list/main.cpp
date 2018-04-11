
#include<iostream>
#include<vector>

int main(int argc, char** argv)
{
    for(int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
    std::cout << "using stl vector" << std::endl;
    
    /* vector: a class under namespace std
        if delete std::, program goes wrong
    */    
    std::vector<int> v;
    
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    for(int i = 0; i < 10; i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}
