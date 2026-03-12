#include <iostream> 
#include <iomanip>

using namespace std; 


int main (){ 


// part 1 : 

//i. PART 1: Scene Analysis (Accident vs Murder) 
/*
Before analyzing suspects, evaluate the scene.
Ask the user for the following inputs (1 = Yes, 0 = No) for each of these boolean variables:
• wetFloor
• brokenVase
• heavyObjectMissing
• medicineScattered
*/
int wetFloorPad = 0; 

// ask for the question set A
cout << "Is there a wet floor? (1 for yes, 0 for No): ";
cin >> wetFloorPad;
if (cin.fail() || (wetFloorPad != 0 && wetFloorPad != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    //return 0;  // something goes wrong 
}


// broken vase
cout << "Is there a broken vase? (1 for yes, 0 for No): ";
int brokenVaseStats;
cin >> brokenVaseStats;
if (cin.fail() || (brokenVaseStats != 0 && brokenVaseStats != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    //return 0; 
}
// heavy missing object
cout << "Is there a heavy object missing? (1 for yes, 0 for No): ";
int heavyObjectMissingStats; 
cin >> heavyObjectMissingStats;
if (cin.fail() || (heavyObjectMissingStats != 0 && heavyObjectMissingStats != 1) ) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    //return 1; 
}

cout << "Are medicines scattered around? (1 for yes, 0 for No): ";
int medicineScatteredRecord; 
cin >> medicineScatteredRecord;
if (cin.fail() || (medicineScatteredRecord != 0 && medicineScatteredRecord != 1)) { 
    cin.clear(); 
    cin.ignore(1000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
   // return 1;
}


bool wetFloor = wetFloorPad; 
bool brokenVase = brokenVaseStats; 
bool heavyObjectMissing = heavyObjectMissingStats; 
bool medicineScattered = medicineScatteredRecord; 


/* set 4.1.1  
Use nested logic to decide:
• If heavyObjectMissing == 1
→ likelyMurder = true
• Else if brokenVase == 1
o If wetFloor == 0
→ likelyMurder = true
o Else
→ likelyMurder = false
• Else
o If medicineScattered == 1 AND wetFloor == 0
→ likelyMurder = true
o Else
→ likelyMurder = false


*/


bool likelyMurder = false; 



if (heavyObjectMissing == 1) {
    likelyMurder = true;
} else if (brokenVase == 1) {
    if (wetFloor == 0) {
        likelyMurder = true;
    }  else  { 
            likelyMurder = false;
        }
    } else { 
    if(medicineScattered == 1 && wetFloor == 0) { 
        likelyMurder = true; 
    } else { 
        likelyMurder = false;
        
    }
}


//note 4.1.2 
/*
 
Based on the value of “likelyMurder” variable, print:
• Case status: Likely Murder
• Or, Case status: Likely Accident

*/


if (likelyMurder) {
    cout << "Case status: Likely Murder" << endl;
    // Continue to Part 2 and Part 3
} else {
    cout << "Case status: Likely Accident" << endl;
    return 0; // since we can not use while loops 
//Remember: If accident is likey, then your program will stop there. Otherwise,
//your program will move on to Part 2 and Part 3.
}
//step 4.2 

/*
PART 2− Suspect Evaluation
For EACH of the five suspects, you must compute:
• bool hasMotive;
• bool presentThere;
• bool hasAlibi;
• bool hasFingerprints;
• int suspicionLevel;
Suspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
bool brownHasMotive = false;
bool brownPresentThere = false;
bool brownHasAlibi = false;
bool brownHasFingerPrints = false;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int brownSuspicionLevel = 0;


/* To determine the suspesion level we will use this format: 
if (hasMotive)
{
if (presentThere)
{
if (!hasAlibi)
{
if (hasFingerprints)
suspicionLevel = 3;
else
suspicionLevel = 2;
}
else
suspicionLevel = 1;
}
else
suspicionLevel = 1;
}
else
suspicionLevel = 0;

*/
        
// step 4.3 Intreview questions and evidence mapping 

/*
Each suspect has different questions. All inputs are 1 (Yes) or 0 (No).
Mr. Brown is Mr. Ed’s lawyer. He is fully aware of all of Mr. Ed’s assets and is currently
preparing the final version of his will
*/

cout << "\n" << endl;

cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 1: Mr.Brown (lawyer)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
/*
Ask proper questions to the suspects to collect values for the input evidence variables.
Example: 
i. Would Mr. Brown benefit from a will change?
ii. Did Mr. Brown argue with Mr. Ed today?
iii. Was Mr. Brown seen near the hallway/bathroom area?
iv. Was Mr. Brown on a confirmed phone call at that time (verified alibi)?
v. Were Mr. Brown's fingerprints found on the bathroom door handle?
*/
 

int ansBrownWillChangeBeneifit;
cout << "Would Mr. Brown benefit from a will change? (1/0): "; 
    cin >> ansBrownWillChangeBeneifit;
 if(cin.fail() || (ansBrownWillChangeBeneifit != 0 && ansBrownWillChangeBeneifit != 1)) {
     cin.clear(); 
     cin.ignore(1000,'\n');
     cout << "Invalid input. Enter 1 or 0 only.\n" ;
     return 1;
 
 } 
 bool brownWillChangeBenefit = ansBrownWillChangeBeneifit; 

int ansBrownArguedToday; 
cout << "Did Mr. Brown argue with Mr. Ed today? (1/0): "; 
    cin >> ansBrownArguedToday; 
    if (cin.fail() || (ansBrownArguedToday != 0 && ansBrownArguedToday != 1)) {
        cin.clear(); 
        cin.ignore(1000,'\n'); 
        cout << "Invalid input. Enter 1 or 0 only.\n";
        return 1; 
    }
int ansBrownSeenNearHallway; 
cout << "Was Mr. Brown seen near the hallway/bathroom area? (1/0): "; 
    cin >> ansBrownSeenNearHallway; 
    if (cin.fail() || (ansBrownSeenNearHallway != 0 && ansBrownSeenNearHallway != 1)) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Invalid input. Enter 1 or 0 only.\n";
        return 1;
    }

int ansBrownConfirmedPhoneCall; 
cout << "Was Mr. Brown on a confirmed phone call at that time (verified alibi)? (1/0): "; 
    cin >> ansBrownConfirmedPhoneCall; 
    if (cin.fail() || (ansBrownConfirmedPhoneCall != 0 && ansBrownConfirmedPhoneCall != 1)) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Invalid input. Enter 1 or 0 only.\n";
        return 1;
    }
int ansBrownPrintsOnDoorHandle; 
cout << "Were Mr. Brown's fingerprints found on the bathroom door handle? (1/0): "; 
cin >> ansBrownPrintsOnDoorHandle; 
    if (cin.fail() || (ansBrownPrintsOnDoorHandle != 0 && ansBrownPrintsOnDoorHandle != 1)) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Invalid input. Enter 1 or 0 only.\n";
        return 1;
    }

bool brownArguedToday = ansBrownArguedToday; 
bool brownConfirmedPhoneCall = ansBrownConfirmedPhoneCall;
bool brownSeenNearHallway =  ansBrownSeenNearHallway;
bool brownPrintsOnDoorHandle = ansBrownPrintsOnDoorHandle; 
// conditions for motive, present there or alibi ,fingerpritns,etc 
// logic 
if(brownWillChangeBenefit || brownArguedToday) {
        brownHasMotive = true; 
    }
if (brownSeenNearHallway) { 
    brownPresentThere = true;
}

if (brownConfirmedPhoneCall) { 
    brownHasAlibi = true; 
}

if (brownPrintsOnDoorHandle) { 
    brownHasFingerPrints = true; 
}

//suspicion lofgic 
if (brownHasMotive) { 
    if(brownPresentThere) {
        if(!brownHasAlibi) {
            if(brownHasFingerPrints) { 
                brownSuspicionLevel = 3;
            } else {
            
            brownSuspicionLevel = 2;
        }
        }
           else {

            brownSuspicionLevel = 1;
        }
        } 
        else { 
           brownSuspicionLevel =1;
    }
     
    }
    else { 
    brownSuspicionLevel =0;
}
        




bool parkerHasMotive = false;
bool parkerPresentThere = false;
bool parkerHasAlibi = false;
bool parkerHasFingerPrints = false;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int parkerSuspicionLevel = 0;


// parker violin 
cout << "\n" << endl; 
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 2: Parker (Violin Teacher)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;

int ansParkerUnpaidLessonFees;
cout << "Did Mr. Ed owe Parker unpaid lesson fees? (1/0): "; 
    cin >> ansParkerUnpaidLessonFees; 
int ansParkerHeardViolinOutsisde;
cout << "Was violin music heard outside at the time (possible alibi)? (1/0): "; 
    cin >> ansParkerHeardViolinOutsisde;
int ansParkerSeenLeavingBackyardGate; 
cout << "Was Parker seen leaving the backyard gate around that time? (1/0): "; 
    cin >> ansParkerSeenLeavingBackyardGate; 
int ansParkerPrintsOnMirror;
cout << "Were Parker's fingerprints found on the bathroom mirror? (1/0): "; 
    cin >> ansParkerPrintsOnMirror; 
cout << "\n "<< endl; 

bool parkerUnpaidLessonFees = ansParkerUnpaidLessonFees;
bool parkerHeardViolinOutsisde = ansParkerHeardViolinOutsisde;
bool parkerSeenLeavingBackyardGate = ansParkerSeenLeavingBackyardGate;
bool parkerPrintsOnMirror = ansParkerPrintsOnMirror; 
if(parkerUnpaidLessonFees) { 
    parkerHasMotive = true;
    }
if(parkerHeardViolinOutsisde ) { 
   parkerHasAlibi = true; 
}
if(parkerSeenLeavingBackyardGate && !parkerHeardViolinOutsisde ) { 
    parkerPresentThere = true; 
}
if(parkerPrintsOnMirror) { 
    parkerHasFingerPrints = true;
}

/* 
hasMotive is true → if unpaidLessonFees is true
• has Alibi is true → if heardViolinOutside is true
• presentThere is true → if seenLeavingBackyardGate is true and
heardViolinOutside is false
• hasFingerprints is true → printsOnMirror is true
*/
//suspicion logic 


if (parkerHasMotive) { 
    if(parkerPresentThere) {
        if(!parkerHasAlibi) {
            if(parkerHasFingerPrints) { 
                parkerSuspicionLevel = 3;
            } else {
            
            parkerSuspicionLevel = 2;
        }
        }
           else {

            parkerSuspicionLevel = 1;
        }
        } 
        else { 
           parkerSuspicionLevel =1;
    }
     
    }
    else { 
    parkerSuspicionLevel =0;
}
        





bool markHasMotive = false;
bool markPresentThere = false;
bool markHasAlibi = false;
bool markHasFingerPrints = false;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int markSuspicionLevel = 0;


//college buddy (Mark) 
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 3: Mark (College Buddy)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
int ansMarkLoanRefused; 
cout << "Did Mr. Ed refuse Mark a loan today? (1/0) :"; 
    cin >> ansMarkLoanRefused; 
int ansMarkDrankTooMuch; 
cout << "Did Mark drink too much at the party? (1/0) :"; 
    cin >> ansMarkDrankTooMuch; 
int ansMarkSeenNearBathroom; 
cout << "Was Mark seen near the bathroom area? (1/0) :"; 
    cin >> ansMarkSeenNearBathroom;
int ansMarkNurseSawWithGroup; 
cout << "Did the nurse confirm Mark stayed with the group (verified alibi)? (1/0) :"; 
    cin >> ansMarkNurseSawWithGroup; 
int ansMarkPrintsOnCabinet; 
cout << "Were Mark's fingerprints found on the bathroom cabinet? (1/0) :"; 
    cin >> ansMarkPrintsOnCabinet; 


cout << "\n" << endl;
/* 
hasMotive → if loanRefused OR drankTooMuch
• presentThere → if seenNearBathroom
hasAlibi → if nurseSawWithGroup
• hasFingerprints → if printsOnCabinet
*/

bool markLoanRefused = ansMarkLoanRefused;
bool markDrankTooMuch = ansMarkDrankTooMuch; 
bool markSeenNearBathroom = ansMarkSeenNearBathroom; 
bool markNurseSawWithGroup = ansMarkNurseSawWithGroup;
bool markPrintsOnCabinet = ansMarkPrintsOnCabinet; 



if(markLoanRefused || markDrankTooMuch) { 
    markHasMotive = true; 
}
if(markSeenNearBathroom) { 
    markPresentThere = true;
}
if(markNurseSawWithGroup) { 
    markHasAlibi = true; 
}
if (markPrintsOnCabinet) { 
    markHasFingerPrints = true; 
}

if (markHasMotive) { 
    if(markPresentThere) {
        if(!markHasAlibi) {
            if(markHasFingerPrints) { 
                markSuspicionLevel = 3;
            } else {
            
            markSuspicionLevel = 2;
        }
        }
           else {

            markSuspicionLevel = 1;
        }
        } 
        else { 
           markSuspicionLevel =1;
    }
     
    }
    else { 
    markSuspicionLevel =0;
}
        


if (markDrankTooMuch == 1 && wetFloor == 1 && heavyObjectMissing == 0 ) { 
    markSuspicionLevel--; 

}
//reduce suspicionLevel by 1 (but not below 0)
if (markSuspicionLevel < 0 ) { 
    markSuspicionLevel = 0; 
}




/* Bonus twist:
If drankTooMuch == 1 AND wetFloor == 1 AND heavyObjectMissing == 0
→ reduce suspicionLevel by 1 (but not below 0)
*/


bool dayanHasMotive = false;
bool dayanPresentThere = false;
bool dayanHasAlibi = false;
bool dayanHasFingerPrints = false;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int dayanSuspicionLevel = 0;

cout << "\n" << endl;
// Dayan 
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 4: Dayan (Chess Partner)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
int ansDayanLostChessMatch;
cout << "Did Dayan lose a chess match to Mr. Ed today? (1/0): "; 
    cin >> ansDayanLostChessMatch; 
int ansDayanCompetitiveAngry;
cout << "Was Dayan visibly angry/competitive about losing? (1/0): "; 
    cin >> ansDayanCompetitiveAngry; 
int ansDayanSeenNearBathroom; 
cout << "Was Dayan seen near the bathroom area? (1/0): "; 
    cin >> ansDayanSeenNearBathroom;
int ansDayanWasStreamingOnline; 
cout << "Was Dayan confirmed to be streaming online at the time (verified alibi)? (1/0): "; 
cin >> ansDayanWasStreamingOnline; 
int ansDayanPrintsOnFaucet; 
    cout << "Were Dayan's fingerprints found on the bathroom faucet? (1/0): "; 
cin >> ansDayanPrintsOnFaucet; 

bool dayanLostChessMatch = ansDayanLostChessMatch;
bool dayanCompetitiveAngry = ansDayanCompetitiveAngry; 
bool dayanSeenNearBathroom = ansDayanSeenNearBathroom; 
bool dayanWasStreamingOnline = ansDayanWasStreamingOnline; 
bool dayanPrintsOnFaucet = ansDayanPrintsOnFaucet; 

/*

hasMotive → true only if lostChessMatch and competitiveAngry.;
There → true if seenNearBathroom.
• hasAlibi → true if wasStreamingOnline.
• hasFingerprints → true if printsOnFaucet.

*/

if(dayanLostChessMatch && dayanCompetitiveAngry) { 
    dayanHasMotive = true; 
}
if(dayanSeenNearBathroom) { 
    dayanPresentThere = true; 
}
if (dayanWasStreamingOnline) {
    dayanHasAlibi = true; 
}
if(dayanPrintsOnFaucet) { 
    dayanHasFingerPrints = true;
}


 if (dayanHasMotive) { 
    if(dayanPresentThere) {
        if(!dayanHasAlibi) {
            if(dayanHasFingerPrints) { 
                dayanSuspicionLevel = 3;
            } else {
            
            dayanSuspicionLevel = 2;
        }
        }
           else {

            dayanSuspicionLevel = 1;
        }
        } 
        else { 
           dayanSuspicionLevel =1;
    }
     
    }
    else { 
    dayanSuspicionLevel =0;
}




bool elenaHasMotive = false;
bool elenaPresentThere = false;
bool elenaHasAlibi = false;
bool elenaHasFingerPrints = false;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int elenaSuspicionLevel = 0;



cout << "\n" << endl;


//Ms. Elena (Pen Friend)
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 5: Ms. Elena (Pen Friend)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;

int ansEllenaSecrectHistory; 
cout << "Did Mr. Ed seem shocked/uncomfortable after seeing Ms. Elena (secret (1/0): ";
    cin >> ansEllenaSecrectHistory; 
int ansElenaAskedPrivateTalk ; 
cout << "Did Ms. Elena ask Mr. Ed to talk privately? (1/0): ";
    cin >> ansElenaAskedPrivateTalk; 
int ansElenaStayedWithGroup; 
cout << "Did Ms. Elena stay with the group the whole time? (1/0): ";
    cin >>  ansElenaStayedWithGroup;
int ansElenaPrintsOnMedicineBox; 
cout << "Were Ms. Elena's fingerprints found on a medicine box in the bathroom? (1/0): ";
    cin >> ansElenaPrintsOnMedicineBox;  

bool elenaStayedWithGroup = ansElenaStayedWithGroup; 
bool elenaSecrectHistory = ansEllenaSecrectHistory; 
bool elenaAskedPrivateTalk = ansElenaAskedPrivateTalk;
bool elenaPrintsOnMedicineBox = ansElenaPrintsOnMedicineBox; 
/* 
hasMotive → true if Ms. Elena has a secretHistory or if she askedPrivateTalk
• hasAlibi → true if she stayedWithGroup
• presentThere → true if she did not stayedWithGroup (meaning she could have been
near the bathroom).
• hasFingerprints → true if printsOnMedicineBox
*/

if (elenaSecrectHistory || elenaAskedPrivateTalk) { 
    elenaHasMotive = true;
}
// if(elenaStayedWithGroup) { 
//     elenaPresentThere = true; 
// }
// if(!elenaStayedWithGroup) { 
//     elenaPresentThere = true; 
// }

if(elenaPrintsOnMedicineBox) { 
    elenaHasFingerPrints = true; 
}
elenaPresentThere = !elenaStayedWithGroup; 

 if (elenaHasMotive) { 
    if(elenaPresentThere) {
        if(!elenaHasAlibi) {
            if(elenaHasFingerPrints) { 
                elenaSuspicionLevel = 3;
            } else {
            
            elenaSuspicionLevel = 2;
        }
        }
           else {

            elenaSuspicionLevel = 1;
        }
        } 
        else { 
           elenaSuspicionLevel =1; 
    }
     
    }
    else { 
    elenaSuspicionLevel =0;
}

//Initialize
int bestLevel = -1;
string bestName = "";

// Check Mr. Brown
if (brownSuspicionLevel > bestLevel) {
    bestLevel = brownSuspicionLevel;
    bestName = "Mr. Brown";
}

// Check Parker
if (parkerSuspicionLevel > bestLevel) {
    bestLevel = parkerSuspicionLevel;
    bestName = "Parker";
}

// Check Mark
if (markSuspicionLevel > bestLevel) {
    bestLevel = markSuspicionLevel;
    bestName = "Mark";
}

// Check Dayan
if (dayanSuspicionLevel > bestLevel) {
    bestLevel = dayanSuspicionLevel;
    bestName = "Dayan";
}

// Check Ms. Elena
if (elenaSuspicionLevel > bestLevel) {
    bestLevel = elenaSuspicionLevel;
    bestName = "Ms. Elena";
}



cout << "\n============================================\n";
cout << "            Investigation Result \n";
cout << "============================================\n";

if (!likelyMurder) {
    cout << "Final Conclusion: No clear suspect (likely accidental case)." << endl;
} 
else {
    if (bestLevel == 3) {
        cout << "Murderer: " << bestName << endl;
    }
    else if (bestLevel == 2) {
        cout << "Prime Suspect: " << bestName << endl;
    }
    else {
        cout << "No clear suspect." << endl;
    }
}
    return 0; 
}
