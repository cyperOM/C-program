#include <stdio.h>


void reed();
void resetcolor();

void main() {



int i;
for ( i = 0; i < 7; i++)
{

    

}


	char help_list[][20] = {"version","help","shutdown","getdate","setdate","gettime","settime"};
	char help_instructions[][90] = {"this will print the version ","this will bring the list","close system ","formate xx/xx/xxxx","setdate xx/xx/xxxx","gettime xx/xx/xx","settime xx/xx/xx"};
 int buffersize;

int i;
for ( i = 0; i < 7; i++)
{

    switch (i)
    {
    case 3:
        reed();
        break;
    
    default:
    resetcolor();
        break;
    }
  buffersize=99;
	sys_req(WRITE,DEFULT_DEVICE,help_list[i],&buffersize);
    buffersize=99;

  	sys_req(WRITE,DEFULT_DEVICE,help_instructions[i],&buffersize);
}

}

void reed () {
  printf("\033[1;31m");
}


void resetcolor () {
  printf("\033[0m");
}