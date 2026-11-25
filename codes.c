#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tryAgain;

    do
    {
        system("cls");

        char c;
        int choice, shape, i, j, rows, size, inverted, space;

        printf("┌───────────────────────┐\n");
        printf("   Multi-Console Calcu   \n");
        printf("└───────────────────────┘\n");
        printf(" 1) Pattern Generator\n");
        printf(" 2) Pascal's Triangle\n");
        printf(" 3) Grade Calculator\n");
        printf(" 4) Palindrome Checker\n");
        printf(" 5) Exit\n\n");

            printf("•°. Choose a number: ");
            if (scanf("%d", &choice) != 1) {
                printf("\n== Error: That is not a valid number! ==\n");
                while (getchar() != '\n');
                choice = 0; 

            } else if ((c = getchar()) != '\n') {
                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                while (getchar() != '\n');
                choice = 0; 

            } else if (choice <= 0 || choice > 5) {
                printf("\n== Error! Choose between (1-5) only. ==\n");
            }

        // PATTERN GENERATOR
        if (choice == 1)
        {
            do {
                printf("\n");

                printf("─────────────────────────\n");
                printf("∆∆∆∆∆∆   SHAPES   ∆∆∆∆∆∆\n\n");

                printf("1) Right Triangle\n");
                printf("2) Square\n");
                printf("3) Isosceles Triangle\n");
                printf("4) Inverted Right Triangle\n");
                printf("5) Christmas Tree\n");
                printf("6) Exit\n\n");

                printf("•°. Choose Shape # ");
                if (scanf("%d", &shape) != 1) {
                    printf("\n== Error: That is not a valid number! ==\n");
                    while (getchar() != '\n');
                    shape = 0; 

                } else if ((c = getchar()) != '\n') {
                    printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                    while (getchar() != '\n');
                    shape = 0; 

                } else if (shape <= 0 || shape > 6) {
                    printf("\n== Error! Choose between (1-6) only. ==\n");
                }

                printf("\n");

                    // RIGHT TRIANGLE
                    if (shape == 1)
                    {
                        do {
                            printf("┌────────────────────┐\n");
                            printf("    RIGHT TRIANGLE    \n");
                            printf("└────────────────────┘\n\n");

                            printf("► Input a number of rows (1-100): ");
                            if (scanf("%d", &rows) != 1) {
                            printf("\n== Error: That is not a valid number! ==\n");
                            printf("--> Please enter a positive number (1-100).\n");
                            while (getchar() != '\n');
                            rows = 0; 

                            } else if ((c = getchar()) != '\n') {
                                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                                printf("--> Please enter a positive number (1-100).\n");
                                while (getchar() != '\n');
                                rows = 0; 

                            } else if (rows <= 0 || rows > 100) {
                                printf("\n=========== Invalid Input! ===========\n");
                                printf("--> Please enter a positive number (1-100).\n");
                                
                            } else {
                                printf("\n");
                            

                                for (i = 1; i <= rows; i++)
                                {
                                    for (j = 1; j <= i; j++)
                                    {
                                        printf("*");
                                    }
                                    printf("\n");
                                    
                                }
                                printf("\n>> Here's your Right Triangle with %d rows! <<\n", rows);

                            }

                        // TRY AGAIN QUESTION
                        printf("\nDo you want to use Right Triangle Calculator again? (Y/N): ");
                        scanf(" %c", &tryAgain);
                        printf("\n");

                        } while (tryAgain == 'y' || tryAgain == 'Y');   
                    }

                    // SQUARE
                    else if (shape == 2)
                    {
                        do {
                            printf("┌─────────────┐\n");
                            printf("    SQUARE    \n");
                            printf("└─────────────┘\n\n");

                            printf("Input a number (1-50): ");
                            if (scanf("%d", &size) != 1) {
                            printf("\n== Error: That is not a valid number! ==\n");
                            printf("--> Please enter a positive number (1-50).\n");
                            while (getchar() != '\n');
                            size = 0; 

                            } else if ((c = getchar()) != '\n') {
                                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                                printf("--> Please enter a positive number (1-50).\n");
                                while (getchar() != '\n');
                                size = 0; 

                            } else if (size <= 0 || size > 50) {
                                printf("\n=========== Invalid Input! ===========\n");
                                printf("--> Please enter a positive number (1-50).\n");

                            } else {
                                printf("\n");
                            

                                for (i = 1; i <= size; i++)
                                {
                                    for (j = 1; j <= size; j++)
                                    {
                                        printf("* ");
                                    }
                                    printf("\n");
                                    
                                }
                            printf("\n>> Here's your %dx%d Square! <<\n", size, size);
                            }

                        // TRY AGAIN QUESTION
                        printf("\nDo you want to use Square Calculator again? (Y/N): ");
                        scanf(" %c", &tryAgain);
                        printf("\n");

                        } while (tryAgain == 'y' || tryAgain == 'Y');
                    }   

                    // ISOSCELES TRIANGLE
                    else if (shape == 3)
                    {
                        do {
                            printf("┌───────────────────────┐\n");
                            printf("   ISOSCELES TRIANGLE  \n");
                            printf("└───────────────────────┘\n\n");

                            printf("► Input a number of rows (1-50): ");
                            if (scanf("%d", &rows) != 1) {
                            printf("\n== Error: That is not a valid number! ==\n");
                            printf("--> Please enter a positive number (1-50).\n");
                            while (getchar() != '\n');
                            rows = 0; 

                            } else if ((c = getchar()) != '\n') {
                                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                                printf("--> Please enter a positive number (1-50).\n");
                                while (getchar() != '\n');
                                rows = 0; 

                            } else if (rows <= 0 || rows > 50) {
                                printf("\n=========== Invalid Input! ===========\n");
                                printf("--> Please enter a positive number (1-50).\n");

                            } else {
                                printf("\n");

                            for (i = 1; i <= rows; i++)
                            {
                                for (space = 1; space <= rows - i; space++)
                                {
                                    printf(" ");
                                }
                                for (j = 1; j <= (2 * i - 1); j++)
                                {
                                    printf("*");
                                }

                                printf("\n");
                            }
                            printf("\n>> Here's your Isosceles Triangle with %d rows! <<\n", rows);
                            }

                        // TRY AGAIN QUESTION
                        printf("\nDo you want to use Isosceles Triangle Calculator again? (Y/N): ");
                        scanf(" %c", &tryAgain);
                        printf("\n");
                        } while (tryAgain == 'y' || tryAgain == 'Y');
                    }

                    // INVERTED RIGHT TRIANGLE
                    else if (shape == 4)
                    {
                        do {
                            printf("┌───────────────────────────┐\n");
                            printf("   INVERTED RIGHT TRIANGLE    \n");
                            printf("└───────────────────────────┘\n\n");

                            printf("Input a number (1-50): ");
                            if (scanf("%d", &inverted) != 1) {
                            printf("\n== Error: That is not a valid number! ==\n");
                            printf("--> Please enter a positive number (1-50).\n");
                            while (getchar() != '\n');
                            inverted = 0; 

                            } else if ((c = getchar()) != '\n') {
                                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                                printf("--> Please enter a positive number (1-50).\n");
                                while (getchar() != '\n');
                                inverted = 0; 

                            } else if (inverted <= 0 || inverted > 50) {
                                printf("\n=========== Invalid Input! ===========\n");
                                printf("--> Please enter a positive number (1-50).\n");

                            } else {
                                printf("\n");

                            for (i = inverted; i >= 1; i--)
                            {
                                for (j = 1; j <= i; j++)
                                {
                                    printf("* ");
                                }
                                printf("\n");
                            }
                            printf("\n>> Here's your Inverted Right Triangle with %d rows! <<\n", inverted);
                            }

                        // TRY AGAIN QUESTION
                        printf("\nDo you want to use Inverted Triangle Calculator again? (Y/N): ");
                        scanf(" %c", &tryAgain);
                        printf("\n");
                        } while (tryAgain == 'y' || tryAgain == 'Y');
                    }

                    // CHRISTMAS TREE
                    else if (shape == 5)
                    {
                        do {
                            printf("┌────────────────────┐\n");
                            printf("    CHRISTMAS TREE       \n");
                            printf("└────────────────────┘\n\n");

                            int i = 0, j = 0, space = 0, height = 0;

                            printf("► Enter the height of the Christmas Tree (1-50): ");
                            if (scanf("%d", &height) != 1) {
                            printf("\n== Error: That is not a valid number! ==\n");
                            printf("--> Please enter a positive number (1-50).\n");
                            while (getchar() != '\n');
                            height = 0; 

                            } else if ((c = getchar()) != '\n') {
                                printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                                printf("--> Please enter a positive number (1-50).\n");
                                while (getchar() != '\n');
                                height = 0; 

                            } else if (height <= 0 || height > 50) {
                                printf("\n=========== Invalid Input! ===========\n");
                                printf("--> Please enter a positive number (1-50).\n");
                                
                            } else {
                                printf("\n");
                                printf("\t*°• Merry Christmas! .•.°*\n\n");

                                //CHRISTMAS TREE
                                for (i=1; i<=height; i++){

                                    for (space = height - 1; space >= i; space--) {
                                        printf(" ");
                                    }
                                        for (j=1; j<=i; j++){
                                            printf("* ");
                                        } 

                                    printf("\n");
                                }

                                for (i = height - 2; i <= height; i++){

                                    for (space = height - 1; space >= i; space--) {
                                        printf(" ");
                                    }
                                        for (j=1; j<=i; j++){
                                            printf("* ");
                                        }          
                                    printf("\n");
                                }

                                //TREE TRUNK
                                for (i = 0; i <= 3; i++){

                                    for (j = 0; j <= height - 3; j++){
                                        printf(" ");
                                    }   

                                    printf("##");       
                                    printf("\n");                            
                                }    
                            
                            printf("\n*. Here's your %d-tier Christmas Tree! .*\n", height);
                            }   

                        // TRY AGAIN QUESTION
                        printf("\nDo you want to use Christmas Tree again? (Y/N): ");
                        scanf(" %c", &tryAgain);
                        printf("\n");

                        } while (tryAgain == 'y' || tryAgain == 'Y');  

                    } else if (shape == 6) {
                        printf("\n");
                        
                    }

            // TRY AGAIN QUESTION
            printf("\nDo you want to return to the SHAPES MENU? (Y/N): ");
            scanf(" %c", &tryAgain);
            printf("\n");

            } while (tryAgain == 'y' || tryAgain == 'Y');       
        }

        // PASCALINE TRIANGLE
        else if (choice == 2)
        {
            do {
                printf("┌─────────────────────┐\n");
                printf("   PASCALINE TRIANGLE    \n");
                printf("└─────────────────────┘\n\n");

                unsigned long long coef = 1;
                int rows, space, i, j;

                printf("Enter the no. of rows (1-20): ");
                    if (scanf("%d", &rows) != 1) {
                    printf("\n== Error: That is not a valid number! ==\n");
                    printf("--> Please enter a positive number (1-20).\n");
                    while (getchar() != '\n');
                    rows = 0; 

                    } else if ((c = getchar()) != '\n') {
                        printf("\n== Error: Whole numbers only, no decimals or letters! ==\n");
                        printf("--> Please enter a positive number (1-20).\n");
                        while (getchar() != '\n');
                        rows = 0; 

                    } else if (rows <= 0 || rows > 20) {
                        printf("\n=========== Invalid Input! ===========\n");
                        printf("--> Please enter a positive number (1-20).\n");

                    } else {
                        printf("\n");

                    for (i = 0; i < rows; i++) {
                        for (space = 1; space <= rows - i; space++) {
                            printf("   ");
                        }

                        for (j = 0; j <= i; j++) {
                            if (j == 0 || i == 0) {
                                coef = 1;
                            } else {
                                coef = coef * (i - j + 1) / j;
                            }
                            printf("%5llu ", coef);
                        }
                    printf("\n");                
                    }
                    printf("\n\t >> Here's your Pascaline Triangle with %d rows! <<\n\n", rows);
                }    

                // TRY AGAIN QUESTION
                printf("\nDo you want to use Pascaline Triangle Calculator again? (Y/N): ");
                scanf(" %c", &tryAgain);
                printf("\n");

            } while (tryAgain == 'y' || tryAgain == 'Y');
        }

        // GRADE CALCULATOR
        else if (choice == 3)
        {
            do {
                float prelim, midterm, prefinal, final;
                float total, average;

                printf("\n");

                printf("┌────────────────────┐\n");
                printf("   GRADE CALCULATOR    \n");
                printf("└────────────────────┘\n\n");

                printf("Enter your grades (1.0 to 5.0):\n\n");

                while (1) {
                    printf("► Enter Prelim grade: ");
                    if (scanf("%f", &prelim) != 1) {
                        printf("\n== Error: That is not a valid number! ==\n\n");
                        while (getchar() != '\n');
                    } else if (getchar() != '\n') {
                        printf("\n== Error: Numbers only, no extra letters, spaces, or symbols! ==\n\n");
                        while (getchar() != '\n');
                    } else if (prelim < 1.0 || prelim > 5.0) {
                        printf("\n== Error: Grade must be between 1.0 and 5.0! ==\n\n");
                    } else {
                        break;
                    }
                }
                    printf("\n");

                while (1) {
                    printf("► Enter Midterm grade: ");
                    if (scanf("%f", &midterm) != 1) {
                        printf("\n== Error: That is not a valid number! ==\n\n");
                        while (getchar() != '\n');
                    } else if (getchar() != '\n') {
                        printf("\n== Error: Numbers only, no extra letters, spaces, or symbols! ==\n\n");
                        while (getchar() != '\n');
                    } else if (midterm < 1.0 || midterm > 5.0) {
                        printf("\n== Error: Grade must be between 1.0 and 5.0! ==\n\n");
                    } else {
                        break; 
                    }
                }
                    printf("\n");

                while (1) {
                    printf("► Enter Pre-final grade: ");
                    if (scanf("%f", &prefinal) != 1) {
                        printf("\n== Error: That is not a valid number! ==\n\n");
                        while (getchar() != '\n');
                    } else if (getchar() != '\n') {
                        printf("\n== Error: Numbers only, no extra letters, spaces, or symbols! ==\n\n");
                        while (getchar() != '\n');
                    } else if (prefinal < 1.0 || prefinal > 5.0) {
                        printf("\n== Error: Grade must be between 1.0 and 5.0! ==\n\n");
                    } else {
                        break; 
                    }
                }
                    printf("\n");

                while (1) {
                    printf("► Enter Final grade: ");
                    if (scanf("%f", &final) != 1) {
                        printf("\n== Error: That is not a valid number! ==\n\n");
                        while (getchar() != '\n');
                    } else if (getchar() != '\n') {
                        printf("\n== Error: Numbers only, no extra letters, spaces, or symbols! ==\n\n");
                        while (getchar() != '\n');
                    } else if (final < 1.0 || final > 5.0) {
                        printf("\n== Error: Grade must be between 1.0 and 5.0! ==\n\n");
                    } else {
                        break; 
                    }
                }
                    printf("\n");
                    

                total = prelim + midterm + prefinal + final;
                average = (float)total / 4.0;

                printf("\n□□□□□□□□ RESULTS □□□□□□□□□\n\n");

                printf("■ Prelim: %.2f\n", prelim);
                printf("■ Midterm: %.2f\n", midterm);
                printf("■ Pre-Final: %.2f\n", prefinal);
                printf("■ Final: %.2f\n\n", final);
                printf("□□□□□□ Average: %.2f □□□□□□\n\n", average);


                if (average <= 3.0)
                {
                    printf("┌──────────────────┐\n");
                    printf("   Status: PASSED    \n");
                    printf("└──────────────────┘\n\n");

                    printf(">> MISSION SUCCESS: Congratulations! SANA ALL! <<\n\n");
                }

                else 
                {
                    printf("┌──────────────────┐\n");
                    printf("   Status: FAILED   \n");
                    printf("└──────────────────┘\n\n");

                    printf(">> MISSION FAILED: You liked the subject so much you're taking it twice! <<\n\n");
                }

                // TRY AGAIN QUESTION
                printf("\nDo you want to use Grade Calculator again? (Y/N): ");
                scanf(" %c", &tryAgain);
                printf("\n");

            } while (tryAgain == 'y' || tryAgain == 'Y');
        }
            

        // PALINDROME CHECKER
        else if (choice == 4)
        {
            do {
                printf("┌──────────────────────┐\n");
                printf("   PALINDROME CHECKER    \n");
                printf("└──────────────────────┘\n\n");

                char word[100];
                char clean[100];
                char flipped[100];
                int length, i, j = 0;
                int isPalindrome = 1;
                int hasInvalid = 0;

                printf("► Enter a single word: ");
                scanf("%99s", word);
                printf("\n");

                if (getchar() != '\n')
                {
                    while (getchar() != '\n'); 
                    printf(">> Error: Please enter a SINGLE word only (no spaces). <<\n");
                }
                else
                {
                    length = strlen(word);

                    for (i = 0; i < length; i++)
                    {
                        if (word[i] >= 'A' && word[i] <= 'Z')
                        {
                            clean[j] = word[i] + 32;
                            j++;
                        }
                        else if (word[i] >= 'a' && word[i] <= 'z')
                        {
                            clean[j] = word[i];
                            j++;
                        }
                        else
                        {
                            hasInvalid = 1;
                            break;
                        }
                    }
                    clean[j] = '\0';

                    if (hasInvalid == 1)
                    {
                        printf(">> Error: Input must contain letters only (no numbers or symbols). <<\n");
                    }
                    else if (j < 2)
                    {
                        printf(">> Error: Please enter at least 2 letters. <<\n");
                    }
                    else
                    {
                        for (i = 0; i < length; i++) {

                            flipped[i] = word[length - 1 - i];

                        }

                        flipped[length] = '\0';

                        for (i = 0; i < j / 2; i++) {

                            if (clean[i] != clean[j - 1 - i])
                            {
                                isPalindrome = 0;
                                break;
                            }

                        }

                        printf(">> Flipped word: \"%s\" <<\n\n", flipped);

                        if (isPalindrome == 1) {
                            printf(">> \"%s\" is a PALINDROME! <<\n", word);
                        } else {
                            printf(">> \"%s\" is NOT a palindrome. <<\n", word);
                        }
                    }
                }
                // TRY AGAIN QUESTION
                printf("\nDo you want to use Palindrome Checker again? (Y/N): ");
                scanf(" %c", &tryAgain);
                printf("\n");
                
            } while (tryAgain == 'y' || tryAgain == 'Y');
        }
        else if (choice == 5) 
        {
            printf("\n");
            break;
            
        }

        // TRY AGAIN QUESTION
        printf("\nDo you want to return to the MAIN MENU? (Y/N): ");
        scanf(" %c", &tryAgain);
        printf("\n");

    } while (tryAgain == 'y' || tryAgain == 'Y');

    printf(">> Thank you for using our console! <<\n");
    return 0;
}