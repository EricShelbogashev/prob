#include "Pair.h"

template<class K, class V>
bool Pair<K, V>::operator==(const Pair<K, V> &other) const {
    return a_ == other.a_ && b_ == other.b_;
}

template<class K, class V>
bool Pair<K, V>::operator!=(const Pair<K, V> &other) const {
    return !operator==(other);
}

template<class K, class V>
Pair<K, V>::Pair(const Pair<K, V> &other) {
    a_ = new K(*(other.a_));
    b_ = new V(*(other.b_));
}

template<class K, class V>
Pair<K, V>::Pair(K a, V b) {
    a_ = new K(a);
    b_ = new V(b);
}

template<class K, class V>
Pair<K, V>::~Pair() {
    delete a_;
    delete b_;
}
