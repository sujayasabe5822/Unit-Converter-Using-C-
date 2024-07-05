class Time
{
protected: 
    // ms to ------
    float ms_sec(float time)
    {
        return (time / 1000);
    }
    float ms_min(float time)
    {
        return (time / 60000);
    }
    float ms_hrs(float time)
    {
        return (time / (3.6e+6));
    }
    float ms_days(float time)
    {
        return (time / 8.64e+7);
    }

    // second to ------
    float sec_ms(float time)
    {
        return (time * 1000);
    }
    float sec_min(float time)
    {
        return (time / 60);
    }
    float sec_hrs(float time)
    {
        return (time / 3600);
    }
    float sec_day(float time)
    {
        return (time / 86400);
    }
    // minutes to --
    float min_ms(float time)
    {
        return (time * 60000);
    }
    float min_sec(float time)
    {
        return (time * 60);
    }
    float min_hrs(float time)
    {
        return (time / 60);
    }
    float min_day(float time)
    {
        return (time / 1440);
    }
    // hrs to ------
    float hrs_ms(float time)
    {
        return (time * (3.6e+6));
    }
    float hrs_sec(float time)
    {
        return (time * (3600));
    }
    float hrs_min(float time)
    {
        return (time * (60));
    }
    float hrs_day(float time)
    {
        return (time / (24));
    }
    // days to -----
    float day_ms(float time)
    {
        return (time * (8.64e+7));
    }
    float day_sec(float time)
    {
        return (time * (86400));
    }
    float day_min(float time)
    {
        return (time * (1440));
    }
    float day_hrs(float time)
    {
        return (time * (24));
    }
};