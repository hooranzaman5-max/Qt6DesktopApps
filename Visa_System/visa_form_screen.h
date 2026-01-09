#ifndef VISA_FORM_SCREEN_H
#define VISA_FORM_SCREEN_H

#include <QDialog>

namespace Ui {
class Visa_Form_Screen;
}

class Visa_Form_Screen : public QDialog
{
    Q_OBJECT

public:
    explicit Visa_Form_Screen(QWidget *parent = nullptr);
    ~Visa_Form_Screen();

private slots:
    void submit_button();

private:
    Ui::Visa_Form_Screen *ui;
};

#endif // VISA_FORM_SCREEN_H
