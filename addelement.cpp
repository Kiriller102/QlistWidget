#include "addelement.h"
#include "ui_addelement.h"
#include "core.h"

core *pList = nullptr;

addElement::addElement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addElement) {
    ui->setupUi(this);
}

addElement::~addElement() {
    delete ui;
}

void addElement::SetCore(core &List) {
    pList = &List;
}


void addElement::on_addL1_clicked() {
    QString str = ui->Enter->text();
    if (!str.isEmpty())
        pList->addL1Value(str);
    this->close();
}

void addElement::on_addL2_clicked() {
    QString str = ui->Enter->text();
    if (!str.isEmpty())
        pList->addL2Value(str);
    this->close();
}


void addElement::on_cancel_clicked() {
    this->close();
}

