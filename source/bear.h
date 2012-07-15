#ifndef _bear_h
#define _bear_h

class Bear{
	float m,a,v0,v,h,t;
public:
        Bear();
	Bear(float nm, float nH, float nv);
	virtual ~Bear();
	
	float getHeight();
	float getMass();
	float getAcceleration();
	void setHeight(float nH);
	float getHeight();
	void setSpeed0(float nv0);
	float getSpeed();
	void move(float dt);
};

#endif