#include "Fat.h"
#include <algorithm>

const int NUM{ 5 };

void SetData();
void BmiCalc();
void Sort();
void Output();

Fat* human;

int main() {

	human = new Fat[NUM];

	SetData();
	BmiCalc();
	Sort();
	Output();

	delete[] human;

}


void SetData()
{

	const char* name[] = { "太郎","花子","次郎","良子","吾郎" };
	float height[] = { 1.72f, 1.63f, 1.85f, 1.56f, 1.77f };
	float weight[] = { 68.2f, 55.6f, 92.5f, 63.3f, 50.1f };

	for (int i = 0; i < NUM; i++) {
		human[i].SetName(name[i]);
		human[i].SetHeight(height[i]);
		human[i].SetWeight(weight[i]);
	}

}

void BmiCalc()
{
	for (int i = 0; i < NUM; i++) {
		human[i].Calc();
	}
}

void Sort()
{
	for (int i = 0; i < NUM; i++) {
		for (int j = i + 1; j < NUM; j++) {
			if (human[i].GetBMI() > human[j].GetBMI()) {
				Fat temp = human[i];
				human[i] = human[j];
				human[j] = temp;
			}
		}
	}
}

void Output()
{
	for (int i = 0; i < NUM; i++) {
		human[i].Disp();
	}
}
