#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
//#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int MAX_VALUE = 75;
//#include <boost/algorithm/string.hpp>
//#include <cctype>
//#include <cmath>

/*
struct list
{
    string number;
    struct * next_adress;
};
*/
/*
void str_to_int (string & str, int & number,  int length, int i, int j)
{

    getline(cin, str);
    cout << endl;
	length = str.length();
	length -=1;

	while (length >=0)
    {
        number += ((static_cast<int>(str[length])-48)*pow(10,j));
        length--; j++;
    }

    //cout << number << endl << endl;
}
*/

string Ntimes (int n, char x)
{
    string times;
    for (; n > 0; n--)
    {
         times += x;
    }
    return times;
}

void gotoXY(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console,CursorPosition);
}

void ArabicNum_to_RomanNum (string str, /*int number,*/ int length, string roman, int i, int j)
{

    roman= "";
    //length = str.length();
	int subscript = 0, num, y = 4, maxLength = 0, x = 2, originalX = x, numSpaces = 0, unitialY, helper, iteration = 0;
	 // number that I use as a copy of the length
	string accumulator, answer, prompt, simbol;
	simbol = Ntimes (80, '*');
    gotoXY(0,1);
    cout << simbol;
    gotoXY(5,2);
    cout << "* Hello user, Welcome to the converter of Arabic Numerals *" << endl;
    gotoXY(5,3);
    cout << "* Would you like to convert a number?[Y/N] ";
    cin >> answer;
    cout << simbol;
    answer[0] = toupper(answer[0]);
    cin.get();
        while (answer[0] != 'Y' & answer[0] != 'N')
        {
            system("cls");
            cout << simbol;
            y = 0;
            y += 2;
            gotoXY(5,y++);
            cout << "* Sorry you have not inputted a right answer. Please try again *" << endl;
            gotoXY(5,y++);
            cout << "* Would you like to convert an Arabic number?[Y/N]: ";
            cin >> answer;
            cout << simbol;
            answer[0] = toupper(answer[0]);
            cin.get();
        }

    while (answer[0] =='Y')
    {
        iteration = 0;
        roman = "";
        subscript = 0;
        gotoXY(x, y+=2);
        cout << "Enter the number: ";
        getline(cin, str);
        length = str.length();
/*
        int length_copy = length;
        for (; length_copy > 0; length_copy--)
        {
            if (!(str[iteration] == '1' || str[iteration] == '2' || str[iteration] == '3' || str[iteration] == '4' ||
               str[iteration] == '4' || str[iteration] == '5' || str[iteration] == '6' || str[iteration] == '7' ||
               str[iteration] == '8' ||str[iteration] == '9' || str[iteration] == '0'))

            {
                y = 1;
                x = 1;
                system("cls");
                gotoXY(x,y++);
                cout << simbol;
                gotoXY(x,y++);
                cout << "* Sorry but the number you inputted was incorrect. *" << endl;
                gotoXY(x,y++);
                cout << "* Enter a new number: ";
                string dummy;
                cin >> dummy;
                cout << simbol;
                iteration = 0;
                str = dummy;
            }
            iteration++;
        }*/



    //    {
/*
            while (!(str[iteration] == '1' || str[iteration] == '2' || str[iteration] == '3' || str[iteration] == '4' ||
               str[iteration] == '4' || str[iteration] == '5' || str[iteration] == '6' || str[iteration] == '7' ||
               str[iteration] == '8' ||str[iteration] == '9'))
               {

                   system("cls");
                   iteration = 0;
                   y = 2;
                   gotoXY(x, y++);
                   cout << "Sorry but your input was incorrect.";
                   gotoXY(x, y++);
                   cout << "Please enter valid numbers.";
                   gotoXY(x, y++);
                   cout << "Enter the number: ";
                   getline(cin, str);
                   while (length_copy >= 1)
                   {
                       str[iteration++];
                       length_copy--;
                   }

                    if (str[iteration] == '1' || str[iteration] == '2' || str[iteration] == '3' || str[iteration] == '4' ||
                          str[iteration] == '4' || str[iteration] == '5' || str[iteration] == '6' || str[iteration] == '7' ||
                          str[iteration] == '8' ||str[iteration] == '9')
                          //break();
               }*/
         //      }


        cout << endl;
        //while (str);
        length = str.length();
        maxLength = str.length();
        y+= 5;


    iteration = 0;
	while (length > 0)
	{
        while (length > 4)
        {
            if (x > MAX_VALUE)
            {
                gotoXY(x,y+= 2);
                x = originalX;
            }
            if (length%3 == 0)
            {
                num = str[subscript]-'0';
                    if (num > 0 & num < 4)
                    {
                        while (num > 0 & num < 4)
                        {
                            /*if (subscript != 0)
                            {*/

                            if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}
                            for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);

                                /*if (maxLength-length == 0)
                                {
                                    y++;
                                }*/
                            }
                            gotoXY(x, y);
                            cout << "C";
                            gotoXY(x++, y);
                            num--;
                        }

                    }
                    else if (num == 4)
                    {
                        /*if (subscript != 0)
                            {*/
                            if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}
                        for (int counter = (length/3)-1;counter > 0; counter--)
                        {
                            //gotoXY(x, --y);
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                            /*if (maxLength-length == 0)
                            {
                                y++;
                            }*/
                        }
                        /*if (maxLength-length == 0)
                        {
                            y += 1;
                        }*/
                        //gotoXY(x, y);
                        gotoXY(x, y);
                        cout << "C";
                        gotoXY(x++, y);

                        for (int counter = (length/3)-1;counter > 0; counter--)
                        {
                            gotoXY(x, --y);
                        }

                        for (int counter = (length/3)-1;counter > 0; counter--)
                        {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                        }
                        gotoXY(x, y);
                        cout << "D";
                        gotoXY(x++, y);
                    }
                    else if (num == 5)
                    {
                        /*if (subscript != 0)
                            {*/
                            if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}

                        for (int counter = (length/3)-1; counter > 0; counter--)
                        {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                            /*

                            if (maxLength-length == 0)
                            {
                                y++;
                            }*/
                        }
                        //gotoXY(x, y);
                        gotoXY(x, y);
                        cout << "D";
                        gotoXY(x++, y);
                    }
                    else if (num > 5 & num < 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}

                        for (int counter = (length/3)-1;counter > 0; counter--)
                        {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                            /*
                            if (maxLength-length == 0)
                            {
                                y++;
                            }*/
                        }
                        //gotoXY(x, y);
                        gotoXY(x, y);
                        cout << "D";
                        gotoXY(x++, y);
                        while (num > 5 & num < 9)
                        {

                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }


                            for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                          /*  if (maxLength-length == 0)
                            {
                                y++;
                            }*/
                        }
                        //gotoXY(x, y);
                        gotoXY(x, y);
                        cout << "C";
                        gotoXY(x++, y);
                        num--;
                        }
                    }
                    else if (num == 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}
                        for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "C";
                        gotoXY(x++, y);

                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }

                        for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                         gotoXY(x, y);
                         cout << "M";
                         gotoXY(x++, y);
                    }
                length--;
                subscript++;
            }
            if (length%3 == 1)
            {
                 ;
                num = str[subscript]-'0';
                    if (num > 0 & num < 4)
                    {
                        if (x > 50)

                        while (num > 0 & num < 5)
                        {
                            if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}

                            for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                            gotoXY(x, y);
                            cout << "M";
                            gotoXY(x++, y);
                            num--;
                        }
                    }
                    else if (num == 4)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                                for (int counter = (length/3);counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }
                            //}
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "I";
                        gotoXY(x++, y);


                                for (int counter = (length/3);counter > 0; counter--)
                                {
                                    gotoXY(x, --y);
                                }


                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "V";
                        gotoXY(x++, y);
                    }
                    else if (num == 5)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                        {
                            gotoXY(x, --y);
                        }

                        //}
                        for (int counter = length/3;counter > 0; counter--)
                        {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                        }
                        gotoXY(x, y);
                        cout << "V";
                        gotoXY(x++, y);
                    }
                    else if (num > 5 & num < 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                        {
                            gotoXY(x, --y);
                        }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                        {
                            gotoXY(x, y);
                            cout << "-";
                            gotoXY(x, ++y);
                        }
                        gotoXY(x, y);
                        cout << "V";
                        gotoXY(x++, y);
                        while (num > 5 & num < 9)
                        {

                            for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }

                            for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                            gotoXY(x, y);
                            cout << "M";
                            gotoXY(x++, y);
                            num--;
                        }
                    }
                    else if (num == 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = (length/3)-1;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "M";
                        gotoXY(x++, y);

                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }

                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                         gotoXY(x, y);
                         cout << "X";
                         gotoXY(x++, y);
                    }
                length--;
                subscript++;
            }

            if (length%3 == 2)
            {
                 ;
                num = str[subscript]-'0';
                    if (num > 0 & num < 4)
                    {
                        while (num > 0 & num < 4)
                        {
                            if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                            gotoXY(x, y);
                            cout << "X";
                            gotoXY(x++, y);
                            num--;
                        }
                    }
                    else if (num == 4)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "X";
                        gotoXY(x++, y);


                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }

                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "L";
                        gotoXY(x++, y);
                    }
                    else if (num == 5)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "L";
                        gotoXY(x++, y);
                    }

                    else if (num > 5 & num < 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                            gotoXY(x, y);
                            cout << "L";
                            gotoXY(x++, y);
                        while (num > 5 & num < 9)
                        {

                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }

                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                            gotoXY(x, y);
                            cout << "X";
                            gotoXY(x++, y);
                            num--;
                        }
                    }
                    else if (num == 9)
                    {
                        if (subscript == 0 || x == originalX)
                            {
                                for (int counter = (length/3)-1;counter > 0; counter--)
                                {
                                    gotoXY(x, ++y);
                                }
                            }
                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }
                        //}
                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                        gotoXY(x, y);
                        cout << "X";
                        gotoXY(x++, y);

                        for (int counter = (length/3);counter > 0; counter--)
                            {
                                gotoXY(x, --y);
                            }

                        for (int counter = length/3;counter > 0; counter--)
                            {
                                gotoXY(x, y);
                                cout << "-";
                                gotoXY(x, ++y);
                            }
                         gotoXY(x, y);
                         cout << "C";
                         gotoXY(x++, y);
                    }
                length--;
                subscript++;
            }
        }

        if (length == 4)
        {
             ;
            num = str[subscript]-'0';
            if (num > 0 & num < 4)
                {
                    while (num > 0 & num < 4)
                        {
                            gotoXY(x, y);
                            cout << "M";
                            gotoXY(++x, y);
                            num--;
                        }
                }
                        else if (num >= 5 & num <= 9)
                        {
                            if (num == 5)
                            {
                                gotoXY(x, --y);
                                 cout << "-";
                                 gotoXY(x, ++y);
                                 cout << "V";
                                 gotoXY(x++, y);
                            }
                             else if (num > 5)
                             {
                                 gotoXY(x, --y);
                                 cout << "-";
                                 gotoXY(x, ++y);
                                 cout << "V";
                                 gotoXY(x++, y);

                             }
                            while (num > 5 & num <= 9)
                            {
                                gotoXY(x, y);
                                cout << "M";
                                gotoXY(x++, y);
                                num--;
                            }
                        }/*
                    else if (num == 9)
                    {
                        //gotoXY(x, ++y);
                        gotoXY(x, y);
                        cout << "-";
                        gotoXY(x, ++y);
                        cout << "V";
                        gotoXY(x++, --y);


                        cout << "X";
                        gotoXY(x++, y);
                    }*/
                   length--;
                   //gotoXY(--x,y);
                   subscript++;
        }

        if (length == 3)
        {
             ;
            num = str[subscript]-'0';
                        if (num > 0 & num < 4)
                        {
                            //gotoXY(--x,y);
                            while (num > 0 & num < 4)
                            {
                                gotoXY(x, y);
                                cout << "C";
                                gotoXY(x++, y);
                                num--;
                            }
                        }
                        else if (num == 4)
                        {
                            //gotoXY(x, ++y);
                            gotoXY(x, y);
                            cout << "C";
                            gotoXY(x++, y);
                            cout << "D";
                            gotoXY(x++, y);

                        }
                        else if (num >= 5 & num < 9)
                        {
                            if (num == 5)
                            {
                                //gotoXY(x, ++y);
                                gotoXY(x, y);
                                cout << "D";
                                gotoXY(x++, y);
                            }
                             else if (num > 5)
                             {
                                 //gotoXY(x, ++y);
                                 gotoXY(x, y);
                                 cout << "D";
                                 gotoXY(x++, y);

                             }
                            while (num > 5 & num < 9)
                            {
                                gotoXY(x, y);
                                cout << "C";
                                gotoXY(x++, y);
                                num--;
                            }
                        }
                    else if (num == 9)
                    {
                        //gotoXY(x, ++y);
                        /*gotoXY(x++, y);
                        gotoXY(x--, y);*/
                        gotoXY(x++, y);
                        //gotoXY(x--, y);
                        cout << "C";
                        gotoXY(x++, y);
                        cout << "M";
                        gotoXY(x++, y);
                    }
                   length--;
                   subscript++;
            }

            if (length == 2)
            {
                 ;
            num = str[subscript]-'0';
                        if (num > 0 & num < 4)
                        {
                            while (num > 0 & num < 4)
                            {
                                gotoXY(x, y);
                                cout << "X";
                                gotoXY(x++, y);
                                num--;
                            }
                        }
                        else if (num == 4)
                        {
                            //gotoXY(x, ++y);
                            gotoXY(x, y);
                            cout << "L";
                            gotoXY(x++, y);
                            cout << "X";
                            gotoXY(x++, y);

                        }
                        else if (num >= 5 & num < 9)
                        {
                            if (num == 5)
                            {
                                //gotoXY(x, ++y);
                                gotoXY(x, y);
                                cout << "L";
                                gotoXY(x++, y);
                            }
                             else if (num > 5)
                             {
                                 //gotoXY(x, ++y);
                                 gotoXY(x, y);
                                 cout << "L";
                                 gotoXY(x++, y);

                             }
                            while (num > 5 & num < 9)
                            {
                                gotoXY(x, y);
                                cout << "X";
                                gotoXY(x++, y);
                                num--;
                            }
                        }
                    else if (num == 9)
                    {
                        //gotoXY(x, ++y);
                        gotoXY(x--,y);
                        gotoXY(x++, y);
                        cout << "X";
                        gotoXY(x++, y);
                        cout << "C";
                        //gotoXY(x++, y);
                    }
                   length--;
                   subscript++;
            }
            if (length == 1)
            {

                 ;
                        num = str[subscript]-'0';
                        if (num > 0 & num < 4)
                        {
                            while (num > 0 & num < 4)
                            {
                                gotoXY(x, y);
                                cout << "I";
                                gotoXY(x++, y);
                                num--;

                            }
                        }
                        else if (num == 4)
                        {
                            //gotoXY(x, ++y);
                            gotoXY(x, y);
                            cout << "IV";
                            gotoXY(x++, y);

                        }
                        else if (num >= 5 & num < 9)
                        {
                            if (num == 5)
                            {
                                //gotoXY(x, ++y);
                                gotoXY(x, y);
                                cout << "V";
                                gotoXY(x++, y);
                            }
                             else if (num > 5)
                             {
                                 //gotoXY(x, ++y);
                                 gotoXY(x, y);
                                 cout << "V";
                                 gotoXY(x++, y);
                                 //gotoXY(x, ++y);

                             }

                            while (num > 5 & num < 9)
                            {
                                gotoXY(x, y);
                                cout << "I";
                                gotoXY(x++, y);
                                num--;
                            }
                        }
                    else if (num == 9)
                    {
                        //gotoXY(x, ++y);
                        gotoXY(x++, y);
                        cout << "I";
                        gotoXY(x++, y);
                        cout << "X";
                        gotoXY(x+2, y);
                    }
                   length--;
                }
    //gotoXY(originalX, ++y);
    //cout << "\tThis is the number in Roman Numeral \n" << roman << "";
    cin.ignore();
    y+=1;
    gotoXY(originalX, ++y);
    cout << "Would you like to convert another number? [Y/N] :";
    y = 0;
    x = 1;
    cin >> prompt;
    prompt[0] = toupper(prompt[0]);
    while (prompt[0] != 'Y' & prompt[0] != 'N')
        {
            system("cls");
            y = 2;
            gotoXY(originalX, ++y);
            cout << "Sorry you have not inputted a right answer. Please try again" << endl;
            gotoXY(originalX, ++y);
            cout << "Would you like to convert an Arabic number to Roman Numeral?[Y/N]:";
            cin >> prompt;
            prompt[0] = toupper(prompt[0]);
        }
    cin.ignore();
    answer = prompt;
    cin.get();
    system ("cls");
        }
    }
}
/*void print()
{

}*/

int main ()
{
    int number = 0, length = 0, i = 0, j = 0;
    string str, roman;
    //str_to_int (str,number, length, i, j);
    ArabicNum_to_RomanNum(str, /*number,*/ length, roman, i, j);
    cin.ignore();
    return 0;
}