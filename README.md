# Phishing URL Detector (C++)

This is a simple cybersecurity project created as part of my learning in C++. The main idea of this project is to identify whether a given URL might be unsafe or a phishing link.

## About the Project
Phishing is a common cyber attack where fake websites are used to steal user information. In this project, I used basic string operations in C++ to check for patterns that are often found in suspicious URLs.

## Features
- Checks if the URL contains '@' symbol
- Detects insecure "http" links
- Looks for common phishing keywords like login, verify, bank
- Identifies unusually long URLs
- Menu-driven program for multiple checks

## Technologies Used
- C++

## How to Run
1. Compile the program using a C++ compiler (g++)
2. Run the executable file
3. Enter a URL to check whether it is safe or not

## Example
Input: http://fake-login@bank.com  
Output: Warning: Suspicious URL detected

## What I Learned
- Basic string handling in C++
- Simple pattern checking
- Introduction to cybersecurity concepts like phishing
  
## Limitations
- This project uses basic rules and may not detect all phishing URLs
- It is designed for learning purposes only

## Author
Eathala Chaitanya Rajkumar 
