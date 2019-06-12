#pragma once

#include <QDialog>
namespace Ui { class DialogsEdit; };

class DialogsEdit : public QDialog
{
	Q_OBJECT

public:
	explicit DialogsEdit(QWidget *parent = Q_NULLPTR);
	~DialogsEdit();

private slots:
	void on_click_btn_sava_and_close();
private:
	Ui::DialogsEdit *ui;
	int currOptionId;
};

