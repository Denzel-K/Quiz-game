#include <iostream>
using namespace std; 

int main() {
  string questions[] = {
    "1. What year was C++ invented?",
    "2. Who invented C++?",
    "3. What is the predecessor of C++?",
    "4. What converts C++ into machine code?"
  };
  
  string options[][4] = {
    {"A. 1963", "B. 1985", "C. 1975", "D. 1989"},
    {"A. Elon Musk", "B. Steve Jobs", "C. Bill Gates", "D. Bjarne Stroustrup"},
    {"A. COBOL", "B. Assembly", "C. C", "D. B++"},
    {"A. Compiler", "B. Calculator", "C. CPU", "D. Interpreter"},
  };
  
  char answerKey[] = {'B', 'D', 'C', 'A'};
  
  int q_size = sizeof(questions)/sizeof(string);
  char user_choice;
  int score;
  
  for (int i = 0; i < q_size; i++){
    cout << questions[i] << '\n';
    
    for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
      cout << options[i][j] << '\n';
    }
    
    cin >> user_choice;
    user_choice = toupper(user_choice);
    
    if (user_choice == answerKey[i]){
      cout << "CORRECT" << '\n';
      score++;
    }
    else {
      cout << "WRONG !!" << '\n';
      cout << "Answer: " << answerKey[i] << '\n';
    }
  }
  
  cout << "_*_*_* RESULTS *_*_*_" << '\n';
  cout << "Correctly answered: " << score << " out of " << q_size << '\n';
  
  
  return 0;
}