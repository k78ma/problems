class Solution:
    def getHint(self, secret, guess):
        bulls = 0
        cows = 0
        freq = [0] * 10  # Frequency array for digits 0-9
        
        # First pass: Count bulls and prepare for cow calculation
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                bulls += 1
            else:
                secret_digit = int(secret[i])
                guess_digit = int(guess[i])
                # Update frequency counts
                if freq[secret_digit] < 0:
                    cows += 1
                if freq[guess_digit] > 0:
                    cows += 1
                freq[secret_digit] += 1
                freq[guess_digit] -= 1

        return "{}A{}B".format(bulls, cows)
