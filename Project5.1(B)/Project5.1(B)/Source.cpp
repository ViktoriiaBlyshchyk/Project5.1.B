#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex x, y;
	cin >> x >> y;

	try
	{
		cout << "x * y = " << x * y << endl << endl;
		cout << "x + y = " << x + y << endl << endl;
		cout << "x == y : ";
		if(x == y) 
			cout << "True\n" << endl;
		else
			cout << "False\n" << endl;
	}

	catch (E e)
	{
		cout << e.What() << endl << endl;
	}

    catch (Error& e)
    {
		cout << e.What() << endl << endl;
    }
    
    catch (bad_exception a)
    {
        cout << a.what() << endl << endl; 
    }

	return 0;
}
