#ifndef ATTACK_CALCULATOR_H
#define ATTACK_CALCULATOR_H

#include <QMainWindow>
#include <playership.h>
#include <researchlist.h>
#include <speciallist.h>

namespace Ui {
class attack_calculator;
}

class attack_calculator : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit attack_calculator(QWidget *parent = 0);
    ~attack_calculator();
    
private slots:
    void on_btn_addRW_clicked();

    void on_btnReset_clicked();

    void on_list_rw_currentRowChanged(int currentRow);

    void on_list_sw_currentRowChanged(int currentRow);

    void on_btn_addSW_clicked();

    void on_btnCalculate_clicked();

    void on_btn_Remove_clicked();

    void checkBonuses();

    void on_btnSave_clicked();

    void on_btnLoad_clicked();

private:
    PlayerShip * user;
    SpecialList SWList;
    ResearchList RWList;

    Ui::attack_calculator *ui;

    void update();
};

#endif // ATTACK_CALCULATOR_H
