#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    do{
        cout << "Type the following phrase and then press return:\n"
            << phrase << endl;

        getline(cin,input);

        double finalPercentage = 0;
        int charCounter = 0;
        for(int i = 0; i < input.length(); i++)
        {
          if(input[i] == phrase[i])
            charCounter +=1;
        }
        int stringLengthDiff = 0;
        if(input.length() > phrase.length())
          stringLengthDiff = input.length() - phrase.length();
        else if(input.length() < phrase.length())
          stringLengthDiff = phrase.length() - input.length();

        if(stringLengthDiff != 0 )
          charCounter = charCounter - stringLengthDiff*2;

        finalPercentage = (charCounter/phrase.length())*100.0;
        cout << "Results: " << finalPercentage << "% accurate" << endl;


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
