#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Show();

private slots:
    void on_addElement_clicked();

    void on_SortList1_clicked();

    void on_SortList2_clicked();

    void on_MoveL1L2_clicked();

    void on_MoveL2L1_clicked();

    void on_DeleteElement_clicked();

    void on_ReverseSortList1_clicked();

    void on_ReverseSortList2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
