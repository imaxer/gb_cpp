/*
 * Created by Maksim Paramonov on 10.02.2021.
*/
#include <QString>

#include "ex4widget.h"
#include "ui_ex4Widget.h"

ex4Widget::ex4Widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::ex4Widget) {
    ui->setupUi(this);

    QObject::connect(ui->spinBox, &QSpinBox::valueChanged, this, &ex4Widget::yearChanged);

    this->yearChanged(ui->spinBox->value());
}

ex4Widget::~ex4Widget() {
    delete ui;
}

void ex4Widget::yearChanged(int year) {
    QString templateStr = "Год%является високосным";
    ui->resultLabel->setText(templateStr.replace('%', ex4Widget::isLeapYear(year) ? " " : " не "));
}

bool ex4Widget::isLeapYear(unsigned int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    }
    return false;
}
