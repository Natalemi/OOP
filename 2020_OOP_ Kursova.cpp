// Kursova_OOP_2020.cpp
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Name
{
	string name, surname, nickname;
public:
	Name() { name = surname = nickname = ""; }

	Name(string surname, string name, string nickname)
	{
		this->surname = surname;
		this->name = name;
		this->nickname = nickname;
	}

	string Get_surname() { return surname; }
	string Get_name() { return name; }
	string Get_nickname() { return nickname; }

	void Set_name(string surname, string name, string nickname)
	{
		this->surname = surname;
		this->name = name;
		this->nickname = nickname;
	}

	void Print()
	{
		cout << "Прізвище: " << Get_surname() << "\nІм'я: " << Get_name() << "\nПо батькові: " << Get_nickname() << endl;
	}

	~Name() {}
};

class Birth
{
public:
	int day, month, year;
public:
	Birth() { day = month = year = 0; }

	Birth(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	int Get_day() { return day; }
	int Get_month() { return month; }
	int Get_year() { return year; }

	void Set_Birth(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void Print()
	{
		cout << "Дата народження: " << Get_day() << "." << Get_month() << "." << Get_year() << endl;
	}

	~Birth() {}
};

class Address
{
	string street, city;
	int house_number, apartment_number;
public:
	Address() { street = city = ""; house_number = apartment_number = 0; }

	Address(string street, int house_number, int apartment_number, string city)
	{
		this->street = street;
		this->house_number = house_number;
		this->apartment_number = apartment_number;
		this->city = city;
	}

	string Get_street() { return street; }
	int Get_house_number() { return house_number; }
	int Get_apartment_number() { return apartment_number; }
	string Get_city() { return city; }

	void Set_Address(string street, int house_number, int apartment_number, string city)
	{
		this->street = street;
		this->house_number = house_number;
		this->apartment_number = apartment_number;
		this->city = city;
	}

	void Print()
	{
		cout << "Вулиця: " << Get_street() << "\nНомер будинку: " << Get_house_number() << "\nНомер квартири: " << Get_apartment_number() << "\nМісто: " << Get_city() << endl;
	}

	~Address() {}
};

class Number_phone
{
	string number_phone;
public:
	Number_phone() { number_phone = ""; }

	Number_phone(string number_phone)
	{
		this->number_phone = number_phone;
	}

	string Get_number_phone() { return number_phone; }

	void Set_Number_phone(string number_phone)
	{
		this->number_phone = number_phone;
	}

	void Print()
	{
		cout << "Номер телефону: " << Get_number_phone() << endl;
	}

	~Number_phone() {}
};

class Work
{
	string company, position, opening_hours;
public:
	Work() { company = position = opening_hours = ""; }

	Work(string company, string position, string opening_hours)
	{
		this->company = company;
		this->position = position;
		this->opening_hours = opening_hours;
	}

	string Get_company() { return company; }
	string Get_position() { return position; }
	string Get_opening_hours() { return opening_hours; }

	void Set_Work(string company, string position, string opening_hours)
	{
		this->company = company;
		this->position = position;
		this->opening_hours = opening_hours;
	}

	void Print()
	{
		cout << "Підприємство: " << Get_company() << "\nПосада: " << Get_position() << "\nГодини роботи: " << Get_opening_hours() << endl;
	}

	~Work() {}
};

class Email
{
	string email;
public:
	Email() { email = ""; }

	Email(string email)
	{
		this->email = email;
	}

	string Get_email() { return email; }

	void Set_Email(string email)
	{
		this->email = email;
	}

	void Print()
	{
		cout << "Електронна пошта: " << Get_email() << endl;
	}

	~Email() {}
};

class Human
{
	Name _Name_;
	Birth _Birth_;
	Adress _Adress_;
	Number_phone _Number_phone_;
	Work _Work_;
	Email _Email_;
public:
	Human() {}

	Human(Name some1, Birth some2, Adress some3, Number_phone some4, Work some5, Email some6)
	{
		this->_Name_ = some1;
		this->_Birth_ = some2;
		this->_Adress_ = some3;
		this->_Number_phone_ = some4;
		this->_Work_ = some5;
		this->_Email_ = some6;
	}

	void Print()
	{
		_Name_.Print();
		_Birth_.Print();
		_Adress_.Print();
		_Number_phone_.Print();
		_Work_.Print();
		_Email_.Print();
	}

	~Human() {}
};

class Something_interesting
{
	string interesting;
public:
	Something_interesting() { interesting = ""; }

	Something_interesting(string interesting)
	{
		this->interesting = interesting;
	}

	string Get_interesting() { return interesting; }

	void Set_interesting(string interesting) { this->interesting = interesting; }

	void Print()
	{
		cout << "Цікава або важлива інформація: " << Get_interesting() << endl;
	}
};

class Note
{
	string note;
public:
	Note() { note = ""; }

	Note(string note)
	{
		this->note = note;
	}

	string Get_note() { return note; }

	void Set_note(string note)
	{
		this->note = note;
	}

	void Print()
	{
		cout << "Нотатки: " << Get_note() << endl;
	}

	~Note() {}
};

class WhatDayIsToday : public Birth
{
	Birth _Birth_;
public:
	WhatDayIsToday() {}

	WhatDayIsToday(int day, int month)
	{
		this->day = day;
		this->month = month;
	}

	~WhatDayIsToday() {}
};

class Birthday : public Birth
{
	Birth _Birth_;
	WhatDayIsToday _WhatDayIsToday_;
public:
	Birthday() {}

	Birthday(Birth some1, Birth some2, Birth some3, Birth some4, Birth some5, WhatDayIsToday today)
	{
		this->_Birth_ = some1;
		this->_Birth_ = some2;
		this->_Birth_ = some3;
		this->_Birth_ = some4;
		this->_Birth_ = some5;
		this->_WhatDayIsToday_ = today;
		if (some1.day == today.day && some1.month == today.month)
			cout << "Сьогодні день народження у Чернової Марії Іванівни";
		else if (some2.day == today.day && some2.month == today.month)
			cout << "Сьогодні день народження у Генералова Івана Костянтиновича";
		else if (some3.day == today.day && some3.month == today.month)
			cout << "Сьогодні день народження у Матвійчука Данила Михайловича";
		else if (some4.day == today.day && some4.month == today.month)
			cout << "Сьогодні день народження у Романової Ірини Дмитрівни";
		else if (some5.day == today.day && some5.month == today.month)
			cout << "Сьогодні день народження у Кулікова Івана Петровича";
	}

	~Birthday() {}
};

class NoteBook
{
	Human _Human_;
	Something_interesting _Something_interesting_;
	Note _Note_;
public:
	NoteBook() {}

	NoteBook(Human human1, Human human2, Human human3, Human human4, Human human5, Something_interesting some1, Something_interesting some2, Something_interesting some3, Something_interesting some4, Something_interesting some5, Note note1)
	{
		this->_Human_ = human1;
		this->_Human_ = human2;
		this->_Human_ = human3;
		this->_Human_ = human4;
		this->_Human_ = human5;
		this->_Something_interesting_ = some1;
		this->_Something_interesting_ = some2;
		this->_Something_interesting_ = some3;
		this->_Something_interesting_ = some4;
		this->_Something_interesting_ = some5;
		this->_Note_ = note1;
		human1.Print();	cout << endl; some1.Print(); cout << endl;
		human2.Print();	cout << endl; some2.Print(); cout << endl;
		human3.Print();	cout << endl; some3.Print(); cout << endl;
		human4.Print();	cout << endl; some4.Print(); cout << endl;
		human5.Print(); cout << endl; some5.Print(); cout << endl;
		note1.Print(); cout << endl;
	}

	~NoteBook() {}
};

int main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в потік виведення

	cout << "Який сьогодні день? - "; int day, month; cin >> day; cout << "Який сьогодні місяць? - "; cin >> month; WhatDayIsToday day_today(day, month);

	Name first1("Чернова", "Марія", "Іванівна");
	Birth first2(2, 4, 1988);
	Address first3("Шевченка", 2, 6, "Луганськ");
	Number_phone first4("+380509289367");
	Work first5("Дитячий садочок", "Вихователька", "з 6:00 до 16:00");
	Email first6("sdfa@gmail.com");
	cout << "Є побажання записати якусь інформацію про Чернову Марію Іванівну? - "; string YESorNO; cin >> YESorNO; Something_interesting first7;
	if (YESorNO == "Так" || YESorNO == "так") {
		string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
		first7.Set_interesting(interesting);
	}
	Human firstHuman(first1, first2, first3, first4, first5, first6); //firstHuman.Print(); first7.Print();

	Name second1("Генералов", "Іван", "Костянтинович");
	Birth second2(1, 3, 1985);
	Address second3("Гоголя", 4, 3, "Сєверодонецьк");
	Number_phone second4("+380509868904");
	Work second5("Школа №4", "Вчитель математики", "з 8:00 до 16:00");
	Email second6("jkuik@gmail.com");
	cout << "Є побажання записати якусь інформацію про Генералова Івана Костянтиновича? - "; cin >> YESorNO; Something_interesting second7;
	if (YESorNO == "Так" || YESorNO == "так") {
		string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
		second7.Set_interesting(interesting);
	}
	Human secondHuman(second1, second2, second3, second4, second5, second6); //secondHuman.Print(); second7.Print();

	Name third1("Матвійчук", "Данило", "Михайлович");
	Birth third2(5, 10, 1994);
	Address third3("Кірова", 10, 3, "Харків");
	Number_phone third4("+380502317846");
	Work third5("Продуктовий магазин 'Ластівка'", "Касир", "з 9:30 до 18:00");
	Email third6("ythdr@gmail.com");
	cout << "Є побажання записати якусь інформацію про Матвійчука Данила Михайловича? - "; cin >> YESorNO; Something_interesting third7;
	if (YESorNO == "Так" || YESorNO == "так") {
		string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
		third7.Set_interesting(interesting);
	}
	Human thirdHuman(third1, third2, third3, third4, third5, third6); //thirdHuman.Print(); third7.Print();

	Name fourth1("Романова", "Ірина", "Дмитрівна");
	Birth fourth2(5, 8, 1989);
	Address fourth3("Володимирська", 35, 7, "Рубіжне");
	Number_phone fourth4("+380504327645");
	Work fourth5("Кардіологічне відділення ЦМЛ", "Сестра-господиня", "з 8:00 до 15:30");
	Email fourth6("th4wef@gmail.com");
	cout << "Є побажання записати якусь інформацію про Романову Ірину Дмитрівну? - "; cin >> YESorNO; Something_interesting fourth7;
	if (YESorNO == "Так" || YESorNO == "так") {
		string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
		fourth7.Set_interesting(interesting);
	}
	Human fourthHuman(fourth1, fourth2, fourth3, fourth4, fourth5, fourth6); //fourthHuman.Print(); fourth7.Print();

	Name fifth1("Куліков", "Іван", "Петрович");
	Birth fifth2(6, 4, 1987);
	Address fifth3("Гагаріна", 87, 307, "Луганськ");
	Number_phone fifth4("+38050257637");
	Work fifth5("ТОВ Луганськгаз ЗБУТ", "Інспектор", "з 10:00 до 15:30");
	Email fifth6("gyjftnf@gmail.com");
	cout << "Є побажання записати якусь інформацію про Кулікова Івана Петровича? - "; cin >> YESorNO; Something_interesting fifth7;
	if (YESorNO == "Так" || YESorNO == "так") {
		string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
		fifth7.Set_interesting(interesting);
	}
	Human fifthHuman(fifth1, fifth2, fifth3, fifth4, fifth5, fifth6); //fifthHuman.Print(); fifth7.Print();

	cout << "Є побажання записати нотатки? - "; cin >> YESorNO; Note note1;
	if (YESorNO == "Так" || YESorNO == "так") {
		string note; cout << "Напишіть: "; getline(cin, note, '.');
		note1.Set_note(note);
		note1.Print();
	}

	cout << "\nВивід всієї записної книжки\n";
	NoteBook MyBook(firstHuman, secondHuman, thirdHuman, fourthHuman, fifthHuman, first7, second7, third7, fourth7, fifth7, note1);
	Birthday Today(first2, second2, third2, fourth2, fifth2, day_today); cout << endl;

	cout << "\nВи хочете створити ще одну сторінку? - "; cin >> YESorNO;
	if (YESorNO == "Так" || YESorNO == "так") {
		string name, surname, nickname; cout << "Напишіть прізвище, ім'я, по батькові через Enter:\n"; cin >> surname >> name >> nickname; Name sixth1; sixth1.Set_name(surname, name, nickname);
		int day, month, year; cout << "Напишіть день, місяць, рік народження через Enter:\n"; cin >> day >> month >> year; Birth sixth2; sixth2.Set_Birth(day, month, year);
		string street, city; int house_number, apartment_number; cout << "Напишіть вулицю, номер дому, номер квартири, місто через Enter:\n"; cin >> street >> house_number >> apartment_number >> city; Address sixth3; sixth3.Set_Address(street, house_number, apartment_number, city);
		string number_phone; cout << "Напишіть номер телефону через Enter:\n"; cin >> number_phone; Number_phone sixth4; sixth4.Set_Number_phone(number_phone);
		string company, position, opening_hours; cout << "Напишіть підприємство, посаду, години роботи через Enter:\n"; cin >> company >> position >> opening_hours; Work sixth5; sixth5.Set_Work(company, position, opening_hours);
		string email; cout << "Напишіть електронну пошту через Enter:\n"; cin >> email; Email sixth6; sixth6.Set_Email(email);
		cout << "Є побажання записати якусь інформацію про цю людину? - "; cin >> YESorNO; Something_interesting sixth7;
		if (YESorNO == "Так" || YESorNO == "так") {
			string interesting; cout << "Напишіть: "; getline(cin, interesting, '.');
			sixth7.Set_interesting(interesting);
		}
		Human sixthHuman(sixth1, sixth2, sixth3, sixth4, sixth5, sixth6); sixthHuman.Print(); sixth7.Print();
	}

	return 0;
}
