#include <iostream>
#include <print>
#include <random>

void printWelcomeMessage();
int getDifficulty();
int getRandomNumber();

int main() {
  printWelcomeMessage();

  const int secret_number = getRandomNumber();
  const int max_attempts = getDifficulty();
  int guess;
  int attempts{};
  time_t end_time;
  double elapsed_time;
  time_t start_time = time(nullptr);

  while (true) {
    std::println("Enter your guess:");
    std::cin >> guess;
    attempts++;

    if (attempts >= max_attempts) {
      end_time = time(nullptr);
      elapsed_time = difftime(end_time, start_time);
      std::println("Sorry, you've reached the maximum number of attempts.");
      std::println("The secret number was {}.", secret_number);
      std::println("Elapsed time: {:.2f} seconds.", elapsed_time);
      break;
    }

    if (guess < secret_number) {
      std::println("Too low!");
    } else if (guess > secret_number) {
      std::println("Too high!");
    } else {
      end_time = time(nullptr);
      elapsed_time = difftime(end_time, start_time);
      std::println("Congratulations! You guessed the number in {} attempts.",
                   attempts);
      std::println("Elapsed time: {:.2f} seconds.", elapsed_time);
      break;
    }
  }

  return 0;
}

void printWelcomeMessage() {
  std::println("Welcome to the Number Guessing Game!");
  std::println("I'm thinking of a number between 1 and 100.");
  std::println("You have 5 chances to guess the correct number.");
  std::println();
  std::println("Please select the difficulty level:");
  std::println("1. Easy (10 chances)");
  std::println("2. Medium (5 chances)");
  std::println("3. Hard (3 chances)");
  std::println();
  std::println("Enter your choice: ");
}

int getDifficulty() {
  std::string input;
  int choice;
  while (true) {
    try {
      std::getline(std::cin, input);
      choice = std::stoi(input);
    } catch (const std::invalid_argument &e) {
      std::println("Invalid input. Please enter a valid number.");
      return getDifficulty();
    }

    switch (choice) {
    case 1:
      return 10;
    case 2:
      return 5;
    case 3:
      return 3;
    default:
      std::println("Invalid choice. Please select a valid difficulty level.");
      return getDifficulty();
    }
  }
}

int getRandomNumber() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, 100);
  return dis(gen);
}
