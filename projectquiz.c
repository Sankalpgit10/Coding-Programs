#include <stdio.h>

int main() {
    int score = 0;
    int answer;
  
    printf("Welcome to the Quiz Game\n\n");

// Question 1
    printf("Question 1: What is the capital of India?\n");
    printf("1. Kerala\n2. Mumbai\n3. New Delhi\n4. Uttarakhand\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 3) {
        score++;
    }
   
    // Question 2
    printf("\nQuestion 2: Which one is the national bird of India?\n");
    printf("1. Indian Peacock\n2. Sparrow\n3. Humming Birds\n4. Flamingos\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 1) {
        score++;
    }

    // Question 3
    printf("\nQuestion 3: What is 5 + 7?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 3) {
        score++;
    }

    // Question 4
    printf("\nQuestion 4: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 2) {
        score++;
    }

    // Question 5
    printf("\nQuestion 5: What is the highest mountain range in the world?\n");
    printf("1. Alps \n2. Aravalli\n3. Killanjo\n4. Himalayas\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 4) {
        score++;
    
   }
    // Display score
    printf("\nYour total score is: %d/5\n", score);
    
    if (score == 5) {
        printf("Excellent!\n");
    } else if (score >= 3) {
        printf("Good job!\n");
    } else {
        printf("Better luck next time.\n");
    }
}
    
