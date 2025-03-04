using System;
using System.Net;

class Trdotpsend {
    public static string Send(string number, string otp) {
        string url = $"https://api.wifiotp.xyz/SendotpNumber.php?number={number}&otp={otp}";
        WebClient client = new WebClient();
        return client.DownloadString(url);
    }

    // Usage
    // Console.WriteLine(Trdotpsend.Send("1234567890", "1234"));
}
