#include "core.h"
#include <vector>

core::core() {
}

QString core::GetL1Value(int num) {
    if (num < list1_.size())
        return list1_[num];
    else
        throw std::runtime_error("out of list");
}

QString core::GetL2Value(int num) {
    if (num < list2_.size())
        return list2_[num];
    else
        throw std::runtime_error("out of list");
}

int core::GetSizeL1() {
    return list1_.size();
}

int core::GetSizeL2() {
    return list2_.size();
}

void core::addL1Value(QString element) {
    list1_.push_back(element);
}

void core::addL2Value(QString element) {
    list2_.push_back(element);
}

void core::DeleteL1Value(int num) {
    list1_.erase(list1_.begin() + num, list1_.begin() + num + 1);
}

void core::DeleteL2Value(int num) {
    list2_.erase(list2_.begin() + num, list2_.begin() + num + 1);
}

void core::swap(int place1, int place2) {
    std::swap(list1_[place1],list2_[place2]);
}

void core::SortL1(bool reverse) {
    if (reverse)
        sort(list1_.rbegin(),list1_.rend());
    else
        sort(list1_.begin(),list1_.end());
}

void core::SortL2(bool reverse) {
    if (reverse)
        sort(list2_.rbegin(),list2_.rend());
    else
        sort(list2_.begin(),list2_.end());
}
