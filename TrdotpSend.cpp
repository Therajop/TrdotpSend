#include <iostream>
#include <curl/curl.h>

class Trdotpsend {
public:
    static std::string send(std::string number, std::string otp) {
        CURL* curl = curl_easy_init();
        if (curl) {
            std::string url = "https://api.wifiotp.xyz/SendotpNumber.php?number=" + number + "&otp=" + otp;
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            CURLcode res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
        return "OTP Sent";
    }
};

// Usage
// std::cout << Trdotpsend::send("1234567890", "1234");
