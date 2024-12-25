#include <string>
#include <random>
std::string encryptCaesarCipher(const std::string& message, int shift) {
    std::string encryptedMessage = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encryptedChar = base + ((c - base + shift) % 26);
            encryptedMessage += encryptedChar;
        } else {
            encryptedMessage += c;
        }
    }

    return encryptedMessage;
}
std::string encryptsubstitutioncipher(const std::string& s, long seed) {
    std::string encryptedText = s;
    short list[95];
    for (short i = 32; i < 127; i++)
        list[i - 32] = i;

    std::mt19937 rng(seed);
    std::uniform_int_distribution<int> distribution(0, 94);

    for (int i = 94; i > 0; i--) {
        int j = distribution(rng);
        short temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }

    for (size_t i = 0; i < encryptedText.length(); i++) {
        char ch = encryptedText[i];
        char temp = static_cast<char>(list[static_cast<int>(ch) - 32]);
        encryptedText[i] = temp;
    }

    return encryptedText;
}
std::string decryptCaesarCipher(const std::string& ciphertext, int shift) {
    std::string plaintext = "";

    // Iterate through each character in the ciphertext
    for (char c : ciphertext) {
        // Check if the character is an uppercase letter
        if (isupper(c)) {
            // Determine the new character by applying the reverse Caesar cipher shift
            char decryptedChar = ((c - 'A' - shift + 26) % 26) + 'A';
            // Append the decrypted character to the plaintext
            plaintext += decryptedChar;
        }
        // Check if the character is a lowercase letter
        else if (islower(c)) {
            // Determine the new character by applying the reverse Caesar cipher shift
            char decryptedChar = ((c - 'a' - shift + 26) % 26) + 'a';
            // Append the decrypted character to the plaintext
            plaintext += decryptedChar;
        }
        else {
            // If the character is not a letter, keep it unchanged
            plaintext += c;
        }
    }

    return plaintext;
}
