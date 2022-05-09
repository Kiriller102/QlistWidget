#ifndef CORE_H
#define CORE_H
#include <vector>
#include <QString>
#include <QListWidget>

class core {
public:
    core();
    QString GetL1Value(int);
    QString GetL2Value(int);
    int GetSizeL1();
    int GetSizeL2();
    void addL1Value(QString);
    void addL2Value(QString);
    void DeleteL1Value(int);
    void DeleteL2Value(int);
    void swap(int, int);
    void SortL1(bool reverse = false);
    void SortL2(bool reverse = false);

private:
    std::vector<QString> list1_;
    std::vector<QString> list2_;
};

#endif // CORE_H
