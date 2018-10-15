#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Student{
	int id;
	string name;
	int age;
	char gender;
	float score;
	char grade;
};

float sum = 0;
int malecount = 0;
int femalecount = 0;


int main(){
	int id = 10659863;
	Student students[5];
	ofstream ifile;
	
	for(int i = 0; i < 5; i++){
		students[i].id = (id+5);
		id = students[i].id;
		cout << "Enter student " << (i + 1) << "'s name :";
		cin >> students[i].name;
		cout << "Enter student " << (i + 1) << "'s age :";
		cin >> students[i].age;
		cout << "Enter student " << (i + 1) << "'s gender :";
		cin >> students[i].gender;
		if(students[i].gender == 'M'){
			malecount++;
		}else if(students[i].gender == 'F'){
			femalecount++;
		}
		cout << "Enter student " << (i + 1) << "'s score :";
		cin >> students[i].score;
		if(students[i].score <= 39){
			students[i].grade = 'F';
		}else if(students[i].score > 39 && students[i].score < 50){
			students[i].grade = 'E';
		}else if(students[i].score > 49 && students[i].score < 60){
			students[i].grade = 'D';
		}else if(students[i].score > 59 && students[i].score < 70){
			students[i].grade = 'C';
		}else if(students[i].score > 69 && students[i].score < 80){
			students[i].grade = 'B';
		}else if(students[i].score > 79 && students[i].score < 101){
			students[i].grade = 'A';
		}
		
		sum += students[i].score;
	}
	
	//printing to the file 
	
	ifile.open("message.txt");
	
	ifile <<  " ID Number \t\t Name \t\t Age \t\t Gender \t\t Score \t\t Grade" << endl;
	
	for(int i = 0; i < 5; i++){
		ifile << students[i].id << "\t\t" << students[i].name << "\t\t" << students[i].age << "\t\t" << students[i].gender << "\t\t" <<students[i].score << "\t\t" << students[i].grade << endl;
	}
	
	// print the bottom part of the file 
	
	ifile << " ******************************************************************" << endl;
	ifile << " ******************************************************************" << endl;
	
	ifile << "Average score : " << (sum/5) << endl;
	ifile << "Number of males : " << malecount << endl;
	ifile << "Number of females : " << femalecount << endl;
	
	
	
	return 0;
}



