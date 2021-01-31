#include <stdio.h>
int main() {


	char help_list[][20] = {"version","help","shutdown","getdate","setdate","gettime","settime"};

for (int i = 0; i < 7; ++i)
{

    printf("%s\n",help_list[i]);
}
return 0;

}