#include<iostream>
using namespace std;

double volumeofcone(float  radius , float height)
{
 float volumeofconee = 0.3333333333*radius*radius*height;
 return volumeofconee;

}



float  tsaofcone(float radius, float slant)
{
    float tsaofconee= (slant + radius) ;
    return tsaofconee;
}




float csaofcone(float radius , float slant)
{
    float csaofconee= radius  * slant ;
    return csaofconee;
}






 
float volumeofcube (float side)
{
    float volumeofcubee = side*side*side;
    return volumeofcubee;
}





float tsaofcube(double side)
{
    double  tsaofcubee = 6*side*side;
    return tsaofcubee;
}






float csaofcube (double side)
{
    double csaofcubee = 4*side*side;
    return csaofcubee;

}



float volumeofcuboid (float l , float b , float h)
{
    double volumeofcuboidd = l * b *h;
    return volumeofcuboidd;
}

float tsaofcuboid (float l , float b , float h)
{
    double tsaofcuboidd = l*b + b*h + h*l;
    return tsaofcuboidd;
}

float csaofcuboid(float l , float b, float h )
{
    double csaofcuboidd = l + b;
    csaofcuboidd= csaofcuboidd*h;
    csaofcuboidd = csaofcuboidd * 2;
    return csaofcuboidd;
}

 
float volumeofhemiesphere (float radius  )
{
    double volumeofhemispheree = 0.6666666666666667*radius*radius*radius; 
    return volumeofhemispheree;
}

float tsaofhemisphere(float radius)
{
    double tsaofhemispheree = 3 * radius * radius ;
    return  tsaofhemispheree;

}

float csaofhemisphere(float radius)
{
    double csaofhemispheree = 2 * radius * radius ;
    return  csaofhemispheree;

}

float volumeofshpere(float radius)
{
    double volumeofspheree =  radius  * radius * radius  ;
    return volumeofspheree;
     
}


float tsaofsphere (float radius)
{
    double tsaofspheree = 4 * radius * radius;
    return tsaofspheree;
}
int main ()
{



string shape;
cout<<"Enter the shape\n from the following \a\n";
cout<<"Cone\n\acube\n\acuboid\n\ahemisphere\n\asphere\n\a";
cin>>shape;



if(shape=="cone") 
{
    string option;
    cout<<"Volume(v),total surface area(t),curved surface area(c)\n\a";
    cin>>option;
    
    
    
    if(option=="v")
    {
        
            float  radius , height;
            cout<<"Enter radius for cone  \n\a";
            cin>>radius;
            cout<<"Enter height for cone\n\a";
            cin>>height;
            int ans = volumeofcone(radius , height);
  
            float  v = ans  * 22;
            v = v / 7;
            cout<<v<<"  cm^3\n\a";
            cout<<"The formula is 1/3*pie*r*r*h \n\a";


    }

    
     
     
     
     
     if(option=="t")
     {
         float radius , slant ;
         cout<<"Enter radius for cone \n\a";
         cin>>radius;
         cout<<"Enter slant height for cone  \n\a ";
         cin>>slant;
         int ans = tsaofcone(radius , slant);
        float  t = ans * radius; 
         t = t * 22;
         t = t/7;
         cout<<t<<"  cm^2\n\a";
         cout<<"the formula is pie*r(r+l)\n\a";
     }
    
    
    
    
    
    
    
    
     if(option == "c")
     {
             float radius , slant;
             cout<<"Enter radius for cube  \n";
             cin>>radius;
             cout<<"Enter slant height for cube \n ";
             cin>>slant;
             int ans = csaofcone(radius , slant);
             float c = ans * 22;
             c = c / 7 ; 
             cout<<c<<"  cm^2 \n\a";
             cout<< "The formula is pie*rl";

     }

}
    
    
    
    
    
    
     if(shape=="cube")
     {   
         string option;
        cout<<"Volume(v),total surface area(t),curved surface area(c)\n\a";
        cin>>option;
         if(option=="v") 
         {
        
         float side;
         cout<<"Enter side for cube\n\a";
         cin>>side;
         int ans = volumeofcube(side);
         
         cout<<ans<<"  cm^3\n\a"<<"And the formula is l*l*l";
         }
         
        
        
        
        
        
        
         if(option=="t")
         {
             double side ;
             cout<<"enter side for cube \n\a";
             cin>>side;
             double ans = tsaofcube(side);
             cout<<ans<<"  cm^2\n\a"<<"And the formula is 6*l*l";
                
         }

         
         
         
         
         
         
         if(option=="c")
         { 
             double side ;
             cout<<"Enter side for cube \n\a";
             cin>>side;
             double ans = csaofcube(side);
             cout<<ans<<"   cm^2"<<"And the formula is 4l^2";
         }
     }

     
     
     
     
     if(shape=="cuboid")
     {  
         string option; 
         cout<<"Volume(v),total surface area(t),curved surface area(c)\n\a";
         cin>>option;
         
         
         if(option=="v")
         {
         
         double l;
         cout<<"Enter lenght of cuboid\n\a";
         cin>>l;
         double b;
         cout<<"Enter breadth of cuboid\n\a";
         cin>>b;
         double h;
         cout<<"Enter height  of cuboid\n\a";
         cin>>h;

         double ans = volumeofcuboid(l,b,h);
         cout<<ans<<"  cm^3\n\a"<<"And the formula is l*b*h";

         }

        if (option== "t")
        {
            double l;
         cout<<"Enter lenght of cuboid\n\a";
         cin>>l;
         double b;
         cout<<"Enter breadth of cuboid\n\a";
         cin>>b;
         double h;
         cout<<"Enter height  of cuboid\n\a";
         cin>>h;
          
          double ans = tsaofcuboid(l,b,h);
          double v = ans * 2;
          cout<<v<<"  cm^2\n\a"<<"And the formula is 2(lb*hb*hl)";
        }
  

       if(option == "c")
       {
           double l;
         cout<<"Enter lenght of cuboid\n\a";
         cin>>l;
         double b;
         cout<<"Enter breadth of cuboid\n\a";
         cin>>b;
         double h;
         cout<<"Enter height  of cuboid\n\a";
         cin>>h;

         int ans = csaofcuboid(l,b,h);
         cout<<ans<<"  cm^2\n\a"<<"And th formula is 2h(l+b)";

       }
     }


     if(shape=="hemisphere")
     {
         string option;
          cout<<"Volume(v),total surface area(t),curved surface area(c)\n\a";
          cin>>option;
          if(option=="v")
          {
              float radius;
              cout<<"Enter radius for hemisphere\n\a";
              cin>>radius;
              double ans = volumeofhemiesphere(radius);
              double v = ans * 22;
              v = v/7;
              cout<<"The  volume is "<<v<<"  cm^3\n\a";
          }
         if(option == "t")
         {
             float radius;
              cout<<"Enter radius for hemisphere\n\a";
              cin>>radius;
              double ans = tsaofhemisphere(radius);
              double v = ans * 22;
              v = v/7;
              cout<<"The  tsa is "<<v<<"  cm^2\n\a";
         }
         if(option == "c")
         {
             float radius;
              cout<<"Enter radius for hemisphere\n\a";
              cin>>radius;
              double ans = csaofhemisphere(radius);
              double v = ans * 22;
              v = v/7;
              cout<<"The  tsa is "<<v<<"  cm^2\n\a";
         }
     }

     if(shape=="sphere")
     {
         
         string option;
          cout<<"Volume(v),total surface area(t),curved surface area(c)\n\a";
          cin>>option;
          if(option=="v")
          {
             float radius;
              cout<<"Enter radius for sphere\n\a";
              cin>>radius;
              double ans = volumeofshpere(radius);
              ans = ans*4;
              ans = ans /3;
              double v = ans * 22;
              v = v/7;
              cout<<"The  volume is "<<v<<"  cm^3\n\a";
          }

          if(option=="t")
          {
              float radius ;
              cout<<"Enter radius for sphere ";
              cin>>radius;
              double ans = tsaofsphere(radius);
              float v = ans * 22;
              v= v/7; 
              cout<<"the total surface area is "<<v<<" cm^2 \n\a";
          }
          if(option=="c")
          {
               float radius ;
              cout<<"Enter radius for sphere ";
              cin>>radius;
              double ans = tsaofsphere(radius);
              float v = ans * 22;
              v= v/7; 
              cout<<"the surface area is "<<v<<" cm^2 \n\a";

          }
     }



       

       


}

// hemisphere             c
