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

bool wetFloor = false; 
bool brokenVase = false; 
bool heavyObjectMissing = false; 
bool medicineScattered = false; 
// ask for the question set A
cout << "Is there a wet floor? (1 for yes, 0 for No): ";
cin >> wetFloor;
if (cin.fail() || (wetFloor != 0 && wetFloor != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;  // something goes wrong 
}
cout << "Is there a broken vase? (1 for yes, 0 for No): ";
cin >> brokenVase;
if (cin.fail() || (brokenVase != 0 && brokenVase != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1; 
}

cout << "Is there a heavy object missing? (1 for yes, 0 for No): ";
cin >> heavyObjectMissing;
if (cin.fail() || (heavyObjectMissing != 0 && heavyObjectMissing != 1) ) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1; 
}

cout << "Is there scattered medicine? (1 for yes, 0 for No): ";
cin >> medicineScattered;
if (cin.fail() || (medicineScattered != 0 && medicineScattered != 1)) { 
    cin.clear(); 
    cin.ignore(1000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;
}


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
bool hasMotive;
bool presentThere;
bool hasAlibi;
bool fingerPrints;

/*
uspicion levels:
• 0 → Innocent
• 1 → Suspicious
• 2 → Prime Suspect
• 3 → Murderer
*/
int suspicionLevel;


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
if (hasMotive) { 
    if(presentThere) {
        if(!hasAlibi) {
            if(fingerPrints) { 
                suspicionLevel = 3;
            } else {
            
            suspicionLevel = 2;
        }
        }
           else {

            suspicionLevel = 1;
        }
        } 
        else { 
           suspicionLevel =1;
    }
     
    }
    else { 
    suspicionLevel =0;
}
        
// step 4.3 Intreview questions and evidence mapping 

/*
Each suspect has different questions. All inputs are 1 (Yes) or 0 (No).
Mr. Brown is Mr. Ed’s lawyer. He is fully aware of all of Mr. Ed’s assets and is currently
preparing the final version of his will
*/


cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 1: Mr.Brown (lawyer)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
/*
Ask proper questions to the suspect to collect values for the input evidence variables.
i. Would Mr. Brown benefit from a will change?
ii. Did Mr. Brown argue with Mr. Ed today?
iii. Was Mr. Brown seen near the hallway/bathroom area?
iv. Was Mr. Brown on a confirmed phone call at that time (verified alibi)?
v. Were Mr. Brown's fingerprints found on the bathroom door handle?
*/
cout << "Would Mr. Brown benefit from a will change? (1/0): " << endl; 
cout << "Did Mr. Brown argue with Mr. Ed today? (1/0): " << endl; 
cout << "Was Mr. Brown seen near the hallway/bathroom area? (1/0): " << endl; 
cout << "Was Mr. Brown on a confirmed phone call at that time (verified alibi)? (1/0): " << endl; 
cout << "Were Mr. Brown's fingerprints found on the bathroom door handle? (1/0): " << endl; 
cout << "\n" << endl;
// parker violin 
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 2: Parker (Violin Teacher)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
cout << "Did Mr. Ed owe Parker unpaid lesson fees? (1/0): " << endl; 
cout << "Was violin music heard outside at the time (possible alibi)? (1/0): "<< endl; 
cout << "Was Parker seen leaving the backyard gate around that time? (1/0): "<< endl; 
cout << "Were Parker's fingerprints found on the bathroom mirror? (1/0): "<< endl; 
cout << "\n "<< endl; 
//college buddy
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 3: Mark (College Buddy)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
cout << "Did Mr. Ed refuse Mark a loan today? (1/0) :" << endl; 
cout << "Did Mark drink too much at the party? (1/0) :" << endl; 
cout << "Was Mark seen near the bathroom area? (1/0) :" << endl; 
cout << "Did the nurse confirm Mark stayed with the group (verified alibi)? (1/0) :" << endl; 
cout << "Were Mark's fingerprints found on the bathroom cabinet? (1/0) :" << endl; 
// Dayan 
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 4: Dayan (Chess Partner)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
cout << "Did Dayan lose a chess match to Mr. Ed today? (1/0): " << endl; 
cout << "Was Dayan visibly angry/competitive about losing? (1/0): " << endl; 
cout << "Was Dayan seen near the bathroom area? (1/0): " << endl; 
cout << "Was Dayan confirmed to be streaming online at the time (verified alibi)? (1/0): " << endl; 
cout << "Were Dayan's fingerprints found on the bathroom faucet? (1/0): " << endl; 

//Ms. Elena (Pen Friend)
cout << setfill('=') << setw(28) << "=" << endl;
cout << "Suspect 5: Ms. Elena (Pen Friend)" << endl;
cout << setfill('=') << setw(28) << "=" <<endl;
cout << "Did Mr. Ed seem shocked/uncomfortable after seeing Ms. Elena (secret (1/0): "  << endl;
cout << "Did Ms. Elena ask Mr. Ed to talk privately? (1/0): " << endl;
cout << "Did Ms. Elena stay with the group the whole time? (1/0): " << endl;
cout << "Were Ms. Elena's fingerprints found on a medicine box in the bathroom? (1/0): " << endl;
    return 0; 
}
