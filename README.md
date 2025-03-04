

# WifiOTP-Sender
This is a lightweight library to **send OTP messages** using the API **[wifiotp.xyz](https://api.wifiotp.xyz)**.

### 🌐 API URL:

https://api.wifiotp.xyz/SendotpNumber.php?number={number}&otp={OTP}

---

## 🚀 Supported Languages
| Language           | File Name        | Usage                         |
|------------------|----------------|------------------------------|
| Python          | `Trdotpsend.py` | `from Trdotpsend import Trdotpsend` <br> `Trdotpsend.send('number', 'OTP')` |
| JavaScript      | `trdotpsend.js` | `const Trdotpsend = require('./trdotpsend');` <br> `Trdotpsend.send('number', 'OTP').then(console.log);` |
| PHP             | `Trdotpsend.php` | `echo Trdotpsend::send('number', 'OTP');` |
| Java            | `Trdotpsend.java` | `System.out.println(Trdotpsend.send("number", "OTP"));` |
| C++             | `Trdotpsend.cpp` | `std::cout << Trdotpsend::send("number", "OTP");` |
| C#              | `Trdotpsend.cs` | `Console.WriteLine(Trdotpsend.Send("number", "OTP"));` |

---

## 🔥 How to Use

### Python
```python
from Trdotpsend import Trdotpsend

Trdotpsend.send("1234567890", "1234")


---

JavaScript (Node.js)

const Trdotpsend = require('./trdotpsend');

Trdotpsend.send("1234567890", "1234").then(console.log);


---

PHP

require 'Trdotpsend.php';

echo Trdotpsend::send("1234567890", "1234");


---

Java

public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println(Trdotpsend.send("1234567890", "1234"));
    }
}


---

C++

#include "Trdotpsend.cpp"
#include <iostream>

int main() {
    std::cout << Trdotpsend::send("1234567890", "1234");
    return 0;
}


---

C#

using System;

class Program {
    static void Main() {
        Console.WriteLine(Trdotpsend.Send("1234567890", "1234"));
    }
}


---

📌 Installation

1. Clone the Repository



git clone https://github.com/therajop/Trdotpsend.git

2. Import the language file into your project.


3. Use Trdotpsend Class in your project.




---

🔑 Contribution

If you want to contribute:

Fork the repo

Make your changes

Open a Pull Request



---

🚀 Author

TrdPro (The Real Developer)


---

🌐 API Credit

All credits go to wifiotp.xyz for providing free OTP API.

---

Would you like the **GitHub Repository folder structure** automatically with all files? 📂

