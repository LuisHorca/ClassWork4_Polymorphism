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

 
    virtual void registerService(const std::string& name,
                                 int duration,
                                 double basePrice);

    virtual void describeService();

    virtual double calculateFinalPrice() = 0;

    double calculateFinalPrice(bool returningClient);

  
    virtual void displaySummary(bool returningClient) = 0;

    virtual ~Service();
};

#endif
