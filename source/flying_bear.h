#include "engine.h"

class FlyingBear:public Bear
{
	Engine *motor;
public:
	FlyingBear();
	~FlyingBear();
	void setEngine(Engine *pp);
	
	void setEnginePower(float new_power);
	float getEnginePower() { return 0;}
	
	virtual void move(int dt);
};
