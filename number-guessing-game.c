#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int secret, guess;

//    Initialize the random number generator 
  srand(time(0));

//    Generate a random number between 1 and 100 
  secret = rand() % 100 + 1;

//   Prompt the user to enter a guess 
  printf("Enter your guess (1-100): ");
  scanf("%d", &guess);

//   looping until the user guesses correctly 
  while (guess != secret) {
    if (guess < secret) {
      printf("Too low. Try again: ");
    } else {
      printf("Too high. Try again: ");
    }
    scanf("%d", &guess);
  }

//  If we get here, the user has guessed correctly 
  printf("Congratulations buddy !!! You guessed the secret number %d\n", secret);

  return 0;
}
