# include <stdio.h>
#include "flying_bear.h"

FlyingBear::FlyingBear
{
}

FlyingBear::~FlyingBear
{
  // TODO - we need delete Engine
}

void FlyingBear::setEngine(Engine *pp)
{
	motor=pp;
}

void FlyingBear::setPower(float pp)
{
//	p->power=pp->power;
// TODO - rewrite
}

virtual void FlyingBear::move(int dt)
{
//  p->v ??? what is this?
//	motor->h=p->v*dt+((p->f-p->m*g)*dt*dt)/2*p->m;
//	p->v=p->v+((p->f-p->m*g)*dt)/p->m;
}
