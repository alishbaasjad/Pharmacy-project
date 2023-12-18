#include <iostream>
#include <string>

using namespace std;

int main() {
    double totalAmount = 0.0;

    do {
        int category;
         cout<<"\n\n\t\t\t    Pharmacy Management System \n";
	cout<<"\t\t==================================================\n\n";
	cout<<"\t\t--------------------------------------------------\n";
        cout << "\t\t||\tWelcome to the Pharmacy!\t ||\n" ;
        cout << "\t\t||\tWhat are you looking for?\t ||\n" ;
        cout << "\t\t||\t1. Medicine\t\t\t ||\n" ;
        cout << "\t\t||\t2. Skincare\t\t\t ||\n" ;
        cout << "\t\t||\t3. Makeup\t\t\t ||\n" ;
        cout << "\t\t||\t4. Supplements\t\t\t ||\n" ;
        cout << "\t\t||\t5. Medical Equipment\t\t ||\n" ;
        cout << "\t\t||\t6. Snacks\t\t\t ||\n" ;
        cout << "\t\t||\t7. Baby Care\t\t\t ||\n" ;
        cout << "\t\t||\t8. Exit\t\t\t\t ||\n" ;
        cout<<"\t\t--------------------------------------------------\n";
        cout<<"\t\t--------------------------------------------------\n";
        cout << "Enter your choice (1-8): ";
       
        cin >> category;

        switch (category) {
            case 1: {
                int symptom;
                cout<<"\t\t--------------------------------------------------\n";
                 cout<<"\t\t--------------------------------------------------\n";
                cout << "Select the symptoms:\n\n3. Flu\n4. Upset stomach\n5. Vomiting\n6. Pain\n7. Exit" << endl;
                cout << "Enter your choice (1-7): ";
                cout <<" 1. Fever  ";
                cout <<" 2. Cough  ";
                cout <<" n3. Flu   ";
                cout <<" 4. Upset stomach  ";
                cout <<" 5. Vomiting  ";
                cout <<" 6. Pain   ";
                cout <<" 7. Exit  ";
                
                cout<<"\t\t--------------------------------------------------\n";
                cout<<"\t\t--------------------------------------------------\n";
                cin >> symptom;

                string medicine;
                double price;

                switch (symptom) {
                    case 1:
                        medicine = "Paracetamol";
                        price = 5.99;
                        break;
                    case 2:
                        medicine = "HIMALAYA KOFLET SYRUP";
                        price = 8.99;
                        break;
                    case 3:
                        medicine = "Paracetamol";
                        price = 5.99;
                        break;
                    case 4:
                        medicine = "Panadol 500 mg";
                        price = 6.99;
                        break;
                    case 5:
                        medicine = "Paracetamol";
                        price = 5.99;
                        break;
                    case 6:
                        medicine = "Paracetamol";
                        price = 5.99;
                        break;
                    case 7:
                        break; // Exit the medicine section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << medicine << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
        

            case 2: {
                int skinType;
                cout << "Select your skin type:\n1. Oily skin\n2. Normal skin\n3. Combination skin\n4. Dry-dehydrated skin\n"
                     << "5. Sensitive skin\n6. Acne-prone skin\n7. Mature skin\n8. Exit" << endl;
                cout << "Enter your choice (1-8): ";
                cin >> skinType;

                string skincare;
                double price;

                switch (skinType) {
                    case 1:
                        skincare = "Neutrogena Hydro Boost Gel";
                        price = 1400;
                        break;
                    case 2:
                        skincare = "cosrx hyaluronic acid moisturizer";
                        price = 5000;
                        break;
                    case 3:
                        skincare = "Cetaphil moisturizing lotion";
                        price = 3000;
                        break;
                    case 4:
                        skincare = "Cerave intense hydration cream";
                        price = 6000;
                        break;
                    case 5:
                        skincare = "aveeno daily lotion";
                        price = 2800;
                        break;
                    case 6:
                        skincare = "Cerave acne prone lotion";
                        price = 4500;
                        break;
                    case 7:
                        skincare = "inkey face hyaluronic acid lotion";
                        price = 2400;
                        break;
                    case 8:
                        break; // Exit the skincare section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << skincare << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
        
           
case 3: {
                int Choice;
                
                
                cout<<"1.Female Make up products\n";
                cout<<" 1. Eye Products\n";
                cout<<" 2. Lip Products\n";
                cout<<" 3. Face Products\n";
                cin>>Choice;
                
                

                string makeupoptions;
                double price;
                

                switch (Choice){
                    case 1:
                    makeupoptions = "Rare beauty mascara";
                    price = 5000;
                    break;
                    case 2:
                    makeupoptions = "nyx lip oil";
                    price = 1500;
                    break;
                    case 3:
                    makeupoptions = "pixi blush";
                    price = 4000;
                    break;
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;

            }
             cout << "You need " << makeupoptions << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;

    }                  
                        

    }                  
                        

            case 4: {
                cout << "Common types of supplements:\n1. Vitamins\n2. Minerals\n3. Botanicals or herbs\n"
                     << "4. Botanical compounds\n5. Amino acids\n6. Live microbials (probiotics)\n7. Exit" << endl;

                int supplementType;
                cout << "Enter your choice (1-7): ";
                cin >> supplementType;

                string supplement;
                double price;

                switch (supplementType) {
                    case 1:
                        supplement = "Multivitamins";
                        price = 9.99;
                        break;
                    case 2:
                        supplement = "Minerals";
                        price = 7.99;
                        break;
                    case 3:
                        supplement = "Botanicals or herbs";
                        price = 12.99;
                        break;
                    case 4:
                        supplement = "Botanical compounds";
                        price = 14.99;
                        break;
                    case 5:
                        supplement = "Amino acids";
                        price = 10.99;
                        break;
                    case 6:
                        supplement = "Live microbials (probiotics)";
                        price = 18.99;
                        break;
                    case 7:
                        break; // Exit the supplements section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << supplement << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }

            case 5: {
                cout << "Available medical equipment:\n1. Hospital Stretchers\n2. Defibrillators\n3. Anesthesia Machines\n"
                     << "4. Patient Monitors\n5. Sterilizers\n6. EKG/ECG Machines\n7. Surgical Tables\n8. Blanket and Fluid Warmers\n"
                     << "9. Electrosurgical Units\n10. Surgical Lights\n11. Exit" << endl;

                int equipmentType;
                cout << "Enter your choice (1-11): ";
                cin >> equipmentType;

                string equipment;
                double price;

                switch (equipmentType) {
                    case 1:
                        equipment = "Hospital Stretchers";
                        price = 499.99;
                        break;
                    case 2:
                        equipment = "Defibrillators";
                        price = 1999.99;
                        break;
                    case 3:
                        equipment = "Anesthesia Machines";
                        price = 2999.99;
                        break;
                    case 4:
                        equipment = "Patient Monitors";
                        price = 1499.99;
                        break;
                    case 5:
                        equipment = "Sterilizers";
                        price = 2499.99;
                        break;
                    case 6:
                        equipment = "EKG/ECG Machines";
                        price = 1999.99;
                        break;
                    case 7:
                        equipment = "Surgical Tables";
                        price = 3499.99;
                        break;
                    case 8:
                        equipment = "Blanket and Fluid Warmers";
                        price = 799.99;
                        break;
                    case 9:
                        equipment = "Electrosurgical Units";
                        price = 2999.99;
                        break;
                    case 10:
                        equipment = "Surgical Lights";
                        price = 1599.99;
                        break;
                    case 11:
                        break; // Exit the medical equipment section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << equipment << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }

case 7: {
                cout << "Common types of baby care items:\n1. Pampers\n2. Cerelac\n3. BF1\n"
                     << "4. Feeder\n5. Pacifier\n6. Bibs\n7. Baby Oil\n8. Baby Lotion\n9. Baby Shampoo\n10. Baby Powder\n11. Baby Wipes\n12. Exit" << endl;

                int babyCare;
                cout << "Enter your choice (1-12): ";
                cin >> babyCare;

                string supplement;
                double price;

                switch (babyCare) {
                    case 1:
                        supplement = "Pampers";
                        price = 2600;
                        break;
                    case 2:
                        supplement = "Cerelac";
                        price = 250;
                        break;
                    case 3:
                        supplement = "BF1";
                        price = 1800;
                        break;
                    case 4:
                        supplement = "Feeder";
                        price = 300;
                        break;
                    case 5:
                        supplement = "Pacifier";
                        price = 270;
                        break;
                    case 6:
                        supplement = "Bibs";
                        price = 700;
                        break;
                    case 7:
                        supplement = "Baby Oil";
                        price = 1000;
                        break;
                    case 8:
                        supplement = "Baby Lotion";
                        price = 950;
                        break;
                    case 9:
                        supplement = "Baby Shampoo";
                        price = 1200;
                        break;
                    case 10:
                        supplement = "Baby Powder";
                        price = 800;
                        break;
                    case 11:
                        supplement = "Baby Wipes";
                        price = 550;
                        break;
                    case 12:
                        break; // Exit the supplements section
                    default:
                        cout << "Invalid choice!" << endl;
                        continue;
                }

                cout << "You need " << supplement << ". Price: Rs." << price << endl;
                totalAmount += price;
                break;
            }
            

            case 8: {
                cout << "Thank you for using the Pharmacy system! Your total amount is: $" << totalAmount << endl;
                return 0;
            }

            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        char choice;
        cout << "Do you want anything else? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
             cout<<"\t\t--------------------------------------------------\n";
             cout<<"\t\t--------------------------------------------------\n";
            cout << "Thank you for using the Pharmacy system! Your total amount is   :  Rs." << totalAmount << endl;
            return 0;
        }

     }
     while (true);

    return 0;
}

