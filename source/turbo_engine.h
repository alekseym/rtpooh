#ifndef _turbo_engine_h
#define _turbo_engine_h

#include "engine.h"

class TurboEngine:public Engine
{
	int rounds;
	float k;  // power = k * rounds
public:
	TurboEngine();
	~TurboEngine();
	void setRounds(int r);
	int getRounds();
	
	virtual float getPower();
	
};

#endif
