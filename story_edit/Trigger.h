#pragma once
#include <qstring.h>
#include <qlist.h>
#include "v2.h"

struct Trigger
{
	//触发器的ID
	int id;
	//触发器的类型，定义在Config.json中
	int type;
	//对应触发器类型所需要的参数
	QString param;
	//触发器激活条件
	QString condition;
	//和其他的数据关联
	QList<Trigger*> children;
	//备注说明
	QString remark;
	//当前触发器模块所在视图坐标
	v2 position;
};


