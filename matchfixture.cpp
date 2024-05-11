#include "matchfixture.h"
#include "ui_matchfixture.h"

MatchFixture::MatchFixture(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MatchFixture)
{
    ui->setupUi(this);
    ptrDateSelected = new DateSelected();
    ptrAddMatchFixture = new AddMatchFixture();
    ptrRemoveMatchFixture = new RemoveMatchFixture();
}

MatchFixture::~MatchFixture()
{
    delete ui;
    delete ptrDateSelected;
    delete ptrAddMatchFixture;
    delete ptrRemoveMatchFixture;
}






void MatchFixture::on_addMatchFixtureButton_clicked()
{
    ptrAddMatchFixture -> setWindowTitle("Add Match Fixture");
    ptrAddMatchFixture -> show();
}


void MatchFixture::on_removeMatchFixtureButton_clicked()
{
    ptrRemoveMatchFixture -> setWindowTitle("Remove Match Fixture");
    ptrRemoveMatchFixture -> show();
}



void MatchFixture::on_calendarMatchFixture_clicked(const QDate &date)
{
    ptrDateSelected -> setWindowTitle("Match Day");
    ptrDateSelected -> show();
    ptrDateSelected -> fetchMatchData(date);

}
