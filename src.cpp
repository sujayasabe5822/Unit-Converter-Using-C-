#include <bits/stdc++.h>
#include "CLASSES/area_convertors.cpp"
#include "CLASSES/length_convertors.cpp"
#include "CLASSES/temp_convertors.cpp"
#include "CLASSES/mass_convertors.cpp"
#include "CLASSES/time_convertors.cpp"
#include "CLASSES/speed_convertors.cpp"
using namespace std;
class Choice{
    public:
string choice_Area(int c){
     string s;
    switch (c)
    {
    case 1:
        s = "Acres";
        break;
    case 2:
        s = "Square feet";
        break;
    case 3:
        s = "square inch";
        break;
    case 4:
        s = "square meter";
        break;
    case 5:
        s = "Hectares";

        break;
    }
    return s;
}
string choice_length(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Millimetres";
        break;
    case 2:
        s = "Centimetres";
        break;
    case 3:
        s = "Metres";
        break;
    case 4:
        s = "Kilometres ";
        break;
    case 5:
        s = "feet";
        break;
     case 6:
        s = "Inch";
        break;   
    }
    return s;
}
string choice_temp(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Celsius";
        break;
    case 2:
        s = "Fahrenheit";
        break;
    case 3:
        s = "Kelvin";
        break;
    }
    return s;
}
string choice_mass(int c){
      string s;
    switch (c)
    {
    case 1:
        s = "Grams";
        break;
    case 2:
        s = "kilograms";
        break;
    case 3:
        s = "Tons";
        break;
    case 4:
        s = "Pounds";
        break;
     
    }
    return s;
}
string choice_time(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Milliseconds";
        break;
    case 2:
        s = "Seconds";
        break;
    case 3:
        s = "Minutes";
        break;
    case 4:
        s = "Hours";
        break;
     case 5:
        s = "Days";
        break;
     
    }
    return s;
}
string choice_speed(int c){
     string s;
    switch (c)
    {
    case 1:
        s = "Meter per second";
        break;
    case 2:
        s = "kilometer per second";
        break;
    case 3:
        s = "kilometer per hour";
        break;
    case 4:
        s = "Mile per hour";
        break;
    }
    return s;
}
};/*--------------------------------------------------------------*/
class Convertors:public Choice,
                public Area,public Length,
                public Mass,public Speed,
                public Temperature,public Time{
    public:

void Area_conversion()
{
    //  Area Area_conv;
    int ch;
    float unt;
    cout << endl;
    cout << "1.Acres" << endl;
    cout << "2.Square feet" << endl;
    cout << "3.Square inch" << endl;
    cout << "4.Square meter" << endl;
    cout << "5.Hectares" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_Area(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    float result;
    cout << endl;
    cout << endl;
    cout << "1.Acres" << endl;
    cout << "2.Square feet" << endl;
    cout << "3.Square inch" << endl;
    cout << "4.Square meter" << endl;
    cout << "5.Hectares" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        if (c == 1)
        {
           result=unt;
        }
        if (c == 2)
        { 

            result=sqr_feet_to_acre(unt);
        }
        if (c == 3)
        {
            result=sqr_inch_to_acre(unt);
        }
        if (c == 4)
        {
            result=sqr_mtr_to_acre(unt);
        }
        if (c == 5)
        {
            result=hect_to_acre(unt);
        }
        break;

    case 2:
        if (c == 1)
        {
            result=acres_to_sqr_feet(unt);
        }
        if (c == 2)
        {
           result=unt;
        }
        if (c == 3)
        {
            result=sqr_inch_to_feet(unt);
        }
        if (c == 4)
        {
            result=sqr_mtr_to_feet(unt);
        }
        if (c == 5)
        {
            result=hect_to_feet(unt);
        }
        break;
    case 3:
        if (c == 1)
        {
            result=acres_to_sqr_inch(unt);
        }
        if (c == 2)
        {
            result=sqr_feet_to_inch(unt);
        }
        if (c == 3)
        {
           result=unt;
        }
        if (c == 4)
        {
            
            result=sqr_mtr_to_sqr_inc(unt);
        }
        if (c == 5)
        {
            result=hect_to_inch(unt);
        }
        break;
    case 4:
        if (c == 1)
        {
            result=acres_to_sqr_mtr(unt);
        }
        if (c == 2)
        {
            result=sqr_feet_to_mtr(unt);
        }
        if (c == 3)
        {

            result=sqr_inch_to_mtr(unt);
        }
        if (c == 4)
        {
           result=unt;
        }
        if (c == 5)
        {
            result=hect_to_mtr(unt);
        }
        break;
    case 5:
        if (c == 1)
        {
            result=acres_to_hect(unt);
        }
        if (c == 2)
        {
            result=sqr_feet_to_hect(unt);
        }
        if (c == 3)
        {

            result=sqr_inch_to_hect(unt);
        }
        if (c == 4)
        {
            result=sqr_mtr_to_hect(unt);
        }
        if (c == 5)
        {
           result=unt;
        }
        break;
    }
 
  cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_Area(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;
}
/*--------------------------------------------------------------*/
void Length_conversion(){
int ch;

    float unt;
    cout << endl;
    cout << "1.Millimetres" << endl;
    cout << "2.Centimetres" << endl;
    cout << "3.Metres" << endl;
    cout << "4.Kilometres" << endl;
    cout << "5.feet" << endl;
    cout << "6.Inch" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    float result;
    cin >> c;
    string s=choice_length(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Millimetres" << endl;
    cout << "2.Centimetres" << endl;
    cout << "3.Metres" << endl;
    cout << "4.Kilometres" << endl;
    cout << "5.feet" << endl;
    cout << "6.Inch" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    cin >> ch;
    switch(ch){
        case 1:

            if (c == 1)
        {
        result=unt;
             
        }
        if (c == 2)
        {
             result=cent_milli(unt);
        }
        if (c == 3)
        {
        result=met_milli(unt);             
        }
        if (c == 4)
        {
         result=kilo_milli(unt);    
        }
        if (c == 5)
        {
         result=feet_milli(unt);   
        }
        if(c==6){
            result=inch_milli(unt);
        }
          
          break;

/////////
    case 2:
        
            if (c == 1)
        {
             result=mil_cent(unt);
             
        }
        if (c == 2)
        {
           result=unt;
        }
        if (c == 3)
        {
        result=met_cent(unt);             
        }
        if (c == 4)
        {
         result=kilo_centi(unt);    
        }
        if (c == 5)
        {
         result=feet_centi(unt);   
        }
        if(c==6){
            result=inch_centi(unt);
        }
          
          break;

       ///////
   case 3:
        
            if (c == 1)
        {
        result=mil_met(unt);             
             
        }
        if (c == 2)
        {
             result=cent_met(unt);
        }
        if (c == 3)
        {
        result=unt;
        }
        if (c == 4)
        {
         result=kilo_meter(unt);    
        }
        if (c == 5)
        {
         result=feet_met(unt);   
        }
        if(c==6){
            result=inch_met(unt);
        }
          
          break;
          
        ///////
        case 4:
        
            if (c == 1)
        {
        result=mil_kilo(unt);             
             
        }
        if (c == 2)
        {
             result=cent_kilo(unt);
        }
        if (c == 3)
        {
         result=met_kilo(unt);    
        }
        if (c == 4)
        {
        result=unt;
        }
        if (c == 5)
        {
         result=feet_kilo(unt);   
        }
        if(c==6){
            result=inch_kilo(unt);
        }
          
          break;
        ////
        case 5:
        
            if (c == 1)
        {
        result=mil_feet(unt);             
             
        }
        if (c == 2)
        {
             result=cent_feet(unt);
        }
        if (c == 3)
        {
         result=met_feet(unt);   
        }
        if (c == 4)
        {
         result=kilo_feet(unt);    
        }
        if (c == 5)
        {
        result=unt;
        }
        if(c==6){
            result=inch_foot(unt);
        }
          
          break;
          ///
        case 6:
        
            if (c == 1)
        {
        result=mil_inch(unt);             
             
        }
        if (c == 2)
        {
             result=cent_inch(unt);
        }
        if (c == 3)
        {
            result=met_inch(unt);
        }
        if (c == 4)
        {
         result=kilo_inch(unt);    
        }
        if (c == 5)
        {
         result=feet_inch(unt);   
        }
        if(c==6){
           result=unt;
        }
          
          break;  
    }
    cout<<endl<<"----------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_length(ch)<<endl; 
  cout<<endl<<"----------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Temperature_conversion(){

     int unt;
    cout << endl;
    cout << "1.Celsius" << endl;
    cout << "2.Fahrenheit" << endl;
    cout << "3.Kelvin" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_temp(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Celsius" << endl;
    cout << "2.Fahrenheit" << endl;
    cout << "3.Kelvin" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
          if (c == 1)
        {
         result=unt;
        }
        if (c == 2)
        {
            result=fahr_cels(unt);
        }
        if (c == 3)
        {
            result=kelvin_cels(unt);
        }
        break;
      case 2:
          if (c == 1)
        {
            result=cels_fahr(unt);
        }
        if (c == 2)
        { 
            result=unt;
        }
        if (c == 3)
        {
            result=kelvin_fahr(unt);
        }
        break;

        case 3:
          if (c == 1)
        {
            result=cels_kelvin(unt);
        }
        if (c == 2)
        { 
            result=fahr_Kelvin(unt);

        }
        if (c == 3)
        {
        result=unt;
        }
        break;
         default:
        break;
    }
    cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_temp(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;
}
/*--------------------------------------------------------------*/
void Mass_conversion(){

      int unt;
    cout << endl;
    cout << "1.Grams" << endl;
    cout << "2.kilograms" << endl;
    cout << "3.Tons" << endl;
    cout << "4.Pounds" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
     string s=choice_mass(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Grams" << endl;
    cout << "2.kilograms" << endl;
    cout << "3.Tons" << endl;
    cout << "4.Pounds" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
            if (c == 1)
        {
            result=unt;
        }
        if (c == 2)
        { 
            result=kg_gm(unt);
        }
        if (c == 3)
        {
            result=tons_gm(unt);
        }
        if(c==4){
            result=pounds_gm(unt);
        }
        break;
        ///  /////
        case 2:
            if (c == 1)
        {
            result=gm_kg(unt);
        }
        if (c == 2)
        { 
            result=unt;
        }
        if (c == 3)
        {
            result=tons_kg(unt);
        }
        if(c==4){
            result=pounds_kg(unt);
        }
        break;
     case 3:
            if (c == 1)
        {
            result=gm_tons(unt);
        }
        if (c == 2)
        { 
            result=kg_tons(unt);
        }
        if (c == 3)
        {
            result=unt;
        }
        if(c==4){
            result=pounds_tons(unt);
        }
        break; 

        case 4:
            if (c == 1)
        {
            result=gm_pounds(unt);
        }
        if (c == 2)
        { 
            result=kg_pounds(unt);
        }
        if (c == 3)
        {
            result=tons_pounds(unt);
        }
        if(c==4){
            result=unt;
        }
        break; 
    default:
        break;
    }
 cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_mass(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Time_conversion(){

     int unt;
    cout << endl;
    cout << "1.Milliseconds" << endl;
    cout << "2.Seconds" << endl;
    cout << "3.Minutes" << endl;
    cout << "4.Hours" << endl;
    cout << "5.Days" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_time(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
   cout << "1.Milliseconds" << endl;
    cout << "2.Seconds" << endl;
    cout << "3.Minutes" << endl;
    cout << "4.Hours" << endl;
    cout << "5.Days" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
            if (c == 1)
        {
            result=unt;
        }
        if (c == 2)
        { 
            result=sec_ms(unt);
        }
        if (c == 3)
        {
        result=min_ms(unt);

        }
        if(c==4){
            result=hrs_ms(unt);

        }
        if(c==5){
            result=day_ms(unt);
        }
        break;
     /// 
     case 2:
            if (c == 1)
        {
            result=ms_sec(unt);
        }
        if (c == 2)
        { 
           result=unt;
        }
        if (c == 3)
        {
        result=min_sec(unt);

        }
        if(c==4){
            result=hrs_sec(unt);

        }
        if(c==5){
            result=day_sec(unt);
        }
        break;
        ///
        case 3:
            if (c == 1)
        {
            result=ms_min(unt);
        }
        if (c == 2)
        { 
           result=sec_min(unt);
        }
        if (c == 3)
        {   
       result=unt;
        }
        if(c==4){
            result=hrs_min(unt);

        }
        if(c==5){
            result=day_min(unt);
        }
        break;
        ///
        case 4:
            if (c == 1)
        {
            result=ms_hrs(unt);
        }
        if (c == 2)
        { 
           result=sec_hrs(unt);
        }
        if (c == 3)
        {   
            result=min_hrs(unt);
        }
        if(c==4){
       result=unt;
        }
        if(c==5){
            result=day_hrs(unt);
        }
        break;
     ///
        case 5:
            if (c == 1)
        {
            result=ms_days(unt);
        }
        if (c == 2)
        { 
           result=sec_day(unt);
        }
        if (c == 3)
        {   
            result=min_day(unt);
        }
        if(c==4){
            result=hrs_day(unt);
        }
        if(c==5){
        result=unt;
        }
        break;
    default:
        break;
    } 
   cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_time(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Speed_conversion(){

     int unt;
    cout << endl;
    cout << "1.Meter per second" << endl;
    cout << "2.kilometer per second" << endl;
    cout << "3.kilometer per hour" << endl;
    cout << "4.Mile per hour" << endl;

    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_speed(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
   cout << "1.Meter per second" << endl;
    cout << "2.kilometer per second" << endl;
    cout << "3.kilometer per hour" << endl;
    cout << "4.Mile per hour" << endl;

    cout << endl;
    cout << endl;
    cout << "Convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
         if (c == 1)
        {
            result= unt;
        }
        if (c == 2)
        { 
       result=kmps_mps(unt );
        }
        if (c == 3)
        {
         result=kmph_mps(unt );
        }
        if(c==4){
        result=mph_mps(unt );        
        }
        break;
    /// 
     case 2:
         if (c == 1)
        {
       result=mps_kmps(unt );
        }
        if (c == 2)
        { 
         result=unt;
        }
        if (c == 3)
        {
         result=kmph_kmps(unt );
        }
        if(c==4){
        result=mph_kmps(unt );        
        }
        break;
        /// 
     case 3:
         if (c == 1)
        {
       result=mps_kmph(unt );
        }
        if (c == 2)
        { 
         result=kmps_kmph(unt );
        }
        if (c == 3)
        {
         result=unt;
        }
        if(c==4){
        result=mph_kmph(unt );        
        }
        break;
            /// 
     case 4:
         if (c == 1)
        {
       result=mps_mph(unt );
        }
        if (c == 2)
        { 
         result=kmps_mph(unt );
        }
        if (c == 3)
        {
        result=kmph_mph(unt );        
        }
        if(c==4){
        result=unt;
        }
        break;
    default:
        break;
    }
     cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_speed(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
};