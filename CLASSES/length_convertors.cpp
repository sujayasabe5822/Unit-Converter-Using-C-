class Length{
protected:
    // mili to ------
    double mil_cent(int data){
        return (double)(data/10);
    }
    float mil_met(int data){
        return (float)(data/1000);
    }
    double mil_kilo(int data){
        return (double)(data/(1e+6));
    }
    double mil_feet(int data){
        return (double)(data/(304.8));
    }
    double mil_inch(int data){
        return (double)(data/(25.4));
    }
    //centi to ----
    double cent_milli(int data){
        return (data*(10));
    }
      float cent_met(int data){
        return (float)(data/(100));
    }
       float cent_kilo(float data){
        return (data/(100000));
    }
        float cent_feet(float data){
        return (data/(30.48));
    }
       double cent_inch(int data){
        return (double)(data/(2.54));
    }
    //meter to ---
    double met_milli(float data){
        return (double)(data*(1000));
    }
    double met_cent(int data){
        return (double)(data*(100));
    }
    float met_kilo(float data){
        return (data/(1000));
    }
    double met_feet(int data){
        return (double)(data*(3.281));
    }
    double met_inch(int data){
        return (data*(39.37));
    }
    //kilo to -----
    double kilo_milli(int data){
         return (data*(1e+6));
    }
    double kilo_centi(int data){
         return (data*(100000));
    }
    double kilo_meter(int data){
         return (data*(1000));
    }
    double kilo_feet(int data){
         return (data*(3281));
    }
     double kilo_inch(int data){
         return (data*(39370));
    }
    // feet to ----
   double feet_milli(int data){
         return (data*(304.8));
    }
    double feet_centi(int data){
         return (data*(30.48));
    }
    float feet_met(float data){
         return (data/(3.281));
    }
    float feet_kilo(float data){
         return (data/(3281));
    }
     double feet_inch(int data){
         return (data*(12));
    }
    //inch to ------
    double inch_milli(int data){
         return (data*(25.4));
    }
    double inch_centi(int data){
         return (data*(2.54));
    }
    float inch_kilo(float data){
         return (data/(39390));
    }
    float inch_met(float data){
         return (data/(39.390));
    }
    double inch_foot(float data){
         return (double)(data/(12));
    }
};