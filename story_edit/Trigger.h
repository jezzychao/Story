#pragma once
#include <qstring.h>
#include <qlist.h>
#include "v2.h"

struct Trigger
{
	//��������ID
	int id;
	//�����������ͣ�������Config.json��
	int type;
	//��Ӧ��������������Ҫ�Ĳ���
	QString param;
	//��������������
	QString condition;
	//�����������ݹ���
	QList<Trigger*> children;
	//��ע˵��
	QString remark;
	//��ǰ������ģ��������ͼ����
	v2 position;
};


