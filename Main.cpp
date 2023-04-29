#include "Admin.cpp"
#include "Customer.cpp"
#include "GPO.cpp"
#include "Post Office.cpp"
#include "Postal Worker.cpp"
#include "Order.cpp"
#include "Invoice.cpp"
#include "Mails.cpp"
#include <iostream>
using namespace std;

int main()
{
	char choice, choice1, choice2, choice3, choice4, choice5, choice6;
	Admin admin_obj;
	Customer customer_obj;

	GPO gpo_obj;												// one GPO & three Post Offices
	gpo_obj.setGPOcity("Islamabad");
	Order order_obj;

	do
	{
		cout << "\t\t\t ********************  M A I N   M E N U  ******************** \n\n";
		cout << "\t\t\t\t\t\t 0) E X I T \n";
		cout << "\t\t\t\t\t\t 1) A D M I N \n";
		cout << "\t\t\t\t\t\t 2) C U S T O M E R \n\n";
		cout << "\t\t\t\t E N T E R : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case '1' :
					
					cout << "\t\t\t ********************  A D M I N  ******************** \n\n";
					cout << "\t\t\t\t\t\t 0) B A C K \n";
					cout << "\t\t\t\t\t\t 1) L O G   I N \n";
					cout << "\t\t\t\t\t\t 2) C H A N G E   U S E R N A M E \n";
					cout << "\t\t\t\t\t\t 3) C H A N G E   P A S S W O R D \n\n";
					cout << "\t\t\t USERNAME : " << admin_obj.getUsername() << endl;
					cout << "\t\t\t PASSWORD : " << admin_obj.getPassword() << endl << endl;
					cout << "\t\t\t\t E N T E R : ";
					cin >> choice1;
					cout << endl;

					switch (choice1)
					{
						case '0':
								break;

						case '1':
								cout << "\t\t\t\t **********  L O G   I N  ********** \n\n";
								if ( admin_obj.verify() == 1 )
								{ 
									cout << endl;
									cout << "\t\t\t\t **********  A D M I N   F U N  C T I O N S  ********** \n\n";
									cout << "\t\t\t\t\t\t 0) B A C K \n";
									cout << "\t\t\t\t\t\t 1) P O S T   O F F I C E  1   E M P L O Y E E S \n";
									cout << "\t\t\t\t\t\t 2) P O S T   O F F I C E  2   E M P L O Y E E S \n";
									cout << "\t\t\t\t\t\t 3) P O S T   O F F I C E  3   E M P L O Y E E S \n\n";
									cout << "\t\t\t\t E N T E R : ";
									cin >> choice3;
									cout << endl;

									switch (choice3)
									{
										case '0':
												break;
										case '1':
												cout << "\t\t\t\t *****  P O S T   O F F I C E  1   E M P L O Y E E S  ***** \n\n";
												cout << "\t\t\t\t\t\t 0) B A C K \n";
												cout << "\t\t\t\t\t\t 1) V I E W   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 2) A D D   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 3) F I R E  E M P L O Y E E S \n";
												cout << "\t\t\t\t E N T E R : ";
												cin >> choice4;
												cout << endl;

												switch (choice4)
												{
													case '0':
															break;
													case '1':
														for (int i = 0; i < gpo_obj.getPostOffice()[0].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getDesignation()[i] << endl;
														}
														break;
													case '2':
														cout << "\t\t\t\t **********  A D D   P O S T A L   W O R K E R  ********** \n\n";
														cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[0].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[0].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;

														gpo_obj.getPostOffice()[0].addPostalWorkers("Postal Workers 1.txt");

														cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[0].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[0].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;
														break;
													case '3':
														cout << "\t\t\t\t **********  F I R E   P O S T A L   W O R K E R  ********** \n\n";
														cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[0].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[0].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;

														gpo_obj.getPostOffice()[0].firePostalWorkers("Postal Workers 1.txt");

														cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[0].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[0].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[0].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;
														break;
												}
												break;
										case '2':
												cout << "\t\t\t\t *****  P O S T   O F F I C E  2   E M P L O Y E E S  ***** \n\n";
												cout << "\t\t\t\t\t\t 0) B A C K \n";
												cout << "\t\t\t\t\t\t 1) V I E W   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 2) A D D   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 3) F I R E  E M P L O Y E E S \n";
												cout << "\t\t\t\t E N T E R : ";
												cin >> choice5;
												cout << endl;

												switch (choice5)
												{
												case '0':
													break;
												case '1':
													for (int i = 0; i < gpo_obj.getPostOffice()[1].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getDesignation()[i] << endl;
													}
													break;
												case '2':
													cout << "\t\t\t\t **********  A D D   P O S T A L   W O R K E R  ********** \n\n";
													cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[1].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[1].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;

													gpo_obj.getPostOffice()[1].addPostalWorkers("Postal Workers 2.txt");

													cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[1].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[1].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;
													break;
												case '3':
													cout << "\t\t\t\t **********  F I R E   P O S T A L   W O R K E R  ********** \n\n";
													cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[1].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[1].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;

													gpo_obj.getPostOffice()[1].firePostalWorkers("Postal Workers 2.txt");

													cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[1].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[1].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[1].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;
													break;
												}
												break;
										case '3':
												cout << "\t\t\t\t *****  P O S T   O F F I C E  3   E M P L O Y E E S  ***** \n\n";
												cout << "\t\t\t\t\t\t 0) B A C K \n";
												cout << "\t\t\t\t\t\t 1) V I E W   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 2) A D D   E M P L O Y E E S \n";
												cout << "\t\t\t\t\t\t 3) F I R E  E M P L O Y E E S \n";
												cout << "\t\t\t\t E N T E R : ";
												cin >> choice6;
												cout << endl;
												switch (choice6)
												{
												case '0':
														break;
												case '1':
														cout << "\t\t\t\t **********  P O S T A L   W O R K E R S ********** \n\n";
														for (int i = 0; i < gpo_obj.getPostOffice()[2].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getDesignation()[i] << endl;
														}
														break;
												case '2':
														cout << "\t\t\t\t **********  A D D   P O S T A L   W O R K E R  ********** \n\n";
														cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[2].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[2].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;

														gpo_obj.getPostOffice()[2].addPostalWorkers("Postal Workers 3.txt");
															
														cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
														for (int i = 0; i < gpo_obj.getPostOffice()[2].getPostalWorkers().getnumberOfEmployees(); i++)
														{
															cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[2].getPostalWorkers().getId()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getName()[i] << " ";
															cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getDesignation()[i] << endl;
														}
														cout << endl;
														break;
												case '3':
													cout << "\t\t\t\t **********  F I R E   P O S T A L   W O R K E R  ********** \n\n";
													cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[2].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[2].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;

													gpo_obj.getPostOffice()[2].firePostalWorkers("Postal Workers 3.txt");

													cout << "\t\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
													for (int i = 0; i < gpo_obj.getPostOffice()[2].getPostalWorkers().getnumberOfEmployees(); i++)
													{
														cout << "\t\t\t\t\t\t\t\t " << gpo_obj.getPostOffice()[2].getPostalWorkers().getId()[i] << " ";
														cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getName()[i] << " ";
														cout << gpo_obj.getPostOffice()[2].getPostalWorkers().getDesignation()[i] << endl;
													}
													cout << endl;
													break;
												}
												break;
									}

								}
								break;

						case '2':
								cout << "\t\t\t\t **********  C H A N G E   U S E R N A M E  ********** \n\n";
								admin_obj.setUsername();
								cout << endl;
								cout << "\t\t\t NEW USERNAME  : " << admin_obj.getUsername() << endl;
								cout << "\t\t\t PASSWORD      : " << admin_obj.getPassword() << endl << endl;
								break;

						case '3':
								cout << "\t\t\t\t **********  C H A N G E   P A S S W O R D  ********** \n\n";
								admin_obj.setPassword();
								cout << endl;
								cout << "\t\t\t USERNAME      : " << admin_obj.getUsername() << endl;
								cout << "\t\t\t NEW PASSWORD  : " << admin_obj.getPassword() << endl << endl;
								break;
					}
					break;

			case '2':
					cout << "\t\t\t ********************  C U S T O M E R  ******************** \n\n";
					cout << "\t\t\t\t\t\t 0) B A C K \n";
					cout << "\t\t\t\t\t\t 1) L O G   I N \n";
					cout << "\t\t\t\t\t\t 2) C H A N G E   U S E R N A M E \n";
					cout << "\t\t\t\t\t\t 3) C H A N G E   P A S S W O R D \n";
					cout << "\t\t\t\t\t\t 4) A D D   C U S T O M E R \n";
					cout << "\t\t\t\t\t\t 5) D E L E T E   C U S T O M E R \n";
					cout << "\t\t\t\t\t\t 6) C H E C K   M A I L \n";
					cout << "\t\t\t\t\t\t 7) S E N D   M A I L \n\n";
					cout << "\t\t\t\t E N T E R : ";
					cin >> choice2;
					cout << endl;

					switch (choice2)
					{
						case '0':
								break;

						case '1':
								cout << "\t\t\t\t **********  L O G   I N  ********** \n\n";

								cout << "\t\t\t\t\t\t\t\t\t ***** C U S T O M E R S  ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}

								if ( customer_obj.verify() == 1)
								{
									
								}
								break;

						case '2':
								cout << "\t\t\t\t **********  C H A N G E   U S E R N A M E  ********** \n\n";

								cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;

								customer_obj.setUsername();

								cout << "\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;
								break;

						case '3':
								cout << "\t\t\t\t **********  C H A N G E   P A S S W O R D  ********** \n\n";

								cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] <<  endl;
								}
								cout << endl;

								customer_obj.setPassword();

								cout << "\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;
								break;

						case '4':
								cout << "\t\t\t\t **********  A D D   C U S T O M E R  ********** \n\n";

								cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;

								customer_obj.addCustomer();

								cout << "\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;
								break;
						case '5':
								cout << "\t\t\t\t **********  D E L E T E   C U S T O M E R  ********** \n\n";

								cout << "\t\t\t\t\t\t\t\t\t ***** O R I G I N A L ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;

								customer_obj.deleteCustomer();

								cout << "\t\t\t\t\t\t\t\t\t ***** E D I T E D ***** " << endl;
								for (int i = 0; i < customer_obj.getNoOfCustomers(); i++)
								{
									cout << "\t\t\t\t\t\t\t\t USERNAME  : " << customer_obj.getUsername()[i] << " ";
									cout << "\t PASSWORD  : " << customer_obj.getPassword()[i] << endl;
								}
								cout << endl;
								break;
						case '6':
								int temp_int;
								int postoffice;
								cout << "\t\t\t\t **********  C H E C K   M A I L  ********** \n\n";
								cout << "\t\t\t P O S T   O F F I C E  # ( 1,2,3 ): ";
								cin >> postoffice;
								if (postoffice == 1)
								{
									order_obj.readFile("Orders 1.txt");
								}
								else if (postoffice == 2)
								{
									order_obj.readFile("Orders 2.txt");
								}
								else if (postoffice == 3)
								{
									order_obj.readFile("Orders 3.txt");
								}
								order_obj.display();
								/*cout << "\t\t\t O R D E R   I D : ";		// was about to do this by searching cust_id through 
								cin >> temp_int;*/							//			txt file but time ran out
								
								break;
						case '7':
								break;
					}
					break;
		}
	}while (choice != '0');
}
