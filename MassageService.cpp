#include "MassageService.h"
#include <iostream>
#include <iomanip>

void MassageService::displaySummary(bool returningClient) {
    std::cout << std::fixed << std::setprecision(0);
    std::cout
        << "Service: "   << serviceName   << "\n"
        << "Duration: "  << duration      << " minutes\n"
        << "Base Price: $" << basePrice   << "\n"
        << "Time: "      << appointmentTime << "\n";
    if (returningClient) {
        std::cout << "Client Type: Returning Client\n";
    }

    std::cout << "\n";

    if (duration > 60) {
        std::cout << "Note: Duration exceeds 60 minutes. Surcharge applied: 200\n";
    }
    else if (returningClient) {
        std::cout << "Note: Returning client discount applied: 10%\n";
    }

    std::cout
        << "Final Price: $"     << calculateFinalPrice(returningClient) << "\n"
        << "Booking Confirmed\n"
        << "====================================\n";
}
