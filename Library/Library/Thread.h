#pragma once
#include<QThread>
class Thread : public QThread
{
	Q_OBJECT
protected:
	void run();
public:
	Thread(QObject *parent = 0);
	~Thread();
signals:
	void UpdateSignal();
};
