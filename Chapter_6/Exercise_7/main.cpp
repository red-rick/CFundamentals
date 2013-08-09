#include<iostream>
#include<cctype>

const int kStrSize = 20;

bool isVowel(char);

int main()
{
	int vowels = 0, consonants = 0, other = 0;
	char word[20];

	std::cout << "Enter words (q to quit):\n";

	while ((std::cin >> word) && (strcmp(word, "q") != 0)) {
		if (strlen(word) > 0) {
			if (std::isalpha(word[0])) 
				if(isVowel(word[0]))
					vowels++;
				else
					consonants++;
			else
				other++;
		}
				
	}

	std::cout << vowels << " words begin with vowels\n"
			  << consonants << " words begin with consonants\n"
			  << other << " other";

	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}

bool isVowel(char ch)
{
	return (ch == 'a' || ch == 'o' || ch == 'e' || ch == 'i' || ch == 'y' || ch == 'u' ||
			ch == 'A' || ch == 'O' || ch == 'E' || ch == 'I' || ch == 'Y' || ch == 'U');
}