#include "customcharslcs.h"
#include "ui_customcharslcs.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QException>
#include <QFile>
#include <QDebug>

CustomCharsLcs::CustomCharsLcs(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomCharsLcs)
{
    ui->setupUi(this);

    result = new bool[40];
    for (int i = 0 ; i < 40; ++i) {
        result[i] = false;
    } name = "customCharacter";

    finalization();

    connect(ui->btn1, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn2, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn3, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn4, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn5, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn6, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn7, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn8, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn9, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn10, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn11, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn12, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn13, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn14, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn15, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn16, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn17, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn18, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn19, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn20, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn21, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn22, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn23, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn24, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn25, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn26, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn27, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn28, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn29, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn30, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn31, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn32, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn33, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn34, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn35, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn36, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn37, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn38, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn39, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);
    connect(ui->btn40, &QPushButton::clicked, this, &CustomCharsLcs::on_btn_clicked);

}

CustomCharsLcs::~CustomCharsLcs()
{
//    delete result;
    delete ui;
}

void CustomCharsLcs::finalization()
{
    int col = 5;
    QString code = "byte " + name + "[] = {";
    for (int i = 0 ; i < 40; ++i) {
        if (!(i % col)) {
            if (!i) {
                code += "\n\tB";
            } else {
                code += ",\n\tB";
            }
        }
        if (result[i]) {
            code += "1";
        } else {
            code += "0";
        }
    } code += "\n};";
    ui->textBrowser->clear();
    ui->textBrowser->setPlainText(code);
}

void CustomCharsLcs::on_btn_clicked(bool state)
{
    QString number = qobject_cast<QPushButton*>(sender())->objectName().remove(0, 3);

    int index = number.toInt() - 1;

    result[index] = state;

    finalization();
}

void CustomCharsLcs::on_btn_clear_clicked()
{
    ui->btn1->setChecked(false);
    ui->btn2->setChecked(false);
    ui->btn3->setChecked(false);
    ui->btn4->setChecked(false);
    ui->btn5->setChecked(false);
    ui->btn6->setChecked(false);
    ui->btn7->setChecked(false);
    ui->btn8->setChecked(false);
    ui->btn9->setChecked(false);
    ui->btn10->setChecked(false);
    ui->btn11->setChecked(false);
    ui->btn12->setChecked(false);
    ui->btn13->setChecked(false);
    ui->btn14->setChecked(false);
    ui->btn15->setChecked(false);
    ui->btn16->setChecked(false);
    ui->btn17->setChecked(false);
    ui->btn18->setChecked(false);
    ui->btn19->setChecked(false);
    ui->btn20->setChecked(false);
    ui->btn21->setChecked(false);
    ui->btn22->setChecked(false);
    ui->btn23->setChecked(false);
    ui->btn24->setChecked(false);
    ui->btn25->setChecked(false);
    ui->btn26->setChecked(false);
    ui->btn27->setChecked(false);
    ui->btn28->setChecked(false);
    ui->btn29->setChecked(false);
    ui->btn30->setChecked(false);
    ui->btn31->setChecked(false);
    ui->btn32->setChecked(false);
    ui->btn33->setChecked(false);
    ui->btn34->setChecked(false);
    ui->btn35->setChecked(false);
    ui->btn36->setChecked(false);
    ui->btn37->setChecked(false);
    ui->btn38->setChecked(false);
    ui->btn39->setChecked(false);
    ui->btn40->setChecked(false);

    for (int i = 0 ; i < 40; ++i) {
        result[i] = false;
    }

    finalization();
}

void CustomCharsLcs::on_le_name_textChanged(const QString &arg1)
{
    name = arg1;
    finalization();
}


void CustomCharsLcs::on_btn_save_clicked()
{
    if (name.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Name is empty");
        ui->le_name->setFocus();
    } else {
        QString path = QFileDialog::getSaveFileName(this, tr("Save"), "", ".h (*.h)");

        try {
            QFile f;
            f.setFileName(path);
            f.open(QIODevice::WriteOnly);
            QString code = ui->textBrowser->toPlainText();
            f.write(code.toStdString().c_str());
            f.close();
        } catch (...)
        {
            QMessageBox::critical(this, "Error", "Unknow Error");
        }
    }
}

