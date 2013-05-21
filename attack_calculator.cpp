#include "attack_calculator.h"
#include "ui_attack_calculator.h"

attack_calculator::attack_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::attack_calculator)
{
    user = new PlayerShip();

    ui->setupUi(this);
    for(int i = 0; i < RWList.weapons.size(); ++i)
    {
        ui->list_rw->addItem(RWList.weapons.at(i).getName());
    }

    for(int i = 0; i < SWList.weapons.size(); ++i)
    {
        ui->list_sw->addItem(SWList.weapons.at(i).getName());
    }

    //QObject::connect(ui->action_Save, SIGNAL(changed()), user, SLOT(Save()));
}

attack_calculator::~attack_calculator()
{
    delete ui;
}

void attack_calculator::on_btn_addRW_clicked()
{
    int index = ui->list_rw->currentRow();
    ShipWeapon selected = RWList.weapons.at(index);
    for(int i = 0; i < ui->spinRW->value(); ++i)
    {
        user->addRW(selected);
    }
    this->update();

}

void attack_calculator::on_list_rw_currentRowChanged(int currentRow)
{
    int typeMax = RWList.weapons.at(currentRow).getMax();
    ui->spinRW->setMaximum(typeMax);
}



void attack_calculator::on_btn_addSW_clicked()
{
    int index = ui->list_sw->currentRow();
    ShipWeapon selected = SWList.weapons.at(index);
    for(int i = 0; i < ui->spinSW->value(); ++i)
    {
        user->addSW(selected);
    }
    this->update();
}

//Adjust max of spin-box to max of selected weapon type
void attack_calculator::on_list_sw_currentRowChanged(int currentRow)
{
    int typeMax = SWList.weapons.at(currentRow).getMax();
    ui->spinSW->setMaximum(typeMax);
}
// update ui ==========================================
void attack_calculator::update()
{
    ui->list_installed->clear();
    vector<ShipWeapon>* storage = user->getRW();
    if(storage->size() > 0)
    {
        for(int i = 0; i < storage->size(); ++i)
        {
            ui->list_installed->addItem(storage->at(i).getName());
        }
    }
    storage = user->getSW();
    if(storage->size() > 0)
    {
        for(int i = 0; i < storage->size(); ++i)
        {
            ui->list_installed->addItem(storage->at(i).getName());
        }
    }
}
// Calculate =============================================
void attack_calculator::on_btnCalculate_clicked()
{
    //Clear out old values...
    user->setInvadeAttack(0);
    user->setBonus(0);
    user->setInvadeBonus(0);
    user->setAttack(0);

    //read <ln_TacOfficers>
    double attack = 0;
    user->setAttack(ui->ln_TacOfficers->text().toDouble());

    //set bonuses...
    this->checkBonuses();
    if(ui->actionStandard->isChecked())
    {
        attack = user->getAttack();
    }
    else if(ui->actionInvasion->isChecked())
    {
        attack = user->getInvasionAttack();
    }
//    if(ui->actionNPC->isChecked())
//    {
//        attack = user->getAttack();
//    }
    else
    {
        attack = user->getAttack();
    }
    ui->ln_CalcAttack->setText(QString::number(attack));
    this->update();

}
// Remove from <list_installed> ==========================
void attack_calculator::on_btn_Remove_clicked()
{
    int index = ui->list_installed->currentRow();
    if(index < user->getRW()->size())
    {
        user->removeRW(index);
    }
    else
    {
        user->removeSW(index - (user->getRW()->size() - 1));
    }
    this->update();
}

//performs a simple boolean check of the available bonuses...
void attack_calculator::checkBonuses()
{
    if(ui->cbACF->isChecked())
    {
        user->addBonus(5);
    }
    if(ui->cbCerulean->isChecked())
    {
        user->addAttack(100);
    }
    if(ui->cbCrimsonAmp->isChecked())
    {
        user->addBonus(15);
    }
    if(ui->cbCrimsonObelisk->isChecked())
    {
        user->addBonus(10);
    }
    if(ui->cbCruxAmp->isChecked())
    {
        user->addBonus(10);
    }
    if(ui->cbDarkSmuggler->isChecked())
    {
        user->addInvadeAttack(600);
    }
    if(ui->cbNightclaw->isChecked())
    {
        user->addAttack(250);
    }
}

// Reset ===============================
void attack_calculator::on_btnReset_clicked()
{
    ui->list_installed->clear();
    ui->ln_CalcAttack->clear();
    ui->ln_TacOfficers->clear();
    ui->spinRW->setValue(1);
    ui->spinSW->setValue(1);
    user = new PlayerShip();
}

void attack_calculator::on_btnSave_clicked()
{
    user->Save();
}

void attack_calculator::on_btnLoad_clicked()
{
    user = new PlayerShip;
    user->Load();
    this->update();
}
