# Open Port Scanner

## Description

This project is a simple open port scanner written in C++. It allows you to scan a range of ports on a target device to determine which ports are open and available for connections. This can be useful for monitoring the security of your device or network.

## Installation

1. Clone or download the repository to your local machine:
    ```bash
    git clone https://github.com/yourusername/open-port-scanner.git
    ```

2. Navigate to the project directory:
    ```bash
    cd open-port-scanner
    ```

3. Compile the program using a C++ compiler (e.g., g++):
    ```bash
    g++ -o port_scanner port_scanner.cpp
    ```

4. Run the program:
    ```bash
    ./port_scanner
    ```

## Usage

1. After launching the program, input the IP address of the device you want to scan (by default, it will scan the local host, i.e., 127.0.0.1).
2. Enter the range of ports you want to scan. The program will check all ports in the specified range and display which ones are open.

## How to Check Which Service is Using a Port

To determine which service or process is using an open port, you can run the following commands:

### On Linux:

- Using `netstat`:
    ```bash
    sudo netstat -tuln | grep <port_number>
    ```

- Or using `lsof`:
    ```bash
    sudo lsof -i :<port_number>
    ```

### On Windows:

- Using `netstat`:
    ```cmd
    netstat -aon | findstr <port_number>
    ```

Replace `<port_number>` with the port you want to check. These commands will display information about the process or service using the specified port.

