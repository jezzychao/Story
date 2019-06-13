#include "StoryEdit.h"

#include "DialogsEdit.h"

StoryEdit::StoryEdit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnEditDlg, SIGNAL(clicked()), this, SLOT(on_click_btn_edit_dlg()));
}

void StoryEdit::on_click_btn_edit_dlg() {
	auto pDialog = new DialogsEdit(this);
	pDialog->exec();
}
