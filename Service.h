// Service.h
#ifndef SERVICE_H
#define SERVICE_H

#include <string>

class Service {
protected:
    std::string serviceName;
    int duration;        
    double basePrice;
public:
    Service(const std::string& name, int duration, double basePrice);

    // (re)register core data
    virtual void registerService(const std::string& name,
                                 int duration,
                                 double basePrice);

    // print name, duration, base price
    virtual void describeService();

    // compute final price before any client‐type discount
    virtual double calculateFinalPrice() = 0;

    // overloaded: apply returning‐client discount
    double calculateFinalPrice(bool returningClient);

    // print full summary including discounts
    virtual void displaySummary(bool returningClient) = 0;

    virtual ~Service();
};

#endif
