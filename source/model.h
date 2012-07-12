#include "bear.h"

class Model
{
	Bear* animal;
	int dt;
	int count;
public:
	Model();
	~Model;
	void add_entity(Bear*p);
	void run();
	void process_one_tick(int dt, int r);
};

