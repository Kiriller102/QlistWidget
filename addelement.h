#ifndef ADDELEMENT_H
#define ADDELEMENT_H

#include <QDialog>
#include "mainwindow.h"
#include "core.h"

namespace Ui {
class addElement;
}

class addElement : public QDialog {
    Q_OBJECT

public:
    explicit addElement(QWidget *parent = nullptr);
    ~addElement();

    void SetCore(core &);

private slots:
    void on_addL1_clicked();

    void on_addL2_clicked();

    void on_cancel_clicked();

private:
    Ui::addElement *ui;
};

#endif // ADDELEMENT_H
