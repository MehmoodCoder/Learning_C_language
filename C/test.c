// #include <stdio.h>
// #include <time.h>

// int main()
// {
//    time_t currentTime;
//    time(&currentTime); // Get the current time

//   printf("Current time: %s", ctime(&currentTime));
// return 0;
// }

// #include <stdio.h>
// #include <time.h>

// int main()
//{
//    time_t n = time(NULL);
//    struct tm *t8 = localtime(&n);

//   printf("Year: %d\n", t8->tm_year + 1900);
//   printf("Month: %d\n", t8->tm_mon + 1);
//   printf("Day: %d\n", t8->tm_mday);
//   printf("Hour: %d\n", t8->tm_hour);
//   printf("Minute: %d\n", t8->tm_min);
//   printf("Second: %d\n", t8->tm_sec);
//   return 0;
//}

// #include <stdio.h>
// #include <time.h>

// int main()
//{
//    time_t now = time(NULL);
//    struct tm *tim = localtime(&now);
//    char buffer[100];

//   strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", tim);
//   printf("Formatted time: %s\n", buffer);
//   return 0;
//}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int* ptr = malloc(sizeof(int*));
// 	*ptr = 10;
// 	printf("%d\n", *ptr);
// 	printf("%p\n", ptr);
// 	printf("%p\n", &ptr);
// 	free(ptr);
// 	ptr = NULL;
// 	//printf("%p\ntt", ptr);
// 	//printf("%d\ngh", *ptr); // Undefined behavior - accessing memory that was freed
// 	printf("by by");
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int16_t i=9;
// 	char* ptr = malloc(sizeof(char*));
// 	*ptr = 'a';
// 	*(ptr+1) = 'b';
// 	*(ptr+2) = 'c';
// 	*(ptr+3) = 'd';
// 	ptr[4] = 'e';
// 	ptr[5] = 'f';
// 	ptr[6] = 'g';
// 	ptr[7] = 'h';
// 	for(int k =0 ; k<8; k++)
// 	{
// 		printf("%c\n",*ptr++);
// 		printf("%p\n", ptr);
// 	}
// 	ptr-=8;
// 	printf("\n%c\n", *ptr);
// 	printf("%s\n", ptr);
// 	printf("%p\n", ptr);
// 	printf("%p\n", &ptr);
// 	printf("%p\n", &(*ptr));
// 	free(ptr);
// 	ptr = NULL;
// 	//printf("%p\ntt", ptr);
// 	//printf("%d\ngh", *ptr); // Undefined behavior - accessing memory that was freed
// 	printf("by by\n");
// 	printf("%zu\n", sizeof(char*));
// 	printf("%ld\n", sizeof(char));
// 	printf("%ld\n", sizeof(int*));
// 	printf("%ld\n", sizeof(int));
// 	printf("%ld\n", sizeof(long));
// 	printf("%ld\n", sizeof(long long));
// 	printf("%ld\n", sizeof(short));
// 	printf("%ld\n", sizeof(short*));
// 	printf("%ld\n", sizeof(float));
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int *numbers = (int*) malloc(10000 * sizeof(int));

//   if (numbers == NULL) {
//     printf("Memory allocation failed.\n");
//     return 1;
//   }

//   printf("Memory allocation successful!\n");

//   free(numbers);
//   numbers = NULL;
//   printf("Memory %d \n",*numbers);

//   return 0;
// }

// #include <stdio.h>

//// #define DEBUG

// int main()
//{
// #ifdef DEBUG
//    printf("Debug mode is ON\n");
// #endif
// #ifndef DEBUG
//    printf("Debug mode is OFF\n");
// #endif
//    return 0;
// }