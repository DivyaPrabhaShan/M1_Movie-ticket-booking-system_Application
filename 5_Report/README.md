# Defining User Requirements
  The intent of this project is to book the tickets of the movies through online using this application. This Project provide comfortable,quick and simple way to book the Tickets.The system enables the user to book the tickets of their own choices ,view the timing of their shows and their respective seats,view the Price of the tickets,view the all booking records and cancel the tickets. This online Movie ticket reservation system is one of the best opportunities for those who cannot afford enough time to get their tickets reserved standing in long queues.
# Features
 * Booking Tickets
 * Cancelling Tickets
 * View all booking details
 * Veiw the price of the tickets
# SWOT Analysis
 # Strength 
     * Uncomplicated and user friendly
     * Reduces manual work
     * Can reserve the seats as per customers need.
     * It reduce time .
 # Weakness
     * Internet connection is needed efficiently.
     * Mostly people in rural areas are yet apprehensive for online Payment.
 # Opportunities
     * It is available to every theaters.
     * Acquiring more partnerships with various business entities.
     * Expand capabilities to cover movies and other events in various cities.
 # Threats
     * Competition in online ticketing portals.
     * Chances of mismanagement with event organizers.
# 5W's and 1H
 # 1.Why
     * It will help the Customer to reserve the movie tickets from our home.
     * The process of  Online ticket booking  System makes the customer Easy and Convienient .
 # 2.Where 
     * This can be used in all the theater around the globe.This application makes their work effortless.
 # 3.Who
     * This project can be used by all the peoples who are addicted to watch movies in theater and also for peoples who need to relax by watching movies on their week ends                along with families and friends. 
 # 4.When
     * This application for those who cannot spend time to stand in queue for long duration and book their tickets.
     * It reduces the time complexity.
 # 5.What
     * To bulid a system to book ticket,cancel ticket,view reserverd seats and details of the reservation ,change the price of the tickets only by the admin.
 # 1.How
     * Here, user can login and provide all the details which is neccessary.
     * choose their favorite new movie.
     * Book their seats instantially and can make easy payments.
     * user defined which connects digitally.
# HIGH LEVEL REQUIREMENTS:
  |  ID |  DESCRIPTION |  
  |-----|--------------|
  |HR_01|User shall able to login|
  |HR_02|User shall able to reserve tickets| 
  |HR_03|User shall able to see details about movie tickets| 
  |HR_04|User shall able to cancel the  tickets|
  |HR_05|User shall able to get the details of tickets|
# LOW LEVEL REQUIREMENTS
  |  ID |  DESCRIPTION |HLR ID|  
  |-----|--------------|------|
  |LR_01| User shall able to login to the application through correct login details|HR_01|
  |LR_02| If the login details of the are not in appropriate way.The system shows invalid details|HR_01|
  |LR_03| User shall able get details of the available seats and movies|HR_02|
  |LR_04| User need to reserve their tickets in user entry mode|HR_02|
  |LR_05| Admin can alter the price of the movie|HR_03|
  |LR_06| If user chooses the already booked seats it shows un available|HR_03|
  |LR_07| User can cancel the tickets after reservation|HR_04|
  |LR_08| Displaying the summary of the reserved tickets|HR_05|
  
# ARCHITECTURE
  # Behavioral diagrams
     High level diagram
    
![Untitled Workspace (7)](https://user-images.githubusercontent.com/98879001/153560091-8f88cc61-7460-4e57-bd21-33a44e563722.png)
     Low level diagram
     
     
 ![Untitled Workspace (2)](https://user-images.githubusercontent.com/98879001/153572433-0fcd0d23-3359-4d70-8f39-9dd9f5b2f1cc.png)

  # Structural diagram
     High level diagram
  ![Untitled Workspace (1)](https://user-images.githubusercontent.com/98879001/153573634-130360ce-460b-4515-ac3b-137be4c0333c.png)


     Low level diagram
    
![Untitled Workspace (11)](https://user-images.githubusercontent.com/98879001/153573708-590fb9ad-2ab3-4698-9751-6442fb3bd5cd.png)
| Test ID | HLT ID | DESCRIPTION | EXP IN | EXP OUT | ACTUAL OUT |
|---------|--------|-------------|--------|---------|------------|
|T_01     | HR_01  | Provide required details to login | password | Successfully logged in | Successfully logged in |
|T_02|HR_01|When wrong password is entered| password | entered password is invalid | entered password is invalid |
|T_03|HR_02|Display the details of movie available|Enter choice|Display list|Display list|
|T_04|HR_02|Get the tickets of the movie|Enter option from the list|Thankyou for booking tickets|Thankyou for booking tickets|
|T_05|HR_03|Summary of the booking ticket|Enter option|Reserved ID,Use name,Show name,Price|Reserved ID,Use name,Show name,Price|
|T_06|HR_03|Change the price of the ticket only by admin|Enter the new price|New price updated sucessfully|New price updated sucessfully|
|T_07|HR_04|Cancel the ticket|ID number |Cancel the ticket|Cancel the ticket|
|T_08|HR_05|Veiw the reserved ticket details|Password| Details of tickets|Details of tickets|





    

   
   
   
   
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  
     
      

