class Speed
{
protected: 
// mps to -----
    float mps_kmps(float speed)
    {
        return (speed / 1000);
    }
    float mps_kmph(float speed)
    {
        return (speed * 3.6);
    }
    float mps_mph(float speed)
    {
        return (speed * 2.237);
    }
    // kmps to --------
    float kmps_mps(float speed)
    {
        return (speed * 1000);
    }
    float kmps_kmph(float speed)
    {
        return (speed * 3600);
    }
    float kmps_mph(float speed)
    {
        return (speed * 2237);
    }
    // kmph to -------
    float kmph_mps(float speed)
    {
        return (speed / 3.6);
    }
    float kmph_kmps(float speed)
    {
        return (speed / 3600);
    }
    float kmph_mph(float speed)
    {
        return (speed / 1.609);
    }
    /// mph to
    float mph_mps(float speed)
    {
        return (speed / 2.237);
    }
    float mph_kmps(float speed)
    {
        return (speed / 2237);
    }
    float mph_kmph(float speed)
    {
        return (speed * 1.609);
    }
};