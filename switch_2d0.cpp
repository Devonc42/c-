//ifelse_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word = "Angelf0x17";
		int val = 0;
		int m[9][9] = {
			{0,0,0,0,0,0,0,3,0} ,
			{0,0,0,0,0,0,3,0,0} ,
			{0,0,0,0,1,0,3,3,0} ,
			{0,0,0,4,6,5,0,0,0} ,
			{0,0,4,6,2,6,5,0,0} ,
			{0,0,7,6,6,6,7,0,0} ,
			{0,0,7,6,3,6,7,0,0} ,
			{0,0,7,6,3,6,7,0,0} ,
			{0,0,7,6,3,6,7,0,0} ,
		};

		  for (r = 0; r < 9; r++){
		  for (c = 0; c < 9; c++){
			val = m[r][c];
			switch ( val ){
			case 1:
			  word = "^";
			  break;
			case 2:
			  word = "*";
			  break;
			case 3:
			  word = "?";
			  break;
			case 4:
			  word = "/";
			  break;
			case 5:
			  word = "\\";
			  break;
			case 6:
			  word = ".";
			  break;
			case 7:
			  word = "|";
			  break;
			default:
			  word =" ";
			  break;
			}

		cout<<word;
		}
			cout<<"\n";
		}
	return 0;
}
