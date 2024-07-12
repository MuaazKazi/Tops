//Create an application that can perform all string related operations
//● reverse a string
//● Concatenation 
//● Palindrome
//● Copy a string 
//● Length of the string 
//● Frequency of character in s string 
//● Find number of vowels and consonants 
//● Find number of blank spaces and digits 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
// Function to reverse a string
void reverse_string(char string[]) {
    int length = strlen(string);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}

// Function to concatenate two strings
void concatenate_strings(char string1[], char string2[]) {
    printf("%s%s\n", string1, string2);
}

// Function to check if a string is a palindrome
int is_palindrome(char string[]) {
    int length = strlen(string);
    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; 
    // Palindrome
}

// Function to copy a string
void copy_string(char dest[], char src[]) {
    printf("string1 : %s\n", src);
    printf("string 2: %s\n", dest);
    strcpy(dest, src);
    printf("Copied string1 : %s\n", src);
    printf("string 2: %s", dest);
}

// Function to find the length of a string
int string_length(char string[]) {
    return strlen(string);
}

// Function to count the frequency of each character in a string
void count_character_frequency(char string[]) {
    int frequency[256] = {0}; // Assuming ASCII characters
    for (int i = 0; string[i] != '\0'; i++) {
        frequency[(int)string[i]]++;
    }

    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
}

// Function to count the number of vowels and consonants in a string
void count_vowels_and_consonants(char string[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        char ch = tolower(string[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to count the number of digits and blank spaces in a string
void count_digits_and_spaces(char string[]) {
     

    int digits = 0, spaces = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (isdigit(string[i])) {
            digits++;
        } else if (isspace(string[i])) {
            spaces++;
        }
    }
    printf("Number of digits: %d\n", digits);
    printf("Number of blank spaces: %d\n", spaces);
}


// Main function
int main() {
    char string[100];
    char string2[100];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate strings\n");
        printf("3. Check palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of characters in a string\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count digits and blank spaces\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", string);
                printf("Reversed string: ");
                reverse_string(string);
                break;
            case 2:
                printf("Enter the first string: ");
                scanf("%s", string);
                printf("Enter the second string: ");
                scanf("%s", string2);
                printf("Concatenated string: ");
                concatenate_strings(string, string2);
                break;
            case 3:
                printf("Enter a string: ");
                scanf("%s", string);
                if (is_palindrome(string)) {
                    printf("String is Palindrome\n");
                } else {
                    printf("Stirnf is not Palindrome\n");
                }
                break;
            case 4:
                printf("Enter the first string: ");
                scanf("%s", string);
                printf("Enter the second string: ");
                scanf("%s", string2);
                printf("Copying string :\n");
                copy_string(string2, string);
                break;
            case 5:
                printf("Enter a string: ");
                scanf("%s", string);
                printf("Length of the string: %d\n", string_length(string));
                break;
            case 6:
                printf("Enter a string: ");
                scanf("%s", string);
                count_character_frequency(string);
                break;
            case 7:
                printf("Enter a string: ");
                scanf("%s", string);
                count_vowels_and_consonants(string);
                break;
            case 8:
            printf("Enter a string: ");
            scanf("%s",string);
            //scanf("%[^\n]s",&string);
           //fgets(string, sizeof(string),stdin);
                count_digits_and_spaces(string);
                break;
            case 9:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 9.\n");
        }

    } while (choice != 9);

    return 0;
}



