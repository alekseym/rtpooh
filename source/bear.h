#ifndef _bear_h
#define _bear_h

class Bear{
	float m,a,v,h,t;
	float H;	//высота, на которой расположено дупло
public:
        Bear();
	Bear(float nm, float nH);
	virtual ~Bear();
	
	void flyup();
	void flydown();
	void freeze();
	void eat();
	void step();
	float getHeight();
	float getMass();
	float getAcceleration();
	void setHollowHeight(float nH);
	float getHollowHeight();
};

#endif