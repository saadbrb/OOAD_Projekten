---
name: Checklist Lab 1
about: Template for evaluation of lab results

---

# Expected Refactorings
- [ ] The numbers 10 and 5 are used instead of 11 and 6? (i.e. <6 was replaced by <= 5)
- [ ] Name of updateQuality() changed (e.g. to *updateAllItems()*)?
- [ ] Content of for loop extracted to separate method? (Loop should only contain a single line of code!)
- [ ] Many occurrences of "items[i]" in the body of the for loop replaced? (e.g. by local variable)  
- [ ] Repeating code for incrementing and decrementing the quality (including boundary check) replaced by method?
- [ ] For-Loop replaced by For-Each-Loop (without index)?

# Preparation for inheritance
- [ ] *item->name* was replaced by *item->typeOf()*
- [ ] updateQuality() contains 5 disjoint if's

# General
- [ ] Code published in time?
- [ ] Code uses a consistent style? (e.g. Reformat does not change a thing)
- [ ] The tests are still green (except the tests for conjured items)!?
- [ ] There are no *magic literals* in the code anymore!?
- [ ] The code uses *meaningful names* for variables and methods!?
- [ ] The code is quite easy to read!?


# Comments / Hints
- 

# Result (traffic light rating)
- 
