class Area{
    protected:
    double acres_to_sqr_feet(float acres)
{
    return (acres * 43560) ;
}
double acres_to_sqr_mtr(float data)
{
    return data * (4046.856) ;
}
double acres_to_sqr_inch(float data)
{
    return (double)data * (6.273e+6) ;
}
double acres_to_hect(float data)
{
    return (double)data / (2.471) ;
}
// square feet to----
double sqr_feet_to_acre(float data)
{
    return data / 43560 ;
}
double sqr_feet_to_mtr(float data)
{
    return data / 10.764 ;
}
double sqr_feet_to_inch(float data)
{
    return data * 144 ;
}
double sqr_feet_to_hect(float data)
{
    return data / 107600 ;
}
// sqr inch to-----------
double sqr_inch_to_acre(float data)
{
    return (double)data / (6.273e+6) ;
}
double sqr_inch_to_mtr(float data)
{
    return data / 1550 ;
}
double sqr_inch_to_feet(float data)
{
    return data / 144 ;
}
double sqr_inch_to_hect(float data)
{
    return data / (1.55e+7); 
}
// sqqr meter to--------
double sqr_mtr_to_acre(float data)
{
    return data / 4047 ;
}
double sqr_mtr_to_feet(float data)
{
    return data * 10.764 ;
}
double sqr_mtr_to_sqr_inc(float data)
{
    return data * 1550 ;
}
double sqr_mtr_to_hect(float data)
{
    return data / 10000 ;
}
// hectare to --
double hect_to_acre(float data)
{
    return data * (2.471) ;
}
double hect_to_feet(float data)
{
    return data * 107600 ;
}
double hect_to_mtr(float data)
{
    return data * 10000 ;
}
double hect_to_inch(float data)
{
    return data * (1.55e+7); 
}
};