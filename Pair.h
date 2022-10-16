#ifndef LINKEDHASHSET_PAIR_H
#define LINKEDHASHSET_PAIR_H

#include <cstdio>
#include "Student.h"
#include <iostream>
#include <list>

template<class K, class V>
class Pair {
public:
    explicit Pair(K a, V b);

    Pair(const Pair<K, V> &other);

    ~Pair();

    bool operator==(const Pair<K, V> &other) const;

    bool operator!=(const Pair<K, V> &other) const;

    K *a_;
    V *b_;
};


template
class Pair<std::list<std::string *>::iterator, std::string>;


template
class Pair<int, std::string>;


#endif //LINKEDHASHSET_PAIR_H
