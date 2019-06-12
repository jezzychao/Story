#pragma once

#include <QtWidgets/QMainWindow>
namespace Ui { class StoryEditClass; };

class StoryEdit : public QMainWindow
{
	Q_OBJECT

public:
	explicit StoryEdit(QWidget *parent = Q_NULLPTR);
	~StoryEdit();
private slots:
	void on_click_btn_edit_dlg();

private:
	Ui::StoryEditClass *ui;

};
