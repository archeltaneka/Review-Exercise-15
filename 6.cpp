#include <iostream>
using namespace std;

// declares GradedActivity class
class GradedActivity{
	private:
		int grammarPoints;
		int spellingPoints;
		int correctLength;
		int contentPoints;
	public:
		// default constructor
		GradedActivity()
		{
			grammarPoints = 0;
			spellingPoints = 0;
			correctLength = 0;
			contentPoints = 0;
		}
		
		// constructor 2
		GradedActivity(int grammarPoints, int spellingPoints, int correctLength, int contentPoints)
		{
			this->grammarPoints = grammarPoints;
			this->spellingPoints = spellingPoints;
			this->correctLength = correctLength;
			this->contentPoints = contentPoints;
		}
		
		// set grammar points
		void setGrammarPoints(int grammarP)
		{
			grammarPoints = grammarP;
		}
		
		// set spelling points
		void setSpellingPoints(int spellingP)
		{
			spellingPoints = spellingP;
		}
		
		// set correct length
		void setCorrectLength(int correctL)
		{
			correctLength = correctL;
		}
		
		// set content points
		void setContentPoints(int contentP)
		{
			contentPoints = contentP;
		}
		
		// get grammar points
		int getGrammarPoints() const
		{
			return grammarPoints;
		}
		
		// get spelling points
		int getSpellingPoints() const
		{
			return spellingPoints;
		}
		
		// get correct length
		int getCorrectLength() const
		{
			return correctLength;
		}
		
		// get content points
		int getContentPoints() const
		{
			return contentPoints;
		}
};

// define Essay class derived from GradedActivity class
class Essay : public GradedActivity
{
	protected:
		int totalPoints;
	public:
		// default constructor
		Essay()
		{
			totalPoints = 0;
		}
		
		// constructor 2
		Essay(int, int, int, int, int);
		
		// set total points
		void setTotalPoints(int totalP)
		{
			totalPoints = totalP;
		}
		
		// get total points
		int getTotalPoints() const
		{
			return totalPoints;
		}
};
Essay::Essay(int gramP, int spelP, int corrL, int contP, int total) : GradedActivity(gramP, spelP, corrL, contP)
{
	totalPoints = total;
}

// main function
int main(){
	
	// declares variables for user input and total score
	int inputGrammarPoint;
	int inputSpellingPoint;
	int inputCorrectLength;
	int inputContentPoint;
	int totalPoints;
	
	// print welcome message
	cout << "This program will calculate students' the total score of an essay" << endl;
	cout << "Grammar: 30 points" << endl;
	cout << "Spelling: 20 points" << endl;
	cout << "Correct length: 20 points" << endl;
	cout << "Content: 30 points" << endl;
	cout << endl;
	
	// get prompt from the user
	cout << "Input your scoring \n";

	cout << "Grammar: ";
	cin >> inputGrammarPoint;
	
	cout << "Spelling: ";
	cin >> inputSpellingPoint;
	
	cout << "Correct length: ";
	cin >> inputCorrectLength;
	
	cout << "Content: ";
	cin >> inputContentPoint;
	
	cout << endl;
	
	// calculates total point
	totalPoints = inputGrammarPoint + inputSpellingPoint + inputCorrectLength + inputContentPoint;
	
	// creates an Essay object
	Essay studentEssay(inputGrammarPoint, inputSpellingPoint, inputCorrectLength, inputContentPoint, totalPoints);
	
	// print the judgement
	cout << "Student's Essay Score" << endl;
	cout << "----------------------" << endl;
	cout << "Grammar: " << studentEssay.getGrammarPoints() << endl;
	cout << "Spelling: " << studentEssay.getSpellingPoints() << endl;
	cout << "Correct Length: " << studentEssay.getCorrectLength() << endl;
	cout << "Content: " << studentEssay.getContentPoints() << endl;
	cout << "Total Point: " << studentEssay.getTotalPoints() << endl;
	
	return 0;
	
}
