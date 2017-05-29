#include <iostream>
#include <string> 
#include <vector>

double calc(double);
int count(const std::string &, char);
int sum(std::vector<int>::iterator, std::vector<int>::iterator, int);
std::vector<int> vec(10);

int main(void)
{
    //double da = calc(23.4, 55.1); // to many arguments
    int ia = count("abcd", 'a'); //legal
    double dd = calc(44);   //legal
    int ib = sum(vec.begin(), vec.end(), 3.8); //legal
}

int sum(std::vector<int>::iterator, std::vector<int>::iterator, int)
{
    return 8;
}

double calc(double){
    return 9.0;
}

int count(const std::string &r, char c){
    return 0;
}