#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addelement.h"
#include "core.h"

core L;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    Show();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::Show() {
    ui->list1->clear();
    ui->list2->clear();
    for (int i = 0; i < L.GetSizeL1(); i++)
        ui->list1->addItem(L.GetL1Value(i));

    for (int i = 0; i < L.GetSizeL2(); i++)
        ui->list2->addItem(L.GetL2Value(i));

}

void MainWindow::on_addElement_clicked() {
    addElement addWindow;
    addWindow.SetCore(L);
    addWindow.setModal(true);
    addWindow.exec();
    Show();
}

void MainWindow::on_SortList1_clicked() {
    L.SortL1();
    Show();
}

void MainWindow::on_SortList2_clicked() {
    L.SortL2();
    Show();
}

void MainWindow::on_ReverseSortList1_clicked() {
    L.SortL1(true);
    Show();
}

void MainWindow::on_ReverseSortList2_clicked() {
    L.SortL2(true);
    Show();
}

void MainWindow::on_MoveL1L2_clicked() {
    if (ui->list1->currentIndex().isValid()) {
        L.addL2Value(ui->list1->currentItem()->text());
        L.DeleteL1Value(ui->list1->currentIndex().row());
        Show();
    }
}

void MainWindow::on_MoveL2L1_clicked() {
    if (ui->list2->currentIndex().isValid()) {
        L.addL1Value(ui->list2->currentItem()->text());
        L.DeleteL2Value(ui->list2->currentIndex().row());
        Show();
    }
}


void MainWindow::on_DeleteElement_clicked() {
    if(ui->list1->currentIndex().isValid()) {
        L.DeleteL1Value(ui->list1->currentIndex().row());
    }
    if(ui->list2->currentIndex().isValid()) {
        L.DeleteL2Value(ui->list2->currentIndex().row());
    }
    Show();
}
