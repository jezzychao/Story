#include "DialogsEdit.h"
#include "ui_DialogsEdit.h"

DialogsEdit::DialogsEdit(QWidget *parent)
	:QDialog(parent)
{
	ui = new Ui::DialogsEdit();
	ui->setupUi(this);
	connect(ui->btnSaveClose, SIGNAL(clicked()), this, SLOT(on_click_btn_sava_and_close));
}

DialogsEdit::~DialogsEdit()
{
	if (ui) {
		delete ui;
	}
}

void DialogsEdit::on_click_btn_sava_and_close() {
	this->close();
}
