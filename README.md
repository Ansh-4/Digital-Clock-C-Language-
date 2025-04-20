# Digital-Clock-C-Language-
This project is a simple terminal-based stopwatch built in C. It displays time in HH : MM : SS format and updates every second, simulating the behavior of a digital stopwatch.

### 📜 Description

- Displays elapsed time from `00 : 00 : 00` up to `23 : 59 : 59`
- Clears the screen and redraws the timer every second
- Written using standard C libraries
- Uses `sleep()` to create a real-time delay of 1 second
- Designed for Linux/Mac (uses `system("clear")`)

---

### 💻 How to Run

```bash
gcc clock.cpp -o clock
./clock
```

> Make sure you're on Linux or macOS. On Windows, use `system("cls")` instead of `system("clear")` and `Sleep(1000)` instead of `sleep(1)`.

---

### 🧠 Code Features

- Manual tracking of seconds, minutes, and hours
- Resets after 24 hours
- Leading zero formatting using `%02d`
- Clears the terminal screen on each loop for a clean UI

---

### 🛠️ Requirements

- C compiler (like GCC)
- Unix-based terminal (Linux/Mac)  
  > Windows users will need slight modifications

---

### 📂 File Structure

```
stopwatch/
│
├── clock.cpp     # Main source code
└── README.md       # Project info
```

---

### 🚀 Future Ideas

- Add pause/resume functionality  
- Add keypress controls (start, stop, reset)  
- Add lap timer feature  
- Port to Windows with cross-platform compatibility

---

### 👨‍💻 Author

Created by Ansh-4 — feel free to fork or improve the project!

---
