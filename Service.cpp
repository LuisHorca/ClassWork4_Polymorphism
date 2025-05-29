#include "Service.h"
#include <iostream>
#include <iomanip>

Service::Service(const std::string& name, int duration, double basePrice)
    : serviceName(name), duration(duration), basePrice(basePrice) {}

void Service::registerService(const std::string& name,
                              int duration,
                              double basePrice) {
    serviceName = name;
    this->duration = duration;
    this->basePrice = basePrice;
}

void Service::describeService() {
    std::cout << "Service:      " << serviceName << "\n"
              << "Duration:     " << duration << " minutes\n"
              << std::fixed << std::setprecision(2)
              << "Base Price:   $" << basePrice << "\n";
}

double Service::calculateFinalPrice(bool returningClient) {
    double price = calculateFinalPrice();
    if (returningClient) {
        price *= 0.90;  // 10% discount
    }
    return price;
}

Service::~Service() {}
