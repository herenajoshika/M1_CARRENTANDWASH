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
