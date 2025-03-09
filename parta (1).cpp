/* Quinci did .....*/
/* Sydney did .....*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>


void readFile(double V_N[], double V_E[], double V_D[], double yaw[], double pitch[], double roll[], int size);

void yawMatFunc(double yaw_A[], double yawMat[][3]);

void pitchMatFunc(double pitch_A, double pitchMat[][3]);

void rollMatFunc(double roll_A, double rollMat[][3]);

void Rot_NED_to_body(double V_N[], double V_E, double V_D, double yaw[], double pitch[], double roll[], double V_x[], double V_y[], double V_z[], int size);

void velParams(double V_x[], double V_y[], double V_z[], double V_t[], double Attack_ang[], double SideSlip_ang[], int size);

double calculate_STD(double V_t[], int size);

void writeCSV(string outputFilename, double V_t[], double Attack_ang[], double SideSlip_ang[], int size);


int main(){
    
    
    
    
    
    
    
    
    return 0;
}