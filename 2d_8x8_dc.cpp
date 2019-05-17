// dc 8x8
#include <iostream>
#include <stdio.h>
int dc();  //define int dc(); function

int main()
{
	dc();//call dc function
	return 0;
}
// start of dc() function
int dc(){
		int r,c;//row and column
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{0,0,0,0,0,0,0,0} ,
			{0,0,1,0,0,3,0,0} ,
			{0,0,1,0,0,3,0,0} ,
			{0,0,1,0,0,3,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,2,0,0,0,0,2,0} ,
			{0,0,2,2,2,2,0,0} ,
			{0,0,0,0,0,0,0,0}
		};

			red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
					switch (val){
						case 0:
							red = 0; green = 0; blue = 0;
							break;
						case 1:
							red = 255; green = 255; blue = 0;
							break;
						case 2: // green
							red = 55; green = 200; blue = 20;
							break;
						case 3:
							red = 255; green = 255; blue = 0;
							break;
						default:
							red = 255; green = 255; blue = 0;
						 break;
					 }//end select
					 	//output the colors
						std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
					}//end c
					std::cout<<"\n";
		}//end r
	return 0;
}//end dc() function
