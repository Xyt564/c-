# 🔐 CLI Login System (C++)

A simple **command-line login and registration system** written in C++.  
It demonstrates basic **file I/O**, **user input handling**, and **simple account management**.  

⚠️ **Disclaimer:** This project is for **educational purposes only**.  
It is **not secure** (passwords are stored in plaintext, no encryption, no validation).  
Do **not** use it for real authentication or sensitive data storage.

---

## 🚀 Features

- **Sign-Up**  
  Create a new account with username, email, and password. Data is saved to `logindata.txt`.

- **Login**  
  Enter username and password to access the system. Credentials are verified against saved data.

- **Reset Password**  
  Recover an account by providing the correct username and email, then set a new password.

- **File Persistence**  
  User data is stored in `logindata.txt` and remains available across program runs.

---

## 📂 Project Structure

```

cli-login/
│
├── main.cpp        # Source code
├── logindata.txt   # User data file (created after first signup)
└── README.md       # Project documentation

````

---

## ⚙️ Usage

### 1. Compile
```bash
g++ main.cpp -o login
````

### 2. Run

```bash
./login
```

### 3. Menu Options

```
1. Login
2. Sign-up
3. Reset password
4. Exit
```

---

## 📝 Example

**Signup**

```
Enter your username: testuser
Enter your email address: test@mail.com
Enter your password: 12345
Signup successful! Data saved.
```

**Login**

```
Enter your username: testuser
Enter your password: 12345
Login successful! Welcome back, testuser.
```

---

## 🔮 Future Improvements

* Use **password hashing** (e.g., SHA-256, bcrypt) instead of plaintext storage.
* Add **input validation** (minimum password length, email format, etc.).
* Implement **looping menu** so the program doesn’t exit after one action.
* Split into multiple source/header files for better organization.

---

## 📄 License

# MIT License — free to use, modify, and share, but **not recommended for real-world use**.
