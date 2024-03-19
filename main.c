// #include <stdio.h>

// int main()
// {

//     int my_array[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     printf("The value of my_array[0][2] is : %d \n", my_array[0][2]);

//     return 0;

// }

// #include <stdio.h>

// int main() {

//     char * name = "cypher me";
//     char name2[] = "not cypher me";
//     char letter = 'Q';

//     printf("name : %s \n", name);
//     printf("name2 : %s age : %c \n", name2, letter);

//     printf("sizeof(name) : %d \n", sizeof(name));
//     // write a function to differentiate between name and name2
    

//     return 0;

// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name1[20] = "cypher";
//     char name2[5] = " manu";

//     strncat(name1, name2, 4);

//     printf("name1 : %s \n", name1);
// }


// #include <stdio.h>

// int main() {

//     int my_array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

//     int my_array_size = sizeof(my_array)/ sizeof(my_array[0]);

//     printf("The size of the array is : %d  \n", my_array_size);


// }



// #include <stdio.h>

// int main() {

//     int my_array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
//     int i;

//     int my_array_size = sizeof(my_array)/ sizeof(my_array[0]);

//     // printf("The size of the array is : %d  \n", my_array_size);

//     for ( i = 0; i < my_array_size; i++)
//     {
//         printf("my_array[%d]  :  %d\n", i, my_array[i]);

//     }
    

//     return 0;


// }


// #include <stdio.h>

// int main(){
//     char * name = "cypher";
//     char school[] = "KCA University";
//     int i;

//     printf("name : %s \n", name);
//     printf("size of name : %d \n", sizeof(name));
//     printf("school : %s \n", school);
//     printf("size of school : %d \n", sizeof(school));

//     // int value_less = sizeof(school) - 1;

//     for (i = 0; i < sizeof(school); i++)
//     {
//         printf("school[%d] : %c \n", i, school[i]);
//     }
    

//     return 0;
// }

// #include <stdio.h>

// void greater_than_50(int number){
//     if (number > 50)
//     {
//         printf("The number %d is greater than 50.\n", number);
//     }else {
//         printf("The number %d is less than 50.\n", number);
//     }
    
// }

// int main() {

//     int user_number;

//     printf("Enter th number to test:  ");

//     scanf("%d", &user_number);
//     greater_than_50(user_number);

//     return 0;
// }


// #include <stdio.h>

// void count() {
//     static int i = 0;
//     i++;
//     printf("print : %d\n", i);
// }

// int main() {

//     count();
//     count();
//     return 0;
// }



// #include <stdio.h>

// // Function declaration
// static void static_function();

// int main() {
//     printf("Calling static function from main...\n");
    
//     // Calling the static function
//     static_function();
    
//     return 0;
// }

// // Static function definition
// static void static_function() {
//     printf("This is a static function.\n");
// }
