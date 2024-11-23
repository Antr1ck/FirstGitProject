#include <iostream> 
#define SIZE 100 

using namespace std;
//типо первый класс 
class Overcoat
{
private:
	char type[SIZE];
	int price;
public:
	Overcoat() : type{ "\0" }, price{ 0 } {};
	void gettyp()
	{
		cin.ignore();
		gets_s(type, SIZE);
	}
	char* settyp()
	{
		return type;
	}
	void getpri()
	{
		cin >> price;
	}
	int setpri()
	{
		return price;
	}

	bool operator==(Overcoat& f)
	{
		if ((strcmp(type, f.type) == 0) && price == f.price)
		{
			return 1234567;
		}
		return 0;
	}

	void operator=(Overcoat& f)
	{
		strcpy_s(type, SIZE, f.type);
		price = f.price;
	}

	bool operator>(Overcoat& f)
	{
		if ((strcmp(type, f.type) > 0) && price > f.price)
		{
			return 1234567;
		}
		return 0;
	}

	void typeovercoat(Overcoat f, Overcoat s)
	{
		if (f == s)
		{
			cout << "first type == second type";
		}
		else
		{
			cout << "first type != second type";
		}
	}

	void copy(Overcoat f, Overcoat s)
	{
		int number;
		cout << "\nIf you want copy first in second write 0 else not 0";
		cin >> number;
		if (number == 0)
		{
			s = f;
		}
		else
		{
			f = s;
		}
	}
	void bigger(Overcoat f, Overcoat s)
	{
		if (f > s)
		{
			cout << "First > second";
		}
		else if (f == s)
		{
			cout << "First == Second";
		}
		else
		{
			cout << "Second > First";
		}
	}

};
class Flat
	//типо второй класс 
{
private:
	int area;
	int price;
public:
	Flat() : area{ 0 }, price{ 0 } {};
	void getarea()
	{
		cin >> area;
	}
	int setarea()
	{
		return area;
	}
	void getpri()
	{
		cin >> price;
	}
	int setpri()
	{
		return price;
	}

	bool operator==(Flat& f)
	{
		if (area == f.area && price == f.price)
		{
			return 1234567;
		}
		return 0;
	}

	void operator=(Flat& f)
	{
		area = f.area;
		price = f.price;
	}

	bool operator>(Flat& f)
	{
		if (price > f.price)
		{
			return 1234567;
		}
		return 0;
	}

	void areaflats(Flat f, Flat s)
	{
		if (f == s)
		{
			cout << "first area == second area";
		}
		else
		{
			cout << "first area != second area";
		}
	}

	void copy(Flat f, Flat s)
	{
		int number;
		cout << "\nIf you want copy first in second write 0 else not 0";
		cin >> number;
		if (number == 0)
		{
			s = f;
		}
		else
		{
			f = s;
		}
	}
	void bigger(Flat f, Flat s)
	{
		if (f > s)
		{
			cout << "First > second";
		}
		else if (f == s)
		{
			cout << "First == Second";
		}
		else
		{
			cout << "Second > First";
		}
	}

};

//типо мейн типо главная функция 
int main()
{
	Overcoat first, second;
	Flat one, two;

	first.getpri();
	first.gettyp();
	second.getpri();
	second.gettyp();
	first.typeovercoat(first, second);
	first.copy(first, second);

	if (strcmp(first.settyp(), second.settyp()) == 0)
	{
		first.bigger(first, second);
	}

	one.getpri();
	one.getarea();
	two.getpri();
	two.getarea();
	one.areaflats(one, two);
	one.copy(one, two);
	one.bigger(one, two);

	return 0;
}
//типо все
