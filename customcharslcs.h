#ifndef CUSTOMCHARSLCS_H
#define CUSTOMCHARSLCS_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class CustomCharsLcs; }
QT_END_NAMESPACE

class CustomCharsLcs : public QWidget
{
    Q_OBJECT

public:
    CustomCharsLcs(QWidget *parent = nullptr);
    ~CustomCharsLcs();

private:
    Ui::CustomCharsLcs *ui;
    bool* result;
    QString name;

    void finalization();

private slots:
    void on_btn_clicked(bool state);
    void on_btn_clear_clicked();
    void on_le_name_textChanged(const QString &arg1);
    void on_btn_save_clicked();
};
#endif // CUSTOMCHARSLCS_H
