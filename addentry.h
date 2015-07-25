#ifndef ADDENTRY_H
#define ADDENTRY_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <QFile>
#include <QLinkedList>
#include "entry.h"

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addEntry(QWidget *parent = 0);
    QLinkedList<Entry> list;
    ~addEntry();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addEntry *ui;
    QString filename;

};

#endif // ADDENTRY_H
