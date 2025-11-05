# Number Guessing Game

A simple command-line number guessing game to test your luck and logic.

https://roadmap.sh/projects/number-guessing-game

## Overview

In this project, you'll build a CLI-based number guessing game where the computer randomly selects a number, and the player tries to guess it within a limited number of attempts.
If the player guesses correctly, they win; otherwise, the game continues until they run out of chances.

## Requirements

The game should behave as follows:

1. Display a welcome message and the rules when the game starts.
2. Randomly select a number between **1 and 100**.
3. Ask the user to choose a **difficulty level**:
   - Easy (10 chances)
   - Medium (5 chances)
   - Hard (3 chances)
4. Allow the user to enter guesses through the command line.
5. Provide feedback after each guess:
   - If correct: display a congratulatory message and the number of attempts.
   - If incorrect: tell the user whether the number is higher or lower than their guess.
6. End the game when the user guesses correctly or runs out of chances.

## Sample Output

```plaintext
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
You have 5 chances to guess the correct number.

Please select the difficulty level:
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)

Enter your choice: 2

Great! You have selected the Medium difficulty level.
Let's start the game!

Enter your guess: 50
Incorrect! The number is less than 50.

Enter your guess: 25
Incorrect! The number is greater than 25.

Enter your guess: 35
Incorrect! The number is less than 35.

Enter your guess: 30
Congratulations! You guessed the correct number in 4 attempts.
