#pragma once
#include <qstring.h>
class Trigger
{
public:
	Trigger();
	~Trigger();
private:
	//��������ID
	int id;
	//�����������ͣ�������Config.json��
	int type;
	//��Ӧ��������������Ҫ�Ĳ���
	QString param;
	//��������������
	QString condition;
	//��ע˵��
	QString remark;
};

