/*
 * Created by Maksim Paramonov on 10.02.2021.
*/

#ifndef CPP_EX4WIDGET_H
#define CPP_EX4WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ex4Widget; }
QT_END_NAMESPACE

class ex4Widget : public QWidget {
Q_OBJECT

public:
    explicit ex4Widget(QWidget *parent = nullptr);

    ~ex4Widget() override;

private:
    static bool isLeapYear(unsigned int year);

private slots:
    void yearChanged(int year);

private:
    Ui::ex4Widget *ui;
};

#endif //CPP_EX4WIDGET_H
