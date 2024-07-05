class Temperature
{
protected:
    // cals to------
    float cels_fahr(float temp)
    {
        return ((temp * 9 / 5) + 32);
    }
    float cels_kelvin(float temp)
    {
        return (temp + 273.15);
    }
    // fahr to ----
    float fahr_cels(float temp)
    {
        return ((temp - 32) * 5 / 9);
    }
    float fahr_Kelvin(float temp)
    {
        return ((temp - 32) * 5 / 9 + 273.15);
    }
    // kelvin to---
    float kelvin_cels(float temp)
    {
        return (temp - 273.15);
    }
    float kelvin_fahr(float temp)
    {
        return (temp - 273.15) * 9 / 5 + 32;
    }
};