#ifndef _TARGET_H_
#define _TARGET_H_

class Target
{
public:
	Target(void);
	virtual void request();
public:
	virtual ~Target(void);
};

#endif