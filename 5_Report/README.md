# Requirements

## Features

-   The CAR WASH AND RENTAL SYSTEM allows the users to book a rental car or apply for a car wash removing the need of going in     person to the company. 
   
-   The project is titled as **CARRENTAANDWASH** and developed using C language.
   
-   When a user needs to book a rental car or car wash, they can enter their preference of a car to be rented and the Card number.
   
-   The detailed recipt of balance which is present in the card after booking a car and the details of the car booked will be displayed.
   
-   If in case the car wash option is pressed the detailed recipt on the balance in the card and the booking status will be displayed on giving the correct card number.

### Advantages
-   easier and faster access
-   Easier to learn and work on it
-   Offer 24/7 service
-   User-friendly

## Research

   Several models on car rental system are researched and this application is created on basis of the research
 
 Few research models are :
  
![carrental](https://user-images.githubusercontent.com/101052348/161388232-20bb7f10-d7df-4c71-a893-1f2895692b72.png)

![WashNow](https://user-images.githubusercontent.com/101052348/161388253-51a77cf0-564b-40ed-94ba-1f991d190676.png)

## Defining the System

![flowchart](https://user-images.githubusercontent.com/101052348/161390994-bcda4f37-6ed9-4351-a83e-d68d3b197554.png)

## SWOT Analysis

![SWOTANALYSIS](https://user-images.githubusercontent.com/101052348/161391569-b44705c2-92ff-4867-87e8-b351817921ef.png)


# 4 W's and 1 H

## Who
Anyone with an Smart Phone and a bank account can use for their car wash or to rent a car.

## What
It's an application to book a car to rent or to book a car wash.

## When
Booking is available 24X7, 365 days.

## Where
It can be used by a user whenever from anywhere when he/she has an requirement to rent a car or to wash their car.

## How
When a user needs to book a rental car or car wash, they can enter their preference of a car to be rented and the Card number.The detailed recipt of balance which is present in the card after booking a car and the details of the car booked will be displayed.If in case the car wash option is pressed the detailed recipt on the balance in the card and the booking status will be displayed on giving the correct card number.This application was developed in C language to avoid the complexity and to keep it simple. 

# Detail Requirements

## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR1 |Options to be chosen  | Implemented |
| HR2 | Rentcar option | Implemented |
| HR3 | Car wash option |  Implemented |
| HR4 | Exit option |  Implemented |
| HR5 | Error message if input is wrong |  Implemented |
| HR6 | Graphical User Interface | Future |
| HR7 | Depositing system | Future |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR1 |Main menu should consist 3 options: 1.Car rent, 2.Car wash, 3.Exit  | HR01| Implemented |
| LR2 | A car can be rented from the given list of cars and the balance id returned | HR02| Implemented |
 LR3 | A car wash booking is done and the balance id returned  | HR03| Implemented |
| LR4 | Exits from the program when called | HR04| Implemented |
| LR5 |Should display error message if the input is wrong | HR05| Implemented |
| LR6 |A clean graphical user interface in an app for easy booking  | HR06| Future |
| LR6 |Depositing system if incase the balance is insufficient  | HR07| Future |

## BEST METHOD FOLLOWED

C programming is one of the less complex language through which this application is done.Car renting is done from anywhere through this application and also Car wash can be booked from anywhere and also the working of the application is easy to understand and also to work on which makes it more versatile for any person to use.


## FLOWCHART

![flowchart](https://user-images.githubusercontent.com/101052348/161390994-bcda4f37-6ed9-4351-a83e-d68d3b197554.png)

## UML-CLASS DIAGRAM

![UML-CLASS](https://user-images.githubusercontent.com/101052348/161393692-62e4fd6a-333b-4fc9-bad2-51881e21ffa7.jpg)

# TEST PLAN AND OUTPUT

## High Level Requirements
| TEST ID | Description | Expected I/P | Expected O/P | Actual output | Type of test
|--|--|--|--|--|--|
| HR01 |Options will be displayed  | Enter choice | details of working displayed |details of working displayed | Scenario based |
| HR02 | Entering booking details | Enter choice | details of cars displayed | details of cars displayed | Requirement based
| HR03 | Car washing displayed | Enter card number | detailed recipt |detailed recipt |Boundary based
| HR04 | Error message |  wrong input | 9 and error message |9 and error message |Boundary based
| HR05 | Exit the program |  Enter choice | Exit |Exit|Scenario based


## Low Level Requirements 

| TEST ID | Description | Expected I/P | Expected O/P | Actual output | Type of test
|--|--|--|--|--|--|
| LR01 |When option is not given correctly  | Enter choice| Error message | Error message | Scenario based
| LR02 |When option is given correctly | Enter choice | Particular function is displayed |Particular function is displayed|Requirement based
| LR03 |When option in Car rent not given correctly   |Enter choice| Error message | Error message | Requirement based
| LR04 |When option in Car rent given correctly   |gets card number and balance| checks balance and outputs recipt | checks balance and ouputs recipt | Boundary based
| LR05 |When Car wash is chosen |gets card number and balance| checks balance and outputs recipt | checks balance and ouputs recipt | Boundary based
| LR06 |If the given card number is incorrect  | card number| displays error message and shows options |displays error message and shows options|Boundary and Scenario based
| LR07 |If the balance is insufficient | balance | Displayes message on insuffient balance and exits |Displayes message on insuffient balance and exits|Boundary based


# CODE OUPUTS

## CAR RENT OUTPUT

![CARRENT_OUTPUT](https://user-images.githubusercontent.com/101052348/161415932-0e3bbba4-5fad-4649-9621-47cb2dcf348d.png)

## CAR WASH OUTPUT

![CARWASH_OUTPUT](https://user-images.githubusercontent.com/101052348/161415967-b045bf69-82ff-4134-afc7-fa6e89957594.png)

## EXIT OUTPUT

![EXIT_OUTPUT](https://user-images.githubusercontent.com/101052348/161416001-3881894a-0a74-4b19-a9ee-80df2f3a557a.png)

## OUPUT ON WRONG ENTER OF CHOICE 

![WRONGIP_OUTPUT](https://user-images.githubusercontent.com/101052348/161416053-24e88df3-096a-4e59-b60f-1f11e92697da.png)

## ON INSUFFICIENT BALANCE

![INSUFFBAL_OUTPUT](https://user-images.githubusercontent.com/101052348/161416111-e9d530f6-a863-4b01-ad59-3ce81fc85cf3.png)


# VIDEOS

## VIDEO ON EXPLAINING CODE AND RUNNING

https://user-images.githubusercontent.com/101052348/161418317-4844e3fe-6048-49de-9463-e42ac539ae40.mp4

## VIDEO ON EXPLAINING THE TESTING

https://user-images.githubusercontent.com/101052348/161417435-57c9a413-5af1-49a0-8193-37702a4206a6.mp4

# M1_CARRENTANDWASH
## Module 1 Project

|FOLDER|DESCRIPTION|
| --------------- | --------------- |
|0_Certificates|Contains all the certificates of learning|
|1_Requirements|Contains Details of requirements|
|2_Architecture|Contains Readme file specifying architecture and detail|
|3_Implementation|Project code (source code and testing) |
|4_TestPlanAndOutput|Test plans and procedures|
|5_Report|Overall details of project|
|6_ImagesAndVideos|Output images and Explanation Videos|

# BADGES

## CODACY

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/c1abe40b561644a3bbc7ca11d0abaee4)](https://www.codacy.com/gh/herenajoshika/M1_CARRENTANDWASH/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=herenajoshika/M1_CARRENTANDWASH&amp;utm_campaign=Badge_Grade)

## CODIGA

![Codiga_Badge](https://api.codiga.io/project/32527/score/svg)

## WORKFLOWS


|WORKFLOW| BADGE |
| --------------- | --------------- |
| Build |[![C/C++ CI](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/c_build.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/c_build.yml)|
| Unit Test |[![Unit Testing - Unity](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/unity.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/unity.yml)|
| Cpp Check |[![Code Quality - Static Code - Cppcheck](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/cppcheck.yml)|
|Code Coverage|[![CI-Coverage](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/gcov.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/gcov.yml)|
| GIT Inspector |[![Contribution Check - Git Inspector](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/gitinspector.yml)|
|  Build on Windows |[![Build CI - Windows](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/BUILD_windows.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/BUILD_windows.yml) |
| Valgrind |[![Valgrind](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/Dynamic_codequality.yml/badge.svg)](https://github.com/herenajoshika/M1_CARRENTANDWASH/actions/workflows/Dynamic_codequality.yml)|

# VALGRIND

![Valgrind1](https://user-images.githubusercontent.com/101052348/161421380-e1cbf6da-3b2f-457d-bd4d-39b7f6132f8b.png)
![Valgrind2](https://user-images.githubusercontent.com/101052348/161421407-04690005-d339-4009-99b2-10544a1c97cf.png)






