#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void findGrade(int,int);

struct Student{
	int id;
	string name;
	int age;
	char gender;
	float score;
	char grade;
};

//public or global variables
float sum = 0, totalAge = 0;
int malecount = 0;
int femalecount = 0;
Student students[5];

int main(){
	int id = 10659863;
	ofstream ifile;
	
	for(int i = 0; i < 5; i++){
		students[i].id = (id+5);
		id = students[i].id;
		cout << "Enter student " << (i + 1) << "'s name :";
		cin >> students[i].name;
		cout << "Enter student " << (i + 1) << "'s age :";
		cin >> students[i].age;
		totalAge += students[i].age;
		cout << "Enter student " << (i + 1) << "'s gender :";
		cin >> students[i].gender;
		if(students[i].gender == 'M'){
			malecount++;
		}else if(students[i].gender == 'F'){
			femalecount++;
		}
		cout << "Enter student " << (i + 1) << "'s score :";
		cin >> students[i].score;
		findGrade(students[i].score,i);
		sum += students[i].score;
		cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n" << endl;
	}
	
	//printing to the file 
	
	ifile.open("message.txt");
	
	ifile <<  "ID Number\t\t Name\t\tAge\t\tGender\t\t Score\t\t Grade" << endl;
	
	for(int i = 0; i < 5; i++){
		ifile << students[i].id << "\t\t" << students[i].name << "\t\t" << students[i].age << "\t\t" << students[i].gender << "\t\t " <<students[i].score << "\t\t" << students[i].grade << endl;
	}
	
	// print the bottom part of the file 
	
	ifile << " ******************************************************************" << endl;
	ifile << " ******************************************************************" << endl;
	
	ifile << "Average score : " << (sum/5) << endl;
	ifile << "Average ages : " << (totalAge/5) <<endl;
	ifile << "Number of males : " << malecount << endl;
	ifile << "Number of females : " << femalecount << endl;
	
	
	
	return 0;
}



void findGrade(int score, int position){
	
		if(score <= 39){
			students[position].grade = 'F';
		}else if(score > 39 && score < 50){
			students[position].grade = 'E';
		}else if(score > 49 && score < 60){
			students[position].grade = 'D';
		}else if(score > 59 && score < 70){
			students[position].grade = 'C';
		}else if(score > 69 && score < 80){
			students[position].grade = 'B';
		}else if(score > 79 && score < 101){
			students[position].grade = 'A';
		}
		
}

