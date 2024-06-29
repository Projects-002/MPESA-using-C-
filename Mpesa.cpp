		//Code with Mr.Hope
		//Lets Clone Mpesa
		
		#include <iostream>
		#include <ctime>
		using namespace std;
		
		int main() {
		    // current date and time on the current system
		    time_t now = time(0);
		    // convert now to string form
		    char* date_time = ctime(&now);

						    int phone;
						    int withdraw;
						    int amount;
						    int pin;
						    float transaction = 0.00;
						    int confirm;
						
						    int agent;
						    int store;
						
						    int option;
						    int wOption;
						    int aOption;
						    int lsOption;
    
     
				    cout << "1. " << "Send Money" << endl;
				    cout << "2. " << "Withdraw Cash" << endl;
				    cout << "3. " << "Buy Airtime" << endl;
				    cout << "4. " << "Loans and Saving" << endl;
				    cout << "5. " << "Lipa na M-PESA" << endl;
				    cout << "6. " << "My Account" << endl;
				    cin >> option;
    
    
	     //OPTIONS
	    switch (option) {
	                             //1. SEND MONEY    						
				  case 1: 
					        cout << "\nEnter phone no." << endl;
					        cin >> phone;
					        cout << "Enter amount." << endl;
					        cin >> amount;
					        cout << "Enter Mpesa pin." << endl;
					        cin >> pin;
				
						        //confirmation
						        cout << "\n\n+2547" << phone << " Will receive " << amount << "/= " << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
						        cout << "1." << "Yes" << endl;
						        cout << "2." << "No" << endl;
						        cin >> confirm;
				        

						        //Send money confirmation options
						        if (confirm == 1) {
						            cout << "\nRGRYGRBJC" << " Confirmed. Ksh." << amount << ".00 " << "sent to +254" << phone << " on " << date_time << endl;
						        }
						        else if(confirm == 2) {
						            cout << "Transaction CANCELLED Successfully" << endl;
						        }
						        else{
						        	
						        	cout<<"Invalid option try again!";
								}
						
				break;
						     

                                // 2. WITHDRAW  CASH

			    case 2: 
				                //Cash Withdrawal options
				           
				        cout << "1. " << "From Agent" << endl;
				        cout << "2. " << "From ATM" << endl;
				        cin >> wOption;
				
				        switch (wOption) {
				
				
				                  case 1:  //Withdraw from Agent.
				
								            cout << "1. " << "Enter agent no." << endl;
								            cin >> agent;
								            cout << "2. " << "Enter store no." << endl;
								            cin >> store;
								            cout << "Enter amount." << endl;
								            cin >> amount;
								            cout << "2. " << "Enter Mpesa pin." << endl;
								            cin >> pin;
				
									            //Confirmation 
									            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
									            cout << "1." << "Yes" << endl;
									            cout << "2." << "No" << endl;
									            cin >> confirm;
						
						
									            //Agent  output 
									            if (confirm == 1) {
									
									                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent << endl;
									
									            }
									            else if(confirm == 2) {
									
									                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED" << endl;
									
									            }
									           else{
						        	
						        	           cout<<"Invalid option try again!";
								             }
									
									  break;
				        


							        case 2:   //Withdraw from ATM
							
							            cout << "1. " << "Enter agent no." << endl;
							            cin >> agent;
							            cout << "Enter amount." << endl;
							            cin >> amount;
							            cout << "2. " << "Enter Mpesa pin." << endl;
							            cin >> pin;
							
							            //Confirmation 
							            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
							            cout << "1." << "Yes" << endl;
							            cout << "2." << "No" << endl;
							            cin >> confirm;
							
							            //For ATM confirmation option output
							            if (confirm == 1) {
							                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent << endl;
							            }
							
							            else if (confirm == 2){
							
							                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED" << endl;
							
							            }
							            else{
						        	
						                   	cout<<"Invalid option try again!";
								         }
							
							   break;
                 

					                  // CASH  INCORRECT  INPUT
					          default:
							            cout << "Invalid option try again!\n";
							            cout << "1. " << "From Agent" << endl;
							            cout << "2. " << "From ATM" << endl;
							            cin >> wOption;
							
							            if (wOption == 1) {//AGENT
							                cout << "1. " << "Enter agent no." << endl;
							                cin >> agent;
							                cout << "2. " << "Enter store no." << endl;
							                cin >> store;
							                cout << "Enter amount." << endl;
							                cin >> amount;
							                cout << "2. " << "Enter Mpesa pin." << endl;
							                cin >> pin;
							            }
							            
							            // CONFIRMATION 
							            cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
							            cout << "1." << "Yes" << endl;
							            cout << "2." << "No" << endl;
							            cin >> confirm;
							
							            //Confirmation options output
							            if (confirm == 1) {
							                cout << "R444GDDFHJS" << " Confirmed your  have withdrawn " << "Kshs " << amount << "/=" << " From " << agent;
							            }
							
							            else if (confirm == 2){
							
							                cout << "Withrawal of Kshs " << amount << "/= " << "From " << agent << " was Successfully CANCELLED";
							
							            }
							            else{
						        	
						                    cout<<"Invalid option try again!";
							          	}
							          	
							
							           //ATM options after invalid entry
							        if (wOption == 2) {
							                cout << "1. " << "Enter agent no." << endl;
							                cin >> agent;
							                cout << "Enter amount." << endl;
							                cin >> amount;
							                cout << "2. " << "Enter Mpesa pin." << endl;
							                cin >> pin;
							
							                // Confirmation
							                cout << "\nWithdraw Kshs " << amount << "/= from " << agent << " Transaction cost Kshs: " << transaction << ".00 ";
							            }
                                 
                                   break; //default wOption 
                               }//woption    
                      break;// Withdraw Options
              
   
   
                                        //3. BUY AIRTIME
                                        
		           	case 3:                   
					                    //buy airtime options
					                    
					                   cout<<"1 My Phone"<<endl;
					                   cout<<"2.Other Phone"<<endl;
					                   cin>>aOption;
					                   
								        
								//Buy for my phone
								        
									       if(aOption == 1){
									        cout << "Enter amount." << endl;
									        cin >> amount;
									        cout << "2." << "Enter Mpesa pin." << endl;
									        cin >> pin;
								        
								            // Confirmation 
								        
									         cout << "\nBuy " << amount << "/= Airtime from " << "Your Mpesa. Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
									         cout << "1." << "Yes" << endl;
									         cout << "2." << "No" << endl;
									         cin >> confirm;
								        
                                             // Output							            
									        if(confirm ==1){
									        cout<<"\nQTEKS4DESS "<<"Confirmed You Bought "<<amount<<"/= Airtime  from Your Mpesa "<<transaction<<"/=";
									        }
									        else{
									        cout<<"\nTransaction CANCELLED Successfully";
									        }
									        
									      }//Airtime my phone
								      
								      
								//Buy for other phone
								
								     else if(aOption == 2){
								         cout<<"Enter Phone no."<<endl;
								         cin>>phone;
								         cout << "Enter amount." << endl;
								         cin >> amount;
								         cout << "2." << "Enter Mpesa pin." << endl;
								         cin >> pin;
								        
								        // Confirmation
								        
								         cout << "\nBuy " << amount << "/= Airtime for " <<phone << " Using Mpesa, Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
								         cout << "1." << "Yes" << endl;
								         cout << "2." << "No" << endl;
								         cin >> confirm;
								        
								        //Output
								        if(confirm ==1){
								        cout<<"\nQTEKS4DESS "<<"Confirmed You Bought "<<amount<<"/= Airtime  for +2547"<< phone <<" Transaction cost Kshs: "<<transaction<< ".00";
								        }
								        else{
								        cout<<"\nTransaction CANCELLED Successfully";
								        }
								    }//   Airtime Option else if
								      
								      
								        
				 break;// buy airtime option
				 
				 
				 
				             // 4. LOANS AND SAVINGS
				 
				 case 4: 
				                     
			                //Loans and savings options														                    
				                   cout<<"\n1.M-Shwari"<<endl;
				                   cout<<"2.KCB MPESA"<<endl;
				                   cin>>lsOption; 
				                   
				                   
						                //M-Shwari
						                if(lsOption == 1){
						                	cout<<"\n1. Deposit from MPESA"<<endl;
						                	cout<<"2. Withdraw to MPESA"<<endl;
						                	cout<<"3. Loan @ 8.93% for 30 days"<<endl;
						                	cout<<"4. Fixed Savings Accounts"<<endl;
						                	cout<<"5. My Account\n"<<endl;
											cin>>option;
											
											   											
											switch(option){
																								
												         // 1. Deposit from mpesa
												         
												  case 1:
														 cout<<"Enter Amount"<<endl;
														 cin>>amount;
														 cout<<"Enter M-pesa pin"<<endl;
														 cin>>amount;
														 
														 //Confirmation
														 cout << "\nDeposit " << amount << "/= From Mpesa To M-Shwari, Transaction cost Kshs: " << transaction << ".00 " << "To Continue reply with 1 to STOP reply with 2." << endl;
											             cout << "1." << "Yes" << endl;
											             cout << "2." << "No" << endl;
											             cin >> confirm;
											             
											             //Output
											             if(confirm ==1){
											             cout<<"\nQTEKS4DESS "<<"Confirmed "<<amount<<"/=  Transferred From Mpesa to M-Shwari on "<<date_time << "Transaction cost Kshs: "<<transaction<< ".00"<<endl;
											            }
											            else{
											            cout<<"\nTransaction CANCELLED Successfully";
											             }
												 break;	
												 
												 
												 
												 
												 
												 default:
												 	
												 	cout<<"\nInvalid Option try again\n";
												 	
												 break;
												 										
										     }
											 								             															            				                	
										}// Mshwari
										
										
				                
				                     
				                     
				                     				 				                 

				break;//Loans and savings
					
								   
			     default://default option
							
									   							   
				              if(option<=6 && option>=1){
				              	cout<<"\n Option " <<option <<" Is under scheduled maintainance!\n";
							  }
							  else{
							  	cout<<"\nInvalid Option Try Again\n";
							  }
								           
				   break;
			} //option
	       
								  
	return 0;
	}
					
					
					
