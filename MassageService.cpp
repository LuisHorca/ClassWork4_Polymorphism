#include "MassageService.h"
#include <iostream>
#include <iomanip>

MassageService::MassageService(const std::string& name,
                               int duration,
                               double basePrice)
    : Service(name, duration, basePrice) {}

void MassageService::registerService(const std::string& name,
                                     int duration,
                                     double basePrice,
                                     const std::string& time) {
    Service::registerService(name, duration, basePrice);
    appointmentTime = time;
}

double MassageService::calculateFinalPrice() {
    double price = basePrice;
    if (duration > 60) {
        price += 200.0;  // surcharge
    }
    return price;
}

void MassageService::displaySummary(bool returningClient) {
    std::cout << "\n----- Booking Summary -----\n";
    describeService();
    std::cout << "Appointment Time: " << appointmentTime << "\n"
              << "Client Type:      "
              << (returningClient ? "Returning" : "New") << "\n"
              << std::fixed << std::setprecision(2)
              << "Final Price:      $"
              << calculateFinalPrice(returningClient) << "\n";
}
