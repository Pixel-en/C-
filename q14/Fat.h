#pragma once
class Fat
{
	const char* name;
	float height;
	float weight;
	float BMI;

public:
	void SetName(const char* _n);
	void SetHeight(float _h);
	void SetWeight(float _w);
	void Calc();
	float GetBMI();
	void Disp();

};

