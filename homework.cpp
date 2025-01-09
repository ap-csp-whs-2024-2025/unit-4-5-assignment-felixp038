#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<double> decimals = {3.14, 1.59, 2.65, 1.23, 2.08};
    std::vector<std::string> words = {"hello", "darkness", "friend"};
    std::cout << numbers[0] << ", " <<  numbers[2] << ", " << numbers[4] << std::endl;
    std::cout << words[0] << std::endl;
    words.push_back("bada bing");
    displayList(words);
    decimals.pop_back();
    displayList(decimals);

    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}