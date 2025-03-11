/* Quinci did .....*/
/* Sydney did .....*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>


void readFile(string inputFilename, double V_N[], double V_E[], double V_D[], double yaw[], double pitch[], double roll[], int size);

void yawMatFunc(double yaw_A, double yawMat[3][3]);

void pitchMatFunc(double pitch_A, double pitchMat[3][3]);

void rollMatFunc(double roll_A, double rollMat[3][3]);

void Rot_NED_to_body(double V_N[], double V_E[], double V_D[], double yaw[], double pitch[], double roll[], double V_x[], double V_y[], double V_z[], int size);

void velParams(double V_x[], double V_y[], double V_z[], double V_t[], double Attack_ang[], double SideSlip_ang[], int size);

double calculate_STD(double V_t[], int size);

void writeCSV(string outputFilename, double V_t[], double Attack_ang[], double SideSlip_ang[], int size);


int main(){
    int size = 9;
    double V_N[], V_E[], V_D[], yaw[], pitch[], roll[];
    
    readfile(V_N, V_E, V_D, yaw, pitch, roll, size);
    
    ROT_
    double yawMat[3][3];
    for (int i = 0; i<size;i++){
        yawMatFunc(yaw[i], yawMat);
    }
    double pitchMat[3][3];
    for (int i = 0; i<size;i++){
        pitchMatFunc(pitch[i], pitchMat);
    }
    double rollMat[3][3];
    for (int i = 0; i<size;i++){
        rollMatFunc(roll[i], rollMat);
    }
    
    
    
    
    
    return 0;
}
void readFile(string inputFilename, double V_N[], double V_E[], double V_D[], double yaw[], double pitch[], double roll[], int size){
    inputFilename = "aircraftdata.txt";
    
    string =  header1, header2, header3, header4, header5, header6;
    
    ifstream = inputstream;
    inputstream.open(inputFilename);
    if (inputstream.fail()){
        cout << "error opening file";
        exit 1;
    }
    for (int i = 0; i<6; i++){
       inputstream >> header1 >> header2 >> header3 >> header4 >> header5 >> header6;
    }
    for (int i = 0; i<size; i++){
        inputstream >> V_N[i] >> V_E[i] >> V_D[i] >> yaw[i] >> pitch[i] >> roll[i];
    }
}

void yawMatFunc(double yaw_A, double yawMat[3][3]){

    double yaw_rad = yaw_A * M_PI / 180;// convert to radians
    yawMat[0][0] = cos(yaw_rad); // declares the array of yawmat for rz on the document
    yawMat[0][1] = sin(yaw_rad);
    yawMat[0][2] = 0;
    yawMat[1][0] = -sin(yaw_rad);
    yawMat[1][1] = cos(yaw_rad);
    yawMat[1][2] = 0;
    yawMat[2][0] = 0;
    yawMat[2][1] = 0;
    yawMat[2][2] = 1;
    
    
}

void pitchMatFunc(double pitch_A, double pitchMat[3][3]){
    double pitch_rad = pitch_A * M_PI / 180;// convert to radians
    pitchMat[0][0] = cos(pitch_rad); // declares the array of pitchmat for ry on the document
    pitchMat[0][1] = 0;
    pitchMat[0][2] = -sin(pitch_rad);
    pitchMat[1][0] = 0;
    pitchMat[1][1] = 1;
    pitchMat[1][2] = 0;
    pitchMat[2][0] = sin(pitch_rad);
    pitchMat[2][1] = 0;
    pitchMat[2][2] = cos(pitch_rad);
    
}

void rollMatFunc(double roll_A, double rollMat[3][3]){
    double roll_rad = roll_A * M_PI / 180;// convert to radians
    rollMat[0][0] = 1; // declares the array of rollmat for rx on the document
    rollMat[0][1] = 0;
    rollMat[0][2] = 0;
    rollMat[1][0] = 0;
    rollMat[1][1] = cos(roll_rad);
    rollMat[1][2] = sin(roll_rad);
    rollMat[2][0] = 0;
    rollMat[2][1] = -sin(roll_rad);
    rollMat[2][2] = cos(roll_rad);
    
}

void Rot_NED_to_body(double V_N[], double V_E[], double V_D[], double yaw[], 
double pitch[], double roll[], double V_x[], double V_y[], double V_z[], int size){
    
    for (int i = 0; i<size;i++){
        yawMatFunc(yaw[i], yawMat);
        
        
    }
    
        
    
}

void velParams(double V_x[], double V_y[], double V_z[], double V_t[], double Attack_ang[], double SideSlip_ang[], int size){
    
}

double calculate_STD(double V_t[], int size){
    
}

void writeCSV(string outputFilename, double V_t[], double Attack_ang[], double SideSlip_ang[], int size){
    
}