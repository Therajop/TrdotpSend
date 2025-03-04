import requests

class Trdotpsend:
    @staticmethod
    def send(number, otp):
        url = f"https://api.wifiotp.xyz/SendotpNumber.php?number={number}&otp={otp}"
        response = requests.get(url)
        return response.text

# Usage
# from Trdotpsend import Trdotpsend
# Trdotpsend.send(number='1234567890', otp='1234')
