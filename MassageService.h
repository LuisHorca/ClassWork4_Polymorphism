// MassageService.h
#ifndef MASSAGESERVICE_H
#define MASSAGESERVICE_H

#include "Service.h"
#include <string>

class MassageService : public Service {
private:
    std::string appointmentTime;
public:
    MassageService(const std::string& name,
                   int duration,
                   double basePrice);

    // overload to also set appointment time
    void registerService(const std::string& name,
                         int duration,
                         double basePrice,
                         const std::string& time);

    // surcharge over 60 minutes
    double calculateFinalPrice() override;

    // full booking summary
    void displaySummary(bool returningClient) override;
};

#endif
