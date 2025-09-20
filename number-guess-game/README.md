# 🎯 Number Guessing Game in C++

This is a simple **number guessing game** written in C++.
The player tries to guess a randomly generated number between **1 and 1000**.
When the correct number is guessed, a secret message is revealed!

---

## 🚀 Features

* Random number generation between **1 and 1000**
* Hints for each guess: "Too low!" or "Too high!"
* Reveals a **fun secret message** when guessed correctly
* Uses standard C++ libraries (`<iostream>`, `<cstdlib>`, `<ctime>`)

---

## 📂 How It Works

1. The program generates a random number between 1 and 1000.
2. The player enters guesses in a loop.
3. After each guess, the program tells the player whether the guess is too low, too high, or correct.
4. Once the player guesses correctly, the secret message is displayed.

---

## 🖥️ Example Run

```
Welcome to the Guessing Game!
Guess the number (1-1000) to unlock a secret message.
Enter your guess: 500
Too low!
Enter your guess: 750
Too high!
Enter your guess: 625
Correct! Here's your secret message:

   ____  _               _         __  __                                 
  / ___|| |__   __ _ ___| |__     |  \/  | ___  _ __ ___   ___  _ __ _   _
  \___ \| '_ \ / _` / __| '_ \    | |\/| |/ _ \| '_ ` _ \ / _ \| '__| | | |
   ___) | | | | (_| \__ \ | | |   | |  | | (_) | | | | | | (_) | |  | |_| |
  |____/|_| |_|\__,_|___/_| |_|   |_|  |_|\___/|_| |_| |_|\___/|_|   \__, |
                                                                      |___/
```

---

## ⚡ How to Compile and Run

### Using g++

1. Open a terminal and navigate to your project folder.
2. Compile the program:

   ```bash
   g++ numguessgame.cpp -o guessing_game (or numguessgame whatever u like)
   ```
3. Run the program:

   ```bash
   ./guessing_game
   ```

### Using an IDE

* Create a new C++ project, paste the code, and run the program.

---

## 🔮 Possible Improvements

* Add a **limit on the number of guesses**.
* Track and display **number of attempts**.
* Allow the player to **play multiple rounds**.
* Customize the **range of numbers** for difficulty levels.

---
