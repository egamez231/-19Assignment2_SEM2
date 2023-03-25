/*
    ASSIGNMENT 2 CODE
    NAME: EZRY BIN EDINOLFI
    MATRIX NUMBER: 222020543
    COURSE: COMPUTER ENGINEERING GROUP 1
*/

/*----------------------------------------------------------------Program Full Code--------------------------------------------------------------------------------*/
//Library Declaration
#include <iostream>
using namespace std;



/*-------------------------------------------------------------------Class Setup-----------------------------------------------------------------------------------*/
class EngineType { // class are setup as EngineType

// Private object are define that can't be access from outside the class.
    int maxrpm;
    float HP;
    double Tourque;

// Public Class are define so it can be manipulate via outside the class.
public :


// Construct declaration to setup default data are all 0
    EngineType (){
        maxrpm = 0;
        HP = 0;
        Tourque = 0;
    }

// Function inside the class to display data of the program.
    void printInfo(){
    cout << "Max RPM (Rotation Per Minute) :"<< maxrpm << endl;
    cout << "Horsepower :" << HP << endl;
    cout << "Torque : "<< Tourque << endl;
    }

    void setInfo (int, float, double);  //---------------------------

    void getInfo();                     //  Function Prototype in the Class

    void calcTorque();                  //

    void calcHP();                      // --------------------------

    ~EngineType(){
    cout << "Object Destructed" << endl; // Destructor declared
    }
};

/*----------------------------------------------------------------Main Section-------------------------------------------------------------------------------------*/
int main (){

    // Creating object of class using default constructor

    EngineType engine1;
    EngineType engine2;

    engine1.setInfo(5000, 300, 0); // Fix value that given to the data for engine1
    engine1.calcTorque(); // Calculation are using function in the class

    engine2.getInfo(); // Function to get input from the user (Torque and Max RPM)
    engine2.calcHP(); // Calculation to calculate the Horsepower

    cout << endl;
    cout << endl;

    // Function to display the data for both object.
    engine1.printInfo();
    engine2.printInfo();
    cout << endl;
    cout << endl;

    return 0;
}


/*------------------------------------------------------------Class Function Definition ----------------------------------------------------------------------------*/

// Set the data value
void EngineType::setInfo(int x, float y, double z){

    maxrpm = x;
    HP = y;
    Tourque = z;
}


// Get user input for the data
void EngineType::getInfo(){
    cout << "Input RPM: ";
    cin >> maxrpm;
    cout << "Input Tourque: ";
    cin >> Tourque;
}



// Calculation Function to calculate the Torque
void EngineType::calcTorque(){

    double power;

    power = HP * 1.013869738;

    Tourque = (power * 3000) / (3.14159265359 * maxrpm);

}

// Calculation Function to calculate the Horsepower
void EngineType::calcHP(){

    double power;

    power = (Tourque * 3.14159265359 * maxrpm)/3000;

    HP = power / 1.013869738;
}





/*  Copyright 2023 UniMAP Engineering
    Author: Ezry Edinolfi
    Email: s222020543@studentmail.unimap.edu.my
*/
