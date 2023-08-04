---
name: Checklist Lab 5
about: Template for evaluation of lab results

---

# Code of Lab5
- [ ] Results published in time? 
- [ ] Code is still working and fulfills requirements?

# Expected Results for "LSP and the Gilded Rose" 
- [ ] Class *Item* is abstract and declares pure virtual method *updateQuality()*
- [ ] New class *NormalItem* implements *updateQuality()*
- [ ] Inheritance hierarchy of *Item*s now follows LSP?

# Expected Results for "Factory Method meets Gilded Rose"
- [ ] Class *ItemCreator* is abstract and declares pure virtual method *createItem()*
- [ ] Class *ConcreteItemCreator* is concrete and implements method *createItem()*
- [ ] Constructor of *GildedRose* creates and assigns an object of type *ItemCreator\**
- [ ] The *createItem()*-method of *GildedRose* forwards any calls to *ConcreteItemCreator*
- [ ] The *createItem()*-method of *ConcreteItemCreator* creates different Item-Objects depending on the given name 
- [ ] Factory Method applied correctly

# Comments / Hints
- 

# Result (traffic light rating)
- 
