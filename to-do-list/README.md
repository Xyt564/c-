# 📝 To-Do List (C++ Console App)

A simple **console-based To-Do List application** written in C++.
It allows you to **add, view, and remove tasks** with persistence — tasks are saved to a file so they remain available between runs.

---

## 🚀 Features

* Add new tasks
* View all tasks
* Remove tasks by number
* Tasks are saved to `tasks.txt` automatically
* Input validation (no crashes from invalid input)

---

## 📦 How to Build & Run

### Prerequisites

* A C++ compiler (e.g., `g++`, `clang++`, or MSVC)
* Git (optional, for cloning)

### Clone the repository

```bash
git clone https://github.com/Xyt564/cpp-projects.git
cd to-do-list
```

### Build

Using `g++`:

```bash
g++ main.cpp -o todo
```

### Run

```bash
./todo
```

---

## 🖥️ Example Usage

```
----------------- TO DO LIST -----------------
1. Add Task
2. View Tasks
3. Remove Task
4. Exit
Choose an option: 1
Enter Task: Finish C++ project
✅ Task added!

----------------- TO DO LIST -----------------
1. Add Task
2. View Tasks
3. Remove Task
4. Exit
Choose an option: 2
Your Tasks:
1. Finish C++ project
```

---

## 📂 File Persistence

* All tasks are stored in `tasks.txt` in the project directory.
* When you restart the app, your tasks are automatically loaded.

---

## 🔮 Future Improvements

* Mark tasks as **done** instead of deleting
* Add **priority levels** (High/Medium/Low)
* Add **due dates**
* Improve UI with colors

---

## 🛠️ Tech Stack

* **Language:** C++ 17
* **Libraries:** Standard Library only (`<iostream>`, `<vector>`, `<string>`, `<fstream>`)

---

## 🤝 Contributing

Pull requests are welcome.
For major changes, please open an issue first to discuss what you’d like to improve.

---

## 📜 License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.

---
