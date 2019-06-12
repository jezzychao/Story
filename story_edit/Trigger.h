#pragma once
#include <qstring.h>
class Trigger
{
public:
	Trigger();
	~Trigger();
private:
	//触发器的ID
	int id;
	//触发器的类型，定义在Config.json中
	int type;
	//对应触发器类型所需要的参数
	QString param;
	//触发器激活条件
	QString condition;
	//备注说明
	QString remark;
};

