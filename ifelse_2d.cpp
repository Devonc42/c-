//ifelse_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char thechar;
		char s = '|';
		char t = '.';
		char u = '\\';
		char v = '/';
		char w = '^';
		char x = '*';
		char y = '?';
		char z = ' ';
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
			  if (val == 1){
				  thechar = w;}
			  else if ( val == 2){
				  thechar = x;}
			  else if ( val == 3){
				  thechar = y;}
			  else if ( val == 4){
				  thechar = v;}
			  else if ( val == 5){
				  thechar = u;}
			  else if ( val == 6){
				  thechar = t;}
			  else if ( val == 7){
				  thechar = s;}
			  
			  else{
				  thechar = z;}
				  cout<<thechar;
			}
			cout<<"\n";
		}
	return 0;
}
