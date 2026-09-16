#include <iostream>
using namespace std;

int main()
{
    // Answers given by 8 students to 10 questions
    char students[8][10] =
    {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };


    // Correct answers (answer key)
    char key[10] =
    {
        'D', 'B', 'D', 'C', 'C',
        'D', 'A', 'E', 'A', 'D'
    };

    // Grade each student
    for (int student = 0; student < 8; student++)
    {
        int correct = 0;

        for (int question = 0; question < 10; question++)
        {
            if (students[student][question] == key[question])
            {
                correct++;
            }
        }

        cout << "Student " << student
             << " got " << correct
             << " out of 10 correct." << endl;
    }

    return 0;
}