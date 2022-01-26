
#include<iostream>
#include<iomanip>
using namespace std;

class engine
{
public:
	float input, output, efficiency;


	void get_value()
	{
		cout << "Enter engine Output : ";
		cin >> output;
		cout << endl;
		cout << "Enter engine Input : ";
		cin >> input;
		cout << endl;
	}
public:
	virtual float eng_efficiency()
	{
		return 0;
	}

};

class InternalCombustineEngine : public engine
{
public:
	float eng_efficiency()
	{

		efficiency = output / input;
		return (efficiency);
	}
};

class ExternalCombustineEngine : public engine
{
public:
	float eng_efficiency()
	{
		efficiency = output / input;
		return (efficiency);
	}
};

class PetrolEngine : public engine
{
public:
	float eng_efficiency()
	{

		efficiency = output / input;
		return (efficiency);
	}
};

class DieselEngine : public engine
{
public :
	float eng_efficiency()
	{
		efficiency = output / input;
		return (efficiency);
	}
};

class SteamEngine : public engine
{
public:

	float eng_efficiency()
	{
		efficiency = output / input;
		return (efficiency);
	}

};

int main()
{
	int user_input;


	for (int i = 0; i <= 4; i++)
	{

		cout << "Select Engine\n 1 - InternalCombustineEngine \n 2 - ExternalCombustineEngine \n 3 - PetrolEngine\n 4 - DieselEngine, \n 5 - SteamEngine \n";
		cin >> user_input;




		switch (user_input)
		{
		case 1:
		{
			InternalCombustineEngine a;
			a.get_value();
			cout << "SteamEngine Efficiency = " << a.eng_efficiency() << "%" << endl;
			break;
		}
		case 2:
		{
			ExternalCombustineEngine b;
			b.get_value();
			cout << "SteamEngine Efficiency =" << b.eng_efficiency() << "%" << endl;
			break;
		}
		case 3:
		{
			PetrolEngine c;
			c.get_value();
			cout << "SteamEngine Efficiency =" << c.eng_efficiency() << "%" << endl;
			break;
		}
		case 4:
		{
			DieselEngine c;
			c.get_value();
			cout << "SteamEngine Efficiency =" << c.eng_efficiency() << "%" << endl;
			break;
		}
		case 5:
		{
			SteamEngine c;
			c.get_value();
			cout << "SteamEngine Efficiency =" << c.eng_efficiency() << "%" << endl;
			break;
		}
		}
	}
}
