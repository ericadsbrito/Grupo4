#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString logica = ui -> lineEdit -> text();
    ui -> textEdit -> insertPlainText(logica);
    ui -> textEdit -> insertPlainText(QString(QChar(0x2028)));
}
