# 📝 CLI To-Do List

A lightweight, terminal-based To-Do List application written in C++. Manage tasks with persistent file storage and display pending tasks directly inside `fastfetch` without breaking your ASCII art layout.

---

## ✨ Features

- **Add Tasks:** Append new tasks quickly.
- **View Tasks:** Display your pending tasks with clean indexing.
- **Delete Tasks:** Remove specific tasks by index without corrupting the file.
- **Fastfetch Integration:** Dedicated module setup to display tasks cleanly below your system specs and ASCII art.

---

## 🛠 Prerequisites

Ensure you have the following installed:

- **GCC / G++ Compiler** (supporting C++11 or higher)
- **Git**
- *(Optional)* **Fastfetch** (for dashboard integration)

---

## 🚀 Getting Started

### 1. Clone the repository
```bash
git clone [https://github.com/Amorphous7473/To-Do-List.git](https://github.com/Amorphous7473/To-Do-List.git)
cd To-Do-List
```

### 2. Compile and Run the Interactive CLI
```bash
g++ -O2 todo.cpp -o main && ./main
```

---

## ⚡ Fastfetch Integration

To display your tasks cleanly inside Fastfetch without messing up your ASCII art alignment, place the task command after your system modules and color blocks.

### Step 1: Make the runner script executable
```bash
chmod +x script.sh
```

### Step 2: Update your Fastfetch config
Open `~/.config/fastfetch/config.jsonc` and add the `command` module at the bottom of your `modules` array:

```jsonc
{
  "modules": [
    // ... your standard system modules (os, host, uptime, etc.) ...

    "break",
    {
      "type": "colors",
      "key": " ",
      "keyIcon": "",
      "symbol": "block"
    },
    "break",
    {
      "type": "command",
      "key": "Tasks",
      "keyIcon": "",
      "text": "$HOME/Stuff/To-Do-List/script.sh"
    }
  ]
}
```

> **Note:** Adjust the path `"$HOME/Stuff/To-Do-List/script.sh"` to match where you cloned the repository.

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
