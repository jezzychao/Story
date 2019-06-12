#include "StoryEdit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StoryEdit w;
	w.show();
	return a.exec();
}
