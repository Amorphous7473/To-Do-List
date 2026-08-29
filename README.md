# 📝 CLI To-Do List

A lightweight, terminal-based To-Do List application written in C++. It allows you to add, display, and remove tasks with persistent file storage, plus optional integration to display your pending tasks directly in `fastfetch`.

---

## ✨ Features

- **Add Tasks:** Append new tasks to your list.
- **View Tasks:** Display your pending tasks with clean indexing.
- **Delete Tasks:** Remove specific tasks by index without corrupting the file.
- **Fastfetch Support:** Lightweight script/binary integration to show your pending tasks on terminal startup.

---

## 🛠 Prerequisites

Make sure you have the following installed:

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

### 2. Compile and Run the CLI App
```bash
g++ -O2 todo.cpp -o todo && ./todo
```

---

## ⚡ Fastfetch Integration

To show your pending tasks inside `fastfetch`:

### Step 1: Make the runner script executable
```bash
chmod +x script.sh
```

### Step 2: Update your Fastfetch config
Open your config file (usually at `~/.config/fastfetch/config.jsonc`) and add the `command` module inside the `modules` array:

```jsonc
{
  "type": "command",
  "key": "Tasks",
  "text": "/absolute/path/to/To-Do-List/script.sh"
}
```

> **Note:** Replace `/absolute/path/to/To-Do-List/` with the actual path to your cloned repository.

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
