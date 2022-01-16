#include <iostream>

using namespace std;

double total(double rainfall[])
{
	double total = 0;

	for (int i = 0; i < 12; i++) {
		total = total + rainfall[i];
	}

	return total;
}

double average(double rainfall[])
{
	double avg = 0;

	for (int i = 0; i < 12; i++) {
		avg = avg + rainfall[i];
	}

	avg = avg / 12.0;

	return avg;

}

int highest(double rainfall[])
{
	int highest = 0;

	for (int i = 0; i < 12; i++) {

		if (rainfall[i] > rainfall[highest])
			highest = i;
	}

	return highest;
}

double lowest(double rainfall[])
{
	int lowest = 0;

	for (int i = 0; i < 12; i++) {

		if (rainfall[i] < rainfall[lowest])
			lowest = i;
	}

	return lowest;
}

void display(double rainfall[12], string months[])
{
	cout << "Total rainfall: " << total(rainfall) << endl;
	cout << "Average rainfall: " << average(rainfall) << endl;

	int highest_index = highest(rainfall);
	int lowest_index = lowest(rainfall);
	cout << "Highest rainfall month: " << months[highest_index] << endl;
	cout << "Lowest rainfall month: " << months[lowest_index] << endl;

}

int main()
{
	string months[] = { "month #1", "month #2", "month #3", "month #4", "month #5", "month #6", "month #7", "month #8", "month #9", "month #10", "month #11", "month #12" };
	double rainfall[12];

	for (int i = 0; i < 12; i++) {

		cout << "Enter rainfall for " << months[i] << ": ";
		cin >> rainfall[i];

		while (rainfall[i] < 0)
		{
			cout << "invalid data (negative rainfall) -- retry" << endl;
			cout << "Enter rainfall for " << months[i] << ": ";
			cin >> rainfall[i];
		}
	}

	display(rainfall, months);

	return 0;
}