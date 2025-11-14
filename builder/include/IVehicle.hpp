#pragma once

#include <string>

class IVehicle {
  public:
      // getters
      const std::string &Brakes() const;
      const std::string &Acceleration() const;

      // setters
      void Brakes(const std::string &);
      void Acceleration(const std::string &);

      // in case anyone wants to override this
      virtual void Display() const;
  protected:
    std::string m_acceleration;
    std::string m_brakes;
    std::string m_wheeler;

    // Don't want this to change dynamically, set once by concrete
    // implementation
    IVehicle(const std::string &);
};
