#ifndef ADDENTRY_H
#define ADDENTRY_H

#include <QDialog>
#include <QLinkedList>

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addEntry(QWidget *parent = 0);
    ~addEntry();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addEntry *ui;
};

#endif // ADDENTRY_H
