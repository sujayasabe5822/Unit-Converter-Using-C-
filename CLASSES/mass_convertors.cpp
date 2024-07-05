class Mass{
    protected:    //grams to ---------
    float gm_kg(float data){
        return (data/1000);
    }
    float gm_tons(float data){
        return (data/1e+6);
    }
    float gm_pounds(float data){
        return (data/453.6);
    }
    //kg to ----------
    float kg_gm(float data){
        return (data*1000);
    }
    float kg_tons(float data){
        return (data/1000);
    }
    float kg_pounds(float data){
        return (data*2.205);
    }
    // tons to -----
    float tons_gm(float data){
        return (data*(1e+6));
    }
    float tons_kg(float data){
        return (data*(1000));
    }
    float tons_pounds(float data){
        return (data*(2205));
    }
    // pounds to ------
     float pounds_gm(float data){
        return (data*(453.6));
    }
     float pounds_kg(float data){
        return (data/(2.205));
    }
     float pounds_tons(float data){
        return (data/(2205));
    }

};