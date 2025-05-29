#include <iostream>
#include "MassageService.h"

using namespace std;

int main() {
    cout << "Welcome to the SPA Service Management System\n\n";

    // 1. Get desired duration
    int duration;
    cout << "Enter desired duration for the Massage (in minutes): ";
    cin >> duration;

    // 2. Get appointment time
    string timeInput;
    cout << "Enter appointment time (e.g., 15:30): ";
    cin >> timeInput;

    // 3. Get client status
    cout << "Are you a returning client? (yes/no): ";
    string resp;
    cin >> resp;
    bool returningClient = (resp == "yes" || resp == "y" || resp == "Y");

    // 4. Create and register service
    double defaultBasePrice = 500.0;
    MassageService massage("Personalized Therapeutic Massage",
                           duration,
                           defaultBasePrice);
    massage.registerService("Personalized Therapeutic Massage",
                            duration,
                            defaultBasePrice,
                            timeInput);

    // 5. Use polymorphism to describe and summarize
    Service* servicePtr = &massage;

    cout << "\nAvailable Service Details:\n";
    servicePtr->describeService();
    cout << "Appointment Time: " << timeInput << "\n";

    // 6. Show final booking summary
    servicePtr->displaySummary(returningClient);

    return 0;
}
