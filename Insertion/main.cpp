#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{

    ifstream fin; //Allow users to read files in
    ofstream fout; //Allow us to open the file for reading
    vector<int> numbers; //Creating a list of numbers
    int temp; //Temporary Varaible holding the contents of the file
    int l;
    int i;
    string User_Answer; //Containing the User answers

    
    fin.open("numbers.txt"); //Open the file

    if (fin.is_open()) //If the file is open
    {
        while (!fin.eof())//While the file is not closed
        {
            fin >> temp; //Holding the file numbers
            numbers.push_back(temp);//We are adding them to the vector
        }

        cout << "UNSORTED: ";
        
        for (i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

        cout << "SORTED: ";
    
        sort(numbers.begin(),numbers.end());//Showing the vector in the correct order from 0<i
    
        for (i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;

        cout << "Would you like to add a number to the vector?" << endl;
        cin >> User_Answer;

        if (User_Answer == "yes" || User_Answer == "YES" || User_Answer == "Yes")
        {
            
            int User_Answer;
            
            cout << "Please add the value you want to add." << endl;
            cin >> User_Answer;

            numbers.push_back(User_Answer);
            
            cout << "NEW SORTED: ";
            
            sort(numbers.begin(),numbers.end());

            for (i = 0; i < numbers.size(); i++)
            {
                cout << numbers[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Thank you have a wonderful day." << endl; 
        }
            
        fin.close();


    return 0;
}
