#include "String.h"
int main() {
	String str;
	String str2("Hello");
	String str3(str2);
	cout << str2.GetStr() << endl;
	cout << str3.GetStr() << endl;
	str3.SetStrLength("World");
	cout << str3 << endl;
	String result;
	result = str2 + str3;
	bool equal = str2 == str3;
	cout << "+ : " << result << endl;
	cout << "== : " << equal << endl;
	cout << str2.GetLength() << endl;
	cout << str3.GetLength() << endl;
	cout << result.GetLength() << endl;
	String str4("Summer holiday");
	String str5("Summer holiday");
	bool equal2 = str4 == str5;
	cout << "== : " << equal2 << endl;
	str5.SetStrLength("holiday");
	bool res = str4 < str5;
	cout << "< : " << res << endl;
	bool res2 = str4 > str5;
	cout << "> : " << res2 << endl;
	cout << "[] : " << str4[0] << endl;
	cout << str4.Find("S") << endl;
	cout << str4.FirstFind("m") << endl;
	str4.Getline(" ");

	return 0;
}