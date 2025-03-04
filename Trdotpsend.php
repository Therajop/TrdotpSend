class Trdotpsend {
    public static function send($number, $otp) {
        $url = "https://api.wifiotp.xyz/SendotpNumber.php?number=$number&otp=$otp";
        return file_get_contents($url);
    }
}

// Usage
// echo Trdotpsend::send('1234567890', '1234');
