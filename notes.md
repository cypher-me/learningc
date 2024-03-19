## C Notes for me

### Format Specifiers

examples

```c

    #include <stdio.h>

int main() {
    // %s: String
    char my_string[] = "Hello, world!";
    printf("The string is: %s\n", my_string);

    // %d: Integer
    int num = 42;
    printf("The integer is: %d\n", num);

    // %c: Single character
    char ch = 'A';
    printf("The character is: %c\n", ch);

    // %f: Floating-point numbers
    float num1 = 3.14;
    double num2 = 6.28;
    printf("The float number is: %f\n", num1);
    printf("The double number is: %f\n", num2);

    // %lf: Double precision floating-point numbers
    double num3 = 123.456789;
    printf("The double number is: %lf\n", num3);

    // %u: Unsigned integers
    unsigned int uint = 123;
    printf("The unsigned integer is: %u\n", uint);

    // %x or %X: Integers in hexadecimal format
    int hex_num = 255;
    printf("The hexadecimal representation is: %x\n", hex_num);
    printf("The hexadecimal representation (capital) is: %X\n", hex_num);

    // %o: Integers in octal format
    int octal_num = 63;
    printf("The octal representation is: %o\n", octal_num);

    // %p: Pointers
    int *ptr = NULL;
    printf("The pointer address is: %p\n", (void *)ptr);

    return 0;
}


```

### Getting the size of a string and array

```c


    // Assuming you have defined the variable name
    printf("sizeof(name) : %d \n", sizeof(name));
    
    int my_array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int my_array_size = sizeof(my_array)/ sizeof(my_array[0]);

    printf("The size of the array is : %d  \n", my_array_size);


```

When dealinig with an array, `sizeof(my_array)` gives the size of the array in `bytes`

To get the number of elements in an array you divide by the first element `sizeof(my_array[0])`

### String Concatenation

- A space is a character
- The count starts at one
- Import `<string.h>` first

```c

    strncat(destination, source, no_of_characters_to copy);

```

```c


#include <stdio.h>
#include <string.h>

int main() {
    char name1[20] = "cypher";
    char name2[5] = " manu";

    strncat(name1, name2, 4);

    printf("name1 : %s \n", name1);
}

```

### For Loops 

- The format is as follows 

```c
    for(i = 0, i < 10, i++) {
        // Code to be looped through
    }
```


-Example of looping through an array

```c

    #include <stdio.h>

int main() {

    int my_array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int i;

    int my_array_size = sizeof(my_array)/ sizeof(my_array[0]);

    // printf("The size of the array is : %d  \n", my_array_size);

    for ( i = 0; i < my_array_size; i++)
    {
        printf("my_array[%d]  :  %d\n", i, my_array[i]);

    }
    

    return 0;


}

```

- Example of looping through a String to get all the characters


```c

    #include <stdio.h>

int main(){
    char * name = "cypher";
    char school[] = "KCA University";
    int i;

    printf("name : %s \n", name);
    printf("size of name : %d \n", sizeof(name));
    printf("school : %s \n", school);
    printf("size of school : %d \n", sizeof(school));

    // int value_less = sizeof(school) - 1;

    for (i = 0; i < sizeof(school); i++)
    {
        printf("school[%d] : %c \n", i, school[i]);
    }
    

    return 0;
}

```

### C Functions

```c

#include <stdio.h>

void greater_than_50(int number){
    if (number > 50)
    {
        printf("The number %d is greater than 50.\n", number);
    }else {
        printf("The number %d is less than 50.\n", number);
    }
    
}

int main() {

    int user_number;

    printf("Enter th number to test:  ");

    scanf("%d", &user_number);
    greater_than_50(user_number);

    return 0;
}

```

### static keyword
#### static variables

- `static` keyword increases the scope of the variable to the loacal file as some variable are only available in the function they are defined

```c


    #include <stdio.h>

    void count() {
        static int i = 0;
        i++;
        printf("print : %d\n", i);
    }

    int main() {

        count();
        count();
        return 0;
    }

```

- the output is `print : 1` and `print : 2`
- without the static the output would be `print : 1` and `print : 1`

#### static functions

- A static function in C has its scope limited to the file in which it is declared, meaning it cannot be accessed or called from other files. 

```c

    #include <stdio.h>

    // Function declaration
    static void static_function();

    int main() {
        printf("Calling static function from main...\n");
        
        // Calling the static function
        static_function();
        
        return 0;
    }

    // Static function definition
    static void static_function() {
        printf("This is a static function.\n");
}


```

### Pointer

- A pointer holds the memory address of a value(another variable)
- it points to the memory location where the value of the variable is stored rather than holding the value itself.
- The computer's memory is a sequential store of data, and a pointer points to a specific part of the memory.
- Pointers can be used to point to a large amount of memory, depending on how much we decide to read

