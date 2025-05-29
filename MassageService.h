#ifndef MASSAGESERVICE_H
#define MASSAGESERVICE_H

#include "Service.h"
#include <string>

class MassageService : public Service {
public:
    using Service::calculateFinalPrice;   
    MassageService(const std::string& name,
                   int duration,
                   double basePrice);


    void registerService(const std::string& name,
                         int duration,
                         double basePrice,
                         const std::string& time);

    double calculateFinalPrice() override;

   
    void displaySummary(bool returningClient) override;

private:
    std::string appointmentTime;
};

#endif
