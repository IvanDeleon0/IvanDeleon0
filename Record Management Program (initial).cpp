/*
Di ko pa alam yung scope, yung what kind of record management sys, so eto lang yung nasisimulan ko pa 


Features:
===========================================================================================
Menu (Interface)
-View All (/) 
-Add Record (x)
-Edit Record (x)
================================================================================================================================

Di ko alam kung ano decision niyo for SAVING DATA into a file.

(current-this code using vector) Content data will be deleted when the program CLOSED
--------------------------------------------------------------------------------------------
(w/ file saving using fstream lib) 
for context, #include <fstream> ay para sa viewing and writing files 
However, di pa ako proficient sa utilize netong lib. 

    -by default, it will create and write data in a file and save it. BUT kung re-run mo yung code,  it will OVERWRITE the previous edit
        like kung naglagay ka ng names and dates sa previous run, mawawala yung mga yon sa re-run ng code, like a fresh start.
        
    - there's a way naman para di ma-reset yung data sa loob ng file, 'ios::app'.
    and  that's all lang alam ko.
    
    -when you run the code and natapos na hanggang huli,it will open the file in SOME compilers or you can just manually search it sa local storage mo.

=================================================================================================================================

    



*/











#include <iostream>
#include <vector>  // dynamic storage
#include <string>  //for string
#include <iomanip> // setw
#include <chrono>  //for loading function
#include <thread>  //for loading function


void loading();
void loadingNone();
void searchLoading();
int main(){
    std::setw(2);
    //INITIALIZATION
    int choice = 0;
    
    //VECTORS
    std::vector<std::string> name; //store the names
    std::vector<int> iD; // store the unique ID along with the name
    
    while(choice !=4){
        loading();
                            //Interface
        std::cout << "\nW      W  EEEEE  L      CCCC   OOOOO  M     M  EEEEE" << std::endl;
        std::cout << "W      W  E      L     C      O     O MM   MM  E    " << std::endl;
        std::cout << "W  W   W  EEEE   L     C      O     O M M M M  EEEE " << std::endl;
        std::cout << " W W W W  E      L     C      O     O M  M  M  E    " << std::endl;
        std::cout << "  W   W   EEEEE  LLLLL  CCCC   OOOOO  M     M  EEEEE" << std::endl;
        
        std::cout << "      --------------------------------------------\n";
        std::cout << "      |          RECORD MANAGEMENT PROGRAM       |\n";
        std::cout << "      |     1. VIEW RECORD                       |\n";
        std::cout << "      |     2. ADD  RECORD                       |\n";
        std::cout << "      |     3. EDIT RECORD                       |\n";
        std::cout << "      |     4. EXIT                              |\n";
        std::cout << "      --------------------------------------------\n";
        std::cout << "  Option: ";
        std::cin >> choice;
        std::cout << "      --------------------------------------------\n"<<std::flush;
        
        
        switch (choice){
            case 1 :{
                if (iD.empty()){
                    searchLoading();
                    std::cout << "\nNo Record Detected. This is an Empty Record";
                    std::cout <<"\n--------------------------------------------\n\n";
                    loadingNone();
                    continue;
                }
                else {
                    for (int i = 0; i < iD.size(); ++i){
                        std::cout << iD[i] << ". "<< name[i]<< std::endl;
                    }
                }
                  std::cout <<"--------------------------------------------\n"<<std::endl;
            }
            break;
           /* case 2: {
                while(true){
                    std::cout << "\t Type '-1' when finished.\n";
                    cout << ""
                    
                    adding name, or any information
                }
            }*/
            
            case 3 : 
        }
    }
}




//UTILITIES
void loading(){
    for (int i = 0; i < 101; ++i){
    std::cout<< "\r" << "Loading " <<  i <<"%" <<std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    }
}
void loadingNone(){
    std::cout <<" " <<std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
}
void searchLoading(){
    std::cout <<"Searching. " <<std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));


}

