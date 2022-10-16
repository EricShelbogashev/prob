#include <iostream>
#include <list>
#include "Pair.h"
#include <algorithm>

std::string getRandStr() {
    std::string s = "";
    for (int i = 0; i < 5; ++i) {
        s += '0' + std::rand() % 10;
    }
    return s;
}

void printList(std::list<std::string *> &list) {
    std::cout << "History:" << std::endl;
    for (std::string * s: list) {
        std::cout << *s <<"[" << s << "] > ";
    }
    std::cout << std::endl;
}

void printStringList(std::list<Pair<int, std::string>> &list) {
    std::cout << "Set:" << std::endl;
    for (auto s: list) {
        std::cout << *(s.b_) << "[" << std::addressof(s.b_) << "] > ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<std::string *> list;
    std::list<Pair<int, std::string>> stringList;

    printList(list);
    for (int i = 0; i < 6; ++i) {
        list.push_back(nullptr);
        stringList.emplace_back(Pair<int, std::string>(1, getRandStr()));
        std::string * pointer = stringList.back().b_;
        list.back() = pointer;
        printList(list);
        printStringList(stringList);
        std::cout << std::endl;
    }
    return 0;
}