---
name: Checklist Lab 3
about: Template for evaluation of lab results

---

# Expected Results for UML Class Diagram **_Travel_Company_CD**
- [ ] Person is abstract; 2 inheritance relationships
- [ ] 1..*-Association for certification from TourGuide to AdventurePackage including reading direction
- [ ] Trip with 3 aggregations
- [ ] Booking as *association class* between Trip and Participant
- [ ] Diagram complete and follows UML standard

# Expected Results for UML Sequence Diagram **_Book_Borrowing_SQD**
- [ ] 4 objects available at beginning; Ebook-Object created with constructor
- [ ] Realized that a parameter for the name is missing in the constructor of Ebook?
- [ ] Method *borrow* includes *getPrice* (private!) and *charge*
- [ ] Link is generated and returned by Ebook
- [ ] Use of asynchronous messages for communication to human
- [ ] All synchronous messages have a method call, an activation bar and a return
- [ ] Diagram complete and follows UML standard

# Expected Results for UML Class Diagram of Observer (*_Observer_CD.pdf*)
- [ ] Subject as abstract class with attach, detach and notify
- [ ] Observer as an Interface with abstract method *update*
- [ ] SystemBattery with setter and getter inherits from Subject
- [ ] BatteryApp implements Observer-Interface (*update*) and implements-relation
- [ ] BatteryLogger implements Observer-Interface (*update*) with implements-relation
- [ ] Subject has many Observers (Aggregation)
- [ ] BatteryApp and BatteryLogger have 1 subject (Aggregation)
- [ ] Diagram complete and follows UML standard

# Expected Results for UML Sequence Diagram of Observer (*_Observer_SQD.pdf*)
- [ ] 4 objects already existing at start (main, systemBattery, batteryApp and batteryLogger)
- [ ] *setBattery* changes the state of the concrete subject *systemBattery* and this starts *notify*
- [ ] *notify* starts *update* for both observers (batteryApp and batteryLogger) and returns later
- [ ] *Observers* call *getData* within *update*
- [ ] *cout* to main after *getData* as asynchronous call
- [ ] Stacking of activation bars is correct
- [ ] Diagram complete and follows UML standard

# General Lab3
- [ ] Code published in time?
- [ ] BatteryLogger implemented? Implements Observer-Interface? (*update*)
- [ ] main-File creates object of BatteryLogger?

# Preparation Lab4
- [ ] UML Class Diagram "Navigation using Inheritance" (*_Navigation_Inheritance_CD*) fulfills the basic expectations (class diagram using inheritance)
- [ ] UML Class Diagram "Navigation using Strategy Pattern" (_Navigation_Strategy_CD.pdf*) fulfills the basic expectations (Abstract class implemented by sub-classes)

# Comments / Hints
Preparation _Navigation_Inheritance_CD:

Preparation _Navigation_Strategy_CD:

Observer CD:

Observer SQD:

Code:

# Result (traffic light rating)
- 
