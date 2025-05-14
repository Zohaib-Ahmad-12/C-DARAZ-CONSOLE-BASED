#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char ch;
    char exit;
    int TotalPrice = 0;  
    string name;

    cout << "----------------------------[-Welcome to Daraz-]----------------------------" << endl << endl << endl;
    cout << "ENTER YOUR GOOD NAME SIR !\n\n";
    cin >> name;

   
    while (true) {
        cout << name << ", Press [L] to visit LAPTOP section  ||  Press [M] to visit MOBILE section" << endl << endl;
         ch = getch(); 

         if (ch == 'L' || ch == 'l') {
                   

         cout<<" Which laptop will you like to buy ?\n\n";   

        cout << "press one [1] for ALLIENWARE V4" << endl;
        cout << "press two [2] for hp Elitebook 850 G6" << endl;
        cout << "press three [3] for macbook M3\n" << endl;

         

           }
        ch = getch();
                    
        switch (ch) {
            case '1':
                cout << "ALIENWARE V4 |  SPECIFICATIONS ARE GIVEN BELOW  " << endl << endl;
                cout << "i7 8th generation (H Series) | 8 GB RAM | 256 GB NVM SSD | intel IRIS X GRAPHICS | 144 HZ 4K DISPLAY\n" << endl;
                cout << "Description: IT is one of the most reliable laptops for multiple experiences such as GAMING, EDITING, DEVELOPMENT, ETC. If you are interested in experiencing multiple streams, it is a finest choice.\n\n";

                
                cout << "ITS PRICE IS 100000 RUPEES" << endl;
                cout << "Will you like to buy this laptop? | PRESS [Y] TO BUY IT \n";

                ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED ALLIENWARE V4 !!" << endl;
                    TotalPrice += 100000;
                }
                break;

            case '2':
                cout << "HP ELITEBOOK 850 G6 |  SPECIFICATIONS ARE GIVEN BELOW  " << endl << endl;
                cout << "i5 8th generation (U Series) | 16 GB RAM | 256 GB NVM SSD | intel UHD GRAPHICS | 60 HZ 2K DISPLAY\n" << endl;
                cout << "Description: An elegant designed laptop best for business purposes. One of the most demanded laptops in the market and great for long-term use.\n\n";

                
                cout << "ITS PRICE IS 90000 RUPEES" << endl;
                cout << "Will you like to buy this laptop? | PRESS [Y] TO BUY IT \n\n";

                ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED HP ELITEBOOK 850 G6 !!" << endl;
                    TotalPrice += 90000;
                }
                break;

            case '3':
                cout << "MACBOOK M3 |  SPECIFICATIONS ARE GIVEN BELOW  " << endl << endl;
                cout << "M3 CHIP 19th generation | 16 GB RAM | 1 TB NVM SSD | intel IRIS GRAPHICS | 144 4K DISPLAY\n" << endl;
                cout << "Description: The laptop assures durability and long-lasting battery life. The new M3 chip enhances performance by 90 percent with an octa-core processor.\n\n";

                
                cout << "ITS PRICE IS 200000 RUPEES" << endl;
                cout << "Will you like to buy this laptop? | PRESS [Y] TO BUY IT \n";

                ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED MACBOOK M3 !!" << endl;
                    TotalPrice += 200000;
                }
                break;

                   
             case 'm':    
             case 'M':
                      cout<<" Which mobile phone will you like to buy ? \n\n";

                      cout<<"Press [4] to buy IPHONE 16 pro\n";
                      cout<<"Press [5] to buy SAMSUNG GALAXY S24 ULTRA \n";
                      cout<<"Press [6] to buy VIVO Y11 \n";
                
                 ch = getch();
                if (ch == '4' ) {
                    cout << " IPHONE 16 PRO || SPECIFICATIONS ARE GIVEN BELOW " << endl<<endl;
                    cout<<"8 GB RAM | 1TB STORAGE | 108 MEGAPIXEL CAMERA | AI INTIGRATED IOS \n";
                    cout<<" ONLY FOR 200000 RUPEES || PRESS [Y] TO BUY IT\n\n";


                    ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED IPHONE 16 PRO \n\n PRESS ANY KEY TO CONTINUE !!" << endl;
                    TotalPrice += 200000;
                }


                }
                   

                 ch = getch();
                if (ch == '5' ) {
                    cout << " SAMSUNG GALAXY S24 ULTRA || SPECIFICATIONS ARE GIVEN BELOW " << endl<<endl;
                    cout<<"16 GB RAM | 256GB STORAGE | 108 MEGAPIXEL CAMERA | INTIGRATED WITH SAMSUNG PERSONAL AI  \n";
                    cout<<" ONLY FOR 170000 RUPEES || PRESS [Y] TO BUY IT\n\n";


                    ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED SAMSUNG GALAXY S24 ULTRA \n\n PRESS ANY KEY TO CONTINUE !!" << endl;
                    TotalPrice += 170000;
                }


                }


              
                 ch = getch();
                if (ch == '6' ) {
                    cout << "VIVO Y11 || SPECIFICATIONS ARE GIVEN BELOW " << endl<<endl;
                    cout<<"4 GB RAM | 128GB STORAGE | 48 MEGAPIXEL CAMERA | TYPE C FAST CHARGING  \n";
                    cout<<" ONLY FOR 60000 RUPEES || PRESS [Y] TO BUY IT\n\n";


                    ch = getch();
                if (ch == 'Y' || ch == 'y') {
                    cout << "YOU HAVE PURCHASED VIVO Y11 !! \n\n PRESS ANY KEY TO CONTINUE " << endl;
                    TotalPrice += 60000;
                }


                }
                      
                break;
        

            default:
                cout << "Invalid choice. Please choose a valid option.\n";
                continue;
        }

        cout << "If you want to exit press [N] | If you want to buy another laptop OR mobile press any other key.\n";
        cin >> exit;

        if (exit == 'N' || exit == 'n') {
            break;
        }
    }

    cout << "Your total bill is = " << TotalPrice << " RUPEES" << endl;
    cout << "Thanks for trusting us !! \n";

    return 0;
}