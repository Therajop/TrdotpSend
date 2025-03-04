const axios = require('axios');

class Trdotpsend {
    static async send(number, otp) {
        const url = `https://api.wifiotp.xyz/SendotpNumber.php?number=${number}&otp=${otp}`;
        const response = await axios.get(url);
        return response.data;
    }
}

module.exports = Trdotpsend;

// Usage
// const Trdotpsend = require('./trdotpsend');
// Trdotpsend.send('1234567890', '1234').then(console.log);
