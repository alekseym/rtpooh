#include "model.h"
# include <stdio.h>

// TODO what about  () ???????
Model::Model
{
	dt=5;
	
	// TODO - animal array shuld be allocated by malloc or new !!!
	count = 0;
}
Model::~Model;
{

        // TODO - animal array shuld be deleted by free or delete !!!
}
void Model::add_entity(Bear*p)
{
	animal[count]=*p;
	count++;
}
void Model::run()
{
	int t,i;
	for (i=0; i<count; i++)
	{
		for (t=0; t<1000; t=t+dt)
		{
			process_one_tick(dt,i);
		}
	}
}
void Model::process_one_tick(int dt,int r)
{
  for(int i=0;i<count;i++) {
	animal[i].move(dt);
	
	animal[i].show(); // TODO - define show for bear !!!
  }
}
