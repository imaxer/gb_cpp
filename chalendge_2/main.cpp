#include <QApplication>
#include <QPushButton>

#include "ex4widget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();
    ex4Widget widget;
    widget.show();

    return QApplication::exec();
}
