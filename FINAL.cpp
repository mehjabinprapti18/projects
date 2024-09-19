#include<bits/stdc++.h>
#include<string.h>

using namespace std;
class  a{
    public:
        string feed;

void gender(){
cout<<"                                "<<"**SELECT GENDER**:"<<endl<<endl<<"    "<<"1.male :(PRESS 1 TO SELECT  MALE AND PRESS ENTER TO CONTINUE) " <<endl;

cout<<endl<<"     "<<"2.female :(PRESS 2 TO SELECT FEMALE AND PRESS ENTER TO CONTINUE) "<<endl<<endl;
}
void age(){
cout<<"                  "<<"**SELECT YOUR AGE**:"<<endl<<endl<<"    "<<"1 .TEENAGER :(PRESS 1 IF YOUR AGE IS AROUND 13 TO 19)"<<endl<<endl;
cout<<"    "<<"2.adult (20+) :(PRESS 2 IF YOUR AGE IS AROUND 20+)"<<endl<<endl;
}


void skin(){

    cout<<"                        "<<"***SELECT YOUR SKIN TYPE***:"<<endl;
    cout<<"                        "<<"(BASED ON THE ABOVE INFORMATION)"<<endl<<endl;


        cout<<"1.dry :(PRESS 1 IF YOU HAVE A DRY SKIN)"<<endl<<endl<<"2.oily(PRESS 2 IF YOU HAVE A OILY SKIN)"<<endl;
        cout<<endl<<"3.sensitive :(PRESS 3 IF YOU HAVE SENSITIVE SKIN)"<<endl<<endl;
            }

void skin_problem(){
             cout<<"                   "<<"****select your skin problem****:"<<endl<<endl;

   cout<<"1.pimple"<<endl<<"2.acne"<<endl<<"3.tanning(skin burning of sun rays)"<<endl;

      cout<<"4.above all"<<endl<<endl;
}


};
class b:public a{
 public:



      void teenager_dry_pimple(){

                      cout<<"                      "<<"**SKIN CARE FOR  DRY SKIN** :"<<endl<<endl;

   cout<< "1.Warm compress: A warm compress can soften the spot"<<endl<<endl;
cout<< "2.Ice packs:Do not use it directly on ypur skin"<<endl<<endl;
cout<<"3.use a suitable moisturizer : Moisturizers work effectively to overcome dry skin "<<endl<<endl;
cout<<"4.Use a cream cleanser for your skin "<<endl<<endl;
cout<<"5.Fooding : eat fresh foods and vegetables and must drink water more "<<endl<<endl;


   cout<<"6.make a  honey mask with  following ingredient :"<<endl<<"1.multan mati - 2 table spoon"<<endl<<"2.honey - 1 table spoon"<<endl<<"3. milk- 2 table spoon "<<endl<<"4.turmeric - 1/2  tea spoon"<<endl<<endl;

  cout<<" 7.Before using it clean your skin with a mild cleanser "<<endl<<endl; cout<<"NOW use the face pack on your skin and wash it after 15 minutes"<<endl<<endl; cout<<"Then apply a moisturizer"<<endl<<endl;
   cout<<"8.A person may wish to contact a doctor or dermatologist";
   cout<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of dry skin."<<endl<<endl;


}
 void teenager_dry_acne(){

 cout<<"                       "<<"**SKIN CARE FOR DRY SKIN** :"<<endl<<endl;
            cout<<"1.Never squeeze or pick acne."<<endl<<endl;

cout<<"2.Avoid frequently touching your face."<<endl<<endl;
cout<< "3.Fooding : eat fresh foods and vegetables "<<endl<<endl;
cout<<"4.Drink water & stay hydrated"<<endl<<endl;
 cout<<"4.make a paste of neem leaves and a spoonful of honey";
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" 5.Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
   cout<<"6.A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;

 }


 void teenager_dry_tan() {

     cout<<"                         "<<"**SKIN CARE  FOR DRY SKIN**:"<<endl<<endl;
                    cout<<"1.Use a light weight sunscreen during daytime"<<endl<<endl;
                    cout<<"2.consume natural vitamin c "<<endl<<endl;
                     cout<<"3.make a besan and turmeric paste";
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
    cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort "<<endl<<endl;

 }



 void teenager_dry_all(){
        cout<<"                                      "<<"**SKIN CARE FOR DRY SKIN** :"<<endl<<endl;
                    cout<<"1.Use a light weight sunscreen during daytime"<<endl<<endl;
cout<<"2.Avoid frequently touching your face."<<endl<<endl;
cout<< "3.Fooding : eat fresh foods and vegetables  "<<endl<<endl;
    cout<<"4.Drink water & stay hydrated"<<endl<<endl;
    cout<<"make a hydrating face mask:"<<endl<<endl;
cout<<"1.Aloevera gel -2 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.glycerine-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
    cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;
 }

 void teenager_oily_pimple(){

 cout<<"                             "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;
                    cout<<"1.Use  a jel base or aqua sunscreen"<<endl<<endl;
                    cout<<"2.Avoid frequently touching your face."<<endl<<endl;
                    cout<<"3.Avoid oil base moisturizer."<<endl<<endl;
                    cout<<"4.cleanse your face two times a day "<<endl<<endl;
                    cout<<"5.Do not touch your pimple frequently"<<endl<<endl;

cout<<"make a hydrating face mask:"<<endl<<endl;
cout<<"1.Aloevera gel -2 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.honey-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" 5.Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"6.Then apply a jel base  moisturizer"<<endl<<endl;
    cout<<"6.A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;


 }

 void teenager_oily_acne(){
     cout<<"                             "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;

      cout<<"2.Avoid frequently touching your face."<<endl<<endl;
                    cout<<"3.Avoid oil base moisturizer."<<endl<<endl;
                    cout<<"4.clean your face two times a day "<<endl<<endl;
                    cout<<"5.Apply sunscreen daily"<<endl<<endl;
             cout<<"make a  tan removing face mask:"<<endl<<endl;
cout<<"1.tomatoes juice -3 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.honey-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a gel base  moisturizer"<<endl<<endl;
   cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;

 }



 void teenager_oily_tan(){
cout<<"                                 "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;
                 cout<<"1.Use  a gel base or aqua sunscreen"<<endl<<endl;
                 cout<<"5.Apply sunscreen daily"<<endl<<endl;
                 cout<<"2.Avoiding frequently touching your face."<<endl<<endl;
        cout<<"washing with warm water, using a gentle soap"<<endl<<endl;
        cout<<"avoiding soaps with added fragrances, moisturizers, or harsh chemicals"<<endl<<endl;
        cout<<"eating a well-rounded diet full of whole foods"<<endl<<endl;
         cout<<"make a  tan removing face mask:"<<endl<<endl;
cout<<"1.tomatoes juice -3 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.honey-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a gel base  moisturizer"<<endl<<endl;
        cout<<"Use coffee and honey face mask "<<endl<<endl;
         cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;


 }

void teenager_oily_all(){

cout<<"                                 "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;
                 cout<<"Use  a gel base or aqua sunscreen"<<endl<<endl;
                 cout<<"Apply sunscreen daily"<<endl<<endl;
                 cout<<"Avoiding frequently touching your face."<<endl<<endl;
        cout<<"washing with lukewarm water, using a gentle soap"<<endl<<endl;
        cout<<"avoiding soaps with added fragrances, moisturizers, or harsh chemicals"<<endl<<endl;
        cout<<"eating a well-rounded diet full of whole foods"<<endl<<endl;
        cout<<"Use coffee and honey face mask "<<endl<<endl;
         cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;


}
void teenager_sensitive_pimple(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<" use a gentle, fragrance-free soap"<<endl<<endl;
     cout<< "Avoid touching the face"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;
     cout<<"use a fragrance free soup or make a soup using soup base with honey or aloevera"<<endl<<endl;
     cout<<"Avoid scented beauty products and laundry detergents"<<endl<<endl;
     cout<<"Avoiding frequently touching your face."<<endl<<endl;
     cout<<"Apply turmeric and raw milk on your skin"<<endl<<endl;

     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}
void teenager_sensitive_acne(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<" use a gentle and anti-fungal face-wash"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;
     cout<<" make a soup using soup base with honey or aloevera"<<endl<<endl;
     cout<<"Avoid scented beauty products and laundry detergents"<<endl<<endl;

     cout<<"Avoiding frequently touching your face."<<endl<<endl;
     cout<<"Use an anti-fungal moistorizer"<<endl<<endl;

     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of  sensitive skin."<<endl<<endl;

}
void teenager_sensitive_tan(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<" use a gentle and anti-fungal face-wash"<<endl<<endl;
     cout<< "Avoid touching the face"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;

     cout<<"Apply sunscreen daily"<<endl<<endl;

     cout<<"Avoiding frequently touching your face."<<endl<<endl;
      cout<<"clean your face two times a day "<<endl<<endl;


     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}
void teenager_sensitive_all(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;

          cout<<" use a gentle and anti-fungal face-wash"<<endl<<endl;
     cout<< "Avoid touching the face"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;

     cout<<"Apply sunscreen daily"<<endl<<endl;
     cout<<"eating a well-rounded diet full of whole foods"<<endl<<endl;


     cout<<"Avoiding frequently touching your face."<<endl<<endl;
      cout<<"clean your face two times a day "<<endl<<endl;
     cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort "<<endl<<endl;

     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}


 void adult_dry_pimple(){

                      cout<<"                      "<<"**SKIN CARE FOR  DRY SKIN** :"<<endl<<endl;

   cout<< "Warm compress: A warm compress can soften the spot"<<endl<<endl;
cout<< "Ice packs:Do not use it directly on ypur skin"<<endl<<endl;
cout<<"use a suitable moisturizer : Moisturizers work effectively to overcome dry skin "<<endl<<endl;
cout<<"Use a cream cleanser for your skin "<<endl<<endl;

cout<<"Fooding : eat fresh foods and vegetables and must drink water more "<<endl<<endl;
cout<<"Use  10% niacinamide serums"<<endl<<endl;


   cout<<"make a  honey mask with  following ingredient :"<<endl<<"1.multan mati - 2 table spoon"<<endl<<"2.honey - 1 table spoon"<<endl<<"3. milk- 2 table spoon "<<endl<<"4.turmeric - 1/2  tea spoon"<<endl<<endl;

  cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl; cout<<"NOW use the face pack on your skin and wash it after 15 minutes"<<endl<<endl; cout<<"Then apply a moisturizer"<<endl<<endl;
   cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of dry skin."<<endl<<endl;
}
void adult_dry_acne(){

 cout<<"                       "<<"**SKIN CARE FOR DRY SKIN** :"<<endl<<endl;
            cout<<"Never squeeze or pick acne."<<endl<<endl;

cout<<"Avoid frequently touching your face."<<endl<<endl;
cout<< "Fooding : eat fresh foods and vegetables "<<endl<<endl;
cout<<"Drink water & stay hydrated"<<endl<<endl;
 cout<<"make a paste of neem leaves and a spoonful of honey";
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
   cout<<"Use an antifungal serum"<<endl<<endl;
   cout<<"use a serum with 2% Salicylic Acid"<<endl<<endl;
   cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;

 }

 void adult_dry_tan() {

     cout<<"                         "<<"**SKIN CARE  FOR DRY SKIN** :"<<endl<<endl;
                    cout<<"1.Use a light weight sunscreen during daytime"<<endl<<endl;
                    cout<<"2.consume natural vitamin c "<<endl<<endl;
                     cout<<"3.make a besan and turmeric paste";
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
    cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort "<<endl<<endl;
    cout<<"apply 2% alpha serum on your pigmented area"<<endl<<endl;

 }
 void adult_dry_all(){
        cout<<"                                      "<<"**SKIN CARE FOR DRY SKIN** :"<<endl<<endl;
                    cout<<"1.Use a light weight sunscreen during daytime"<<endl<<endl;
cout<<"2.Avoid frequently touching your face."<<endl<<endl;
cout<< "3.Fooding : eat fresh foods and vegetables  "<<endl<<endl;
    cout<<"4.Drink water & stay hydrated"<<endl<<endl;
    cout<<"make a hydrating face mask:"<<endl<<endl;
cout<<"1.Aloevera gel -2 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.glycerine-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukwarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a moisturizer"<<endl<<endl;
   cout<<" use rice water serum to keep your skin hydrated"<<endl<<endl;
    cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;
 }

void adult_oily_pimple(){

 cout<<"                             "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;

                    cout<<"1.Use  a gel base or aqua sunscreen"<<endl<<endl;


                    cout<<"2.Avoid frequently touching your face."<<endl<<endl;
                    cout<<"3.Avoid oil base moisturizer."<<endl<<endl;
                    cout<<"4.cleanse your face two times a day "<<endl<<endl;
                    cout<<"5.Do not touch your pimple frequently"<<endl<<endl;


cout<<"make a hydrating face mask:"<<endl<<endl;
cout<<"1.Aloevera gel -2 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.honey-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a jel base  moisturizer"<<endl<<endl;
    cout<<"A person should contact a doctor if their symptoms worsen, or they feel pain or discomfort ";
   cout<<"A person with acne should consult a doctor, as these symptoms can cause infections or scarring."<<endl<<endl;

 }
  void adult_oily_acne(){
     cout<<"                             "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;

      cout<<"2.Avoid frequently touching your face."<<endl<<endl;
                    cout<<"3.Avoid oil base moisturizer."<<endl<<endl;
                    cout<<"4.clean your face two times a day "<<endl<<endl;
                    cout<<"5.Apply sunscreen daily"<<endl<<endl;
             cout<<"make a mask:"<<endl<<endl;
cout<<"1. fresh aloevera juice -3 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.rose water 3 table spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a gel base  moisturizer"<<endl<<endl;
   cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;
 }
void adult_oily_tan(){
cout<<"                                 "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;
                 cout<<"Use  a gel base or aqua sunscreen and apply it daiy"<<endl<<endl;

                 cout<<"use a Niacinamide Serum "<<endl<<endl;
         cout<<"make a  tan removing face mask:"<<endl<<endl;
cout<<"1.tomatoes juice -3 table spoon"<<endl<<"2.rice flour-3 table spoon"<<endl<<"3.honey-1 tea spoon"<<endl<<endl;
 cout<<"apply it on your face for 15 min "<<endl;
 cout<<"rinse it off with lukewarm water"<<endl<<endl;
   cout<<" Before using it clean your skin with a mild cleanser "<<endl<<endl;
   cout<<"Then apply a gel base  moisturizer"<<endl<<endl;

         cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;

 }

 void adult_oily_all(){

cout<<"                                 "<<"**SKIN CARE FOR OILY SKIN** :"<<endl<<endl;
                  cout<<"FOLLOW THE STEPS BELOW "<<endl<<endl;
                  cout<<"1.first and most important step  is double cleansing"<<endl;
                  cout<< "     " "Double cleansing means cleansing your face twice, first with an oil-based product";
                   cout<<"and then followed by a water-based cleanser"<<endl<<endl;
                   cout<<"2.then apply a serum  (10% NIACINAIDE) according to your skin type and problem"<<endl<<endl;
                   cout<<"3.apply sunscreen during daytime"<<endl;
                cout<<"Use  a gel base or aqua sunscreen"<<endl<<endl;
                cout<<"Then apply a gel base or aqua base  moisturizer"<<endl<<endl;

                 cout<<"Avoiding frequently touching your face."<<endl<<endl;

        cout<<"eating a well-rounded diet full of whole foods"<<endl<<endl;

         cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of oily skin."<<endl<<endl;

}

void adult_sensitive_pimple(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;


          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<"Start With a Mild Cleanser"<<endl<<endl;
     cout<<"Don't Use Too Many Products at Once"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;
     cout<<"use a fragrance free soup or make a soup using soup base with honey or aloevera"<<endl<<endl;
     cout<<"Avoid scented beauty products and laundry detergents"<<endl<<endl;
     cout<<"Avoiding frequently touching your face."<<endl<<endl;
     cout<<"Apply turmeric and raw milk on your skin"<<endl<<endl;

     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}

void adult_sensitive_acne(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN** :"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<" use a gentle and anti-fungal face-wash"<<endl<<endl;
     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;
     cout<<"Use a SALICYLIC serum for fungal acne"<<endl<<endl;
     cout<<" make a soup using soup base with honey or aloevera"<<endl<<endl;
     cout<<"Avoid scented beauty products and laundry detergents"<<endl<<endl;

     cout<<"Avoiding frequently touching your face."<<endl<<endl;
     cout<<"Use an anti-fungal moistorizer"<<endl<<endl;

     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of  sensitive skin."<<endl<<endl;

}
void adult_sensitive_tan(){
cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN**:"<<endl<<endl;

          cout<<"Avoid taking very hot showers"<<endl<<endl;
          cout<<" use a gentle and anti-fungal face-wash"<<endl<<endl;

     cout<< "Moistorizing twice a day will help to balance your sensitive skin"<<endl<<endl;

     cout<<"Apply sunscreen daily"<<endl<<endl;
     cout<<"Apply a suitable serum on your face"<<endl<<endl;

     cout<<"Avoid frequently touching your face."<<endl<<endl;
      cout<<"clean your face two times a day "<<endl<<endl;


     cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}
void adult_sensitive_all(){

cout<<"                                 "<<"**SKIN CARE FOR SENSITIVE SKIN **:"<<endl<<endl;
                  cout<<"FOLLOW THE STEPS BELOW "<<endl<<endl;
                  cout<<"1.first and most important step  is double cleansing"<<endl;
                  cout<< "     " "Double cleansing means cleansing your face twice, first with an oil-based product";
                   cout<<"and then followed by a water-based cleanser"<<endl<<endl;
                   cout<<"2.then apply a serum  (10% NIACINAIDE) according to your skin type and problem"<<endl<<endl;
                   cout<<"3.apply sunscreen during daytime"<<endl;
                cout<<"Use  a gel base or aqua sunscreen"<<endl<<endl;
                cout<<"Then apply a fragrance free   moisturizer"<<endl<<endl;

                 cout<<"Avoiding frequently touching your face."<<endl<<endl;

        cout<<"eating a well-rounded diet full of whole foods"<<endl<<endl;

         cout<<"A person may wish to contact a doctor or dermatologist";
   cout<<"  "<<"if they have tried home remedies or OTC products without seeing any improvement in the appearance of sensitive skin."<<endl<<endl;

}

void complement(){

cout<<"******Congratulations for Achieving your dream skin..\a*****"<<endl;

cout<<"****Take good care of your skin and hydrate. If you have good skin, everything else will fall into place.."<<endl<<endl;



}

void know_your_skintype(){
cout<<"                          "<<"****DETERINE YOUR SKINTYPE BY THESE SIMPLE***"<<endl<<endl;
cout<<"      "<<"1.Use a face wash  and cleanse your face thoroughly."<<endl<<endl;
cout<<"      "<<"2.Don't apply any products after this and wait for 30 minutes."<<endl<<endl;
cout<<"      "<<"After 30 minutes if your skin feels or looks:"<<endl<<endl;
cout<<"            "<<" 1.Stiff, flaky and stretchy : dry skin."<<endl<<endl;
cout<<"            "<<"2.Shiny : oily skin "<<endl<<endl;
cout<<"            "<<" 3.Redness or any kind of irritation :sensitive skin"<<endl<<endl;
cout<<"            "<<"4.Hydrated and comfortable : normal skin "<<endl<<endl;

}
void feedback(){
   cout<<"                                "<<"***WRITE YOUR VALUEABLE FEEDBACK***:"<<endl;
   cout<<"                                "<<"(Press '/'and enter when you finish writing your feedback)"<<endl<<endl;
while(getline(cin,feed,'/')){



cout<<endl<<endl<<"MY OPINION:"<<" "<<feed<<endl<<endl;

 break;
 }
}

};


int main(){
int x,y,z,m;

   b obj;




    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
 cout<<endl;
 cout<<"                                                    "<< "****SKIN CARE ****"<<"       "<<endl;
 cout<<endl;
 cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
 obj.gender();
 cin>>x;


switch(x)
{
  case 1:{
      obj.age();
      cin>>y;

switch(y){

  case 1:{
       obj.know_your_skintype();



         obj.skin();
          cin>>z;

          switch(z){
             case 1:{

                 obj.skin_problem();
                 cin>>m;
                 switch(m){
                case 1:{
                    obj.teenager_dry_pimple();

                    obj.feedback();

                    obj.complement();
                    break;
                }





             case 2:
                 obj.teenager_dry_acne();
                obj.feedback();
                  obj.complement();

                 break;

            case 3:
                 obj.teenager_dry_tan();

                 obj.feedback();
                 obj.complement();
                 break;


            case 4:{
                 obj.teenager_dry_all();

                 obj.feedback();
                 obj.complement();
                 break;
            }



        }


    break;    }



        case 2:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.teenager_oily_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.teenager_oily_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.teenager_oily_tan();

                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.teenager_oily_all();

                 obj.feedback();
                 obj.complement();
                 break;

        }
        break;
}


case 3:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.teenager_sensitive_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.teenager_sensitive_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.teenager_sensitive_tan();

                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.teenager_sensitive_all();

                 obj.feedback();
                 obj.complement();
                 break;
        }
        break;

      }


break;

  }
  case 2:{
       obj.know_your_skintype();



         obj.skin();
          cin>>z;

          switch(z){
             case 1:{

                 obj.skin_problem();
                 cin>>m;
                 switch(m){
                case 1:
                    obj.adult_dry_pimple();

                    obj.feedback();
                    obj.complement();
                    break;

             case 2:
                 obj.adult_dry_acne();

                 obj.feedback();
                 obj.complement();
                 break;

            case 3:
                 obj.adult_dry_tan();

                 obj.feedback();
                 obj.complement();
                 break;


            case 4:
                 obj.adult_dry_all();

                   obj.feedback();
                 obj.complement();
                 break;
        }
        break;
        }




        case 2:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.adult_oily_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.adult_oily_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.adult_oily_tan();

                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.adult_oily_all();

                  obj.feedback();
                  obj.complement();
                 break;

        }
        break;


        }


case 3:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.adult_sensitive_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.adult_sensitive_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.adult_sensitive_tan();
                 ;
                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.adult_sensitive_all();

                 obj.feedback();
                 obj.complement();
                 break;
        }

     break; }




  }




  }




break;

}

}


 break;}



case 2:{
      obj.age();
      cin>>y;


switch(y){

  case 1:{
       obj.know_your_skintype();



         obj.skin();
          cin>>z;

          switch(z){
             case 1:{

                 obj.skin_problem();
                 cin>>m;
                 switch(m){
                case 1:
                    obj.teenager_dry_pimple();

                    obj.feedback();
                    obj.complement();
                    break;

             case 2:
                 obj.teenager_dry_acne();

                 obj.feedback();
                 obj.complement();
                 break;

            case 3:
                 obj.teenager_dry_tan();

                 obj.feedback();
                 obj.complement();
                 break;


            case 4:
                 obj.teenager_dry_all();

                 obj.feedback();
                 obj.complement();
                 break;
        }

        }




        case 2:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.teenager_oily_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.teenager_oily_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.teenager_oily_tan();
                obj.feedback();
                obj.complement();
                 break;



            case 4:
                 obj.teenager_oily_all();

                 obj.feedback();
                 obj.complement();
                 break;

        }


    break;    }


case 3:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.teenager_sensitive_pimple();

                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.teenager_sensitive_acne();

                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.teenager_sensitive_tan();

                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.teenager_sensitive_all();

                 obj.feedback();
                 obj.complement();
                 break;
        }
      }





  }
  case 2:{
       obj.know_your_skintype();




         obj.skin();
          cin>>z;

          switch(z){
             case 1:{




                 obj.skin_problem();
                 cin>>m;
                 switch(m){
                case 1:
                    obj.adult_dry_pimple();

                    obj.feedback();
                    obj.complement();
                    break;

             case 2:
                 obj.adult_dry_acne();

                 obj.feedback();
                 obj.complement();
                 break;

            case 3:
                 obj.adult_dry_tan();
                 obj.feedback();
                 obj.complement();
                 break;


            case 4:
                 obj.adult_dry_all();

                 obj.feedback();
                 obj.complement();
                 break;
        }
        break;
        }




        case 2:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.adult_oily_pimple();
                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.adult_oily_acne();
                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.adult_oily_tan();
                 obj.feedback();
                 obj.complement();

                 break;



            case 4:
                 obj.adult_oily_all();

                 obj.feedback();
                 obj.complement();
                 break;

        }
        break;


        }


case 3:{

               obj.skin_problem();
                 cin>>m;


                 switch(m){

            case 1:
                 obj.adult_sensitive_pimple();
                 obj.feedback();
                 obj.complement();
                 break;


            case 2:
                 obj.adult_sensitive_acne();
                 obj.feedback();
                 obj.complement();
                 break;


            case 3:
                 obj.adult_sensitive_tan();
                 obj.feedback();
                 obj.complement();
                 break;



            case 4:
                 obj.adult_sensitive_all();
                 obj.feedback();
                 obj.complement();
                 break;
        }

     break; }




  }




  }



break;


}

break;
}


}
}
return 0;
}

