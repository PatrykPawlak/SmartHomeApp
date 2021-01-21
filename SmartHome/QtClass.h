#pragma once

#include <QObject>

class QtClass : public QObject
{
	Q_OBJECT

public:
	QtClass(QObject *parent);
	~QtClass();
};
