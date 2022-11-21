#include <iostream>
#include <vector>

int count_items (std::vector <int> *arr) //returning the number of elements in vector using recursion way
{
    if (arr->empty())
        return 0;
    arr->pop_back();
    return 1+ count_items(arr);
}

void main()
{
    std::vector<int> array = {1, 2, 3, 4, 5,6,7,8,9,10};
    std::cout << count_items(&array) <<std::endl;
}
