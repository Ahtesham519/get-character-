//getche.cpp
// demonstrate counts character and words typed in 

#include <iostream>
using namespace std;
#include <conio.h>;         //for getche()

int main()
{
int chcount=0;   // counts non-spce characters
int wdcount=1;   // counts spaces between words
char ch = 'a';   //check it isn't '\r'

cout<<"Enter a phrase:  ";
while (ch  != '\r')       //loop until enter typed
{
ch = getche();    //read one character
if (  ch==' ' )    //if its a space
wdcount++;     //count a word

else                 //otherwise,
chcount++           //count a character 
}    //display result

cout<<"\nwords= "<<wdcount<<endl
<<"Letters = "<<(chcount-1)<<endl;
return 0;
}
