import java.net.*;
import java.io.*;

public class Trdotpsend {
    public static String send(String number, String otp) throws Exception {
        String url = "https://api.wifiotp.xyz/SendotpNumber.php?number=" + number + "&otp=" + otp;
        URL obj = new URL(url);
        BufferedReader in = new BufferedReader(new InputStreamReader(obj.openStream()));
        String inputLine;
        StringBuilder response = new StringBuilder();
        while ((inputLine = in.readLine()) != null)
            response.append(inputLine);
        in.close();
        return response.toString();
    }
    
    // Usage
    // System.out.println(Trdotpsend.send("1234567890", "1234"));
}
