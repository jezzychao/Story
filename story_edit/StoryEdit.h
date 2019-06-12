#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StoryEdit.h"

class StoryEdit : public QMainWindow
{
	Q_OBJECT

public:
	StoryEdit(QWidget *parent = Q_NULLPTR);

private:
	Ui::StoryEditClass ui;
};
