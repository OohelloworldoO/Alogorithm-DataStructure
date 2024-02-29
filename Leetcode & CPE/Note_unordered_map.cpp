/*
map存放的資料是ordered 對應的結構是red-black-tree
unordered_map對應hash table=>特點是搜尋效率高
*/

// unordered_map initial write:

std::unordered_map<std::string, int> umap =
    {
        {"Tom", 1},
        {"Ann", 4},
        {"Jack", 2}};

// unordered_map 容器裡插入元素與存取元素 方法1.
std::unordered_map<std::string, int> umap;
// umap["John"] = 3;

// 方法2. 使用 umap.insert() 成員函式來插入元素，
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> umap;
    umap.insert(std::pair<std::string, int>("John", 3));

    std::pair<std::unordered_map<std::string, int>::iterator, bool> retPair;
    retPair = umap.insert(std::pair<std::string, int>("John", 3));

    if (retPair.second == true)
        std::cout << "Insert Successfully\n";
    else
        std::cout << "Insert Failure\n";

    return 0;
}