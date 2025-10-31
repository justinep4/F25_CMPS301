//
//  main.cpp
//  Quiz 1
//
//  Created by Justine Prajitno on 10/1/25.
//

#include <iostream>
using namespace std;

int main()
{
    // Total minutes in a day
    int total_day = 1440; // 24 hours * 60 minutes

    // Activity times in minutes
    int sleep = 390;       // 6 hrs 30 min
    int classes = 180;     // 3 hrs
    int meals = 135;       // 2 hrs 15 min
    int basketball = 280;  // 4 hrs 40 min
    int rehab = 30;     // 30 min
    int homework = 165;    // 2 hrs 45 min
    int commuting = 90;    // 1 hr 30 min
    int work = 60;         // 1 hr
    int other = total_day - (sleep + classes + meals + basketball + rehab + homework + commuting + work);

    // Totals
    int productive = classes + homework + basketball + rehab + work;
    int leisure = meals + other;
    double percent = (productive / 1440.0) * 100;

    // Display output
    cout << "================== A PRODUCTIVE DAY IN MY LIFE ==================\n";
    cout << "\nActivity Breakdown:\n\n";

    cout << "Sleep:\t\t" << (sleep/60) << " hrs " << (sleep%60) << " mins\n";
    cout << "Class:\t\t" << (classes/60) << " hrs " << (classes%60) << " mins\n";
    cout << "Meals:\t\t" << (meals/60) << " hrs " << (meals%60) << " mins\n";
    cout << "Basketball:\t" << (basketball/60) << " hrs " << (basketball%60) << " mins\n";
    cout << "Rehab:\t" << (rehab/60) << " hrs " << (rehab%60) << " mins\n";
    cout << "Homework:\t" << (homework/60) << " hrs " << (homework%60) << " mins\n";
    cout << "Commuting:\t" << (commuting/60) << " hrs " << (commuting%60) << " mins\n";
    cout << "Work:\t\t" << (work/60) << " hrs " << (work%60) << " mins\n";
    cout << "Other/Fun:\t" << (other/60) << " hrs " << (other%60) << " mins\n";

    cout << "------------------------------------------------------------------\n";
    cout << "Productive Time:\t" << (productive/60) << " hrs " << (productive%60) << " mins\n";
    cout << "Leisure Time:\t\t" << (leisure/60) << " hrs " << (leisure%60) << " mins\n";
    cout << "Total Time Used:\t24 hrs 0 mins\n";
    cout << "------------------------------------------------------------------\n";

    cout << "You used " << percent << "% of your day productively!\n";

    cout << "\n*****************************************************************\n";
    cout << "So whether you eat or drink or whatever you do, do it all for\n";
    cout << "the glory of God. - 1 Corinthians 10:31\n";
    cout << "*****************************************************************\n";

    return 0;
}
