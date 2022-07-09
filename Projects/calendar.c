//Calender//

#include <stdio.h>

int main() {
	int month, day;
	for (month = 1; month <= 12; month++){
	switch (month){
deafult:
day = 31;
break;
case 4:
case 6:
case 9:
case 11:
day = 30;
break:
case 2:
day = 28;
break;
}
	printf("Month: %d days: %d\n", month, day);
	}
	return 0;
}
