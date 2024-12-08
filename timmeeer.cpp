	#include <iostream>

	#include <iomanip>

	#include <windows.h>

	 

	using namespace std;

	 

	int main()
	 

	{

	    int h = 0, m = 0, s = 0;

	 

	    //Get info

	    cout << "\t\tCOUNTDOWN TIMER\n\n\n\n"
	         << "Enter the time you wish to count down from.\n\n\n"
	         << "Hours: ";
	    cin  >> h;
	    cout << "Minutes: ";
	    cin  >> m;
	    cout << "Seconds: ";
	    cin  >> s;
	    //Convert to proper time format, if needed
	    while (s >= 60)
	        {
	        s -= 60;
	        m ++;
	        }
	    while (m >= 60)
	        {
	        m -= 60;
	        h ++;
	        }
	    /*Display original time for reference and
	    maintain proper appearance of time display*/
	    cout << "\n\nOriginal Time: " << setfill('0')
	         << setw(2) << h << ":"
	         << setw(2) << m << ":"
	         << setw(2) << s
	         << "\n\nTime Remaining: ";
	 
	    //Calculate total for loop
	    int htos = h * 3600, mtos = m * 60, total = htos + mtos + s;
	 
	    //Perform countdown
	    for (int i = total; i > 0; i --)
	        {
	        s --;
	        cout << setw(2) << h << ":"
	             << setw(2) << m << ":"

	             << setw(2) << s;

	        Sleep(1000);

	        if (h > 0 && m == 0 && s == 0)

	            {

	            h --;

	            m += 59;

	            s += 60;

	            }

	        else if (h >= 1 && m >= 1 && s == 0)

	            {
	            m --;
	            s += 60;
	            }
	        //Refresh the time...
	        cout << "\b\b\b\b\b\b\b\b";
	        }
	    cout << "\n\nCountdown Complete!\n\n";
	return(0);
	}
