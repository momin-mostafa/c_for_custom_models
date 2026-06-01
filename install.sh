#!/usr/bin/env bash

set -e

echo "Detecting operating system..."

OS="$(uname -s)"

if [ "$OS" = "Darwin" ]; then
echo "macOS detected"

```
if ! command -v brew >/dev/null 2>&1; then
    echo "Homebrew is required but not installed."
    echo "Install it from https://brew.sh"
    exit 1
fi

brew install googletest
```

elif [ "$OS" = "Linux" ]; then
echo "Linux detected"

```
if command -v apt-get >/dev/null 2>&1; then
    sudo apt-get update
    sudo apt-get install -y libgtest-dev cmake build-essential

elif command -v dnf >/dev/null 2>&1; then
    sudo dnf install -y gtest-devel cmake gcc-c++

elif command -v pacman >/dev/null 2>&1; then
    sudo pacman -Sy --noconfirm gtest cmake gcc

else
    echo "Unsupported Linux package manager."
    exit 1
fi
```

else
echo "Unsupported operating system: $OS"
exit 1
fi

echo "Dependencies installed successfully."
