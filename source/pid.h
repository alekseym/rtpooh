class PID{
	float h;
	float ht;
	float tt;
	float a;
	float l;
public:
	PID();
	~PID();
	float gettt();
	float geta();
	void seth(float hh);
	void setht(float bb);
	void calc();
	float getl();
};
