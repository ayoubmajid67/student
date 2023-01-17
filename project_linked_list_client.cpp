

// appele des bibliotique : 
#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 // pour eviter  de ecrire std:: chaque fois 

 // strcuture de  des note 
using namespace std;

typedef struct
{
  string nom_mat;
  float note;
  int quefis;
} note_S;


// class de etudiant :  
class etudiant
{
  // private:
public:
  string id;
  string name;
  string last_name;
  int nbr_N;
  note_S Note[30];
  float Note_finale;

  // les fonctions de class etudaint : 
  // nice ::::::::::::1
  void trier_croi(note_S N[], int n);

  // nice ::::::::::::2
  void trier_decroi(note_S N[], int n);

  // nice :::::::::::: 3
  void search_NOTE(note_S N[], int n, string NAME);

   // nice :::::::::::: 4 
  void display_etd(etudiant e1);

  // nicce ::::::::::::::::::5
  void valide(note_S N[], int n);

  // nicce ::::::::::::::::::6
  void invalide(note_S N[], int n);

  // nice ::::::::::::7
  etudiant add_etd();

   // nice ::::::::::::8 
  float insert_Note(note_S N[], int n);

  // nice ::::::::::::9
  void display_note(note_S N[], int n);
 
 
  
 
};
// class de node :  
class node

{
private:
  node *perevies;
  etudiant data;
  node *next;

public:

 // les fonctions : 


// nicce :::::::::::::::::: 1 : 
  void display_node(); 

  // nicce :::::::::::::::::: 2: 
  void filling(etudiant data);

  // nicce :::::::::::::::::: 3 : 
  int delete_etd(string id);
 
  // nicce :::::::::::::::::: 4 
  void display_reverse();

// nicce :::::::::::::::::: 5 
  void delete_first();

  // nicce ::::::::::::::::::6 
  void delete_last();

 // nicce ::::::::::::::::::7
  void trier_crois();
  // nicce ::::::::::::::::::8
  void trier_decrois();

  // nicce ::::::::::::::::::9 
  void insert_file(char name[]);

   // nicce ::::::::::::::::::10
  etudiant find_etd(string ID);

  // nicce ::::::::::::::::::11
  void modif_etd(float new_note, string ID);
  
  
  
  
  
 
};

 // les deux pointeurs de node 
node *head = NULL, *last = NULL;

void wait_timer()
{
  for (int i = 3; i >= 0; i--)
  {
    cout << "Waiting for " << i << " seconds..." << endl;
    Sleep(1000); // Wait for 1 second
    system("cls");
  }
}
//************************  main ******************************
main()
{
  // declaration des variable :  
  node n1;
  etudiant e1,e2;
  string ID;
  int x = 0, x1 = 0;
  int key1=0,key2=0 ; 
  int statut;
  float new_note;
  string name;
  char c;

  // clear the screen 
  system("cls");
  // fonction pour ajouter une timer : 
        wait_timer();
 // le whille loop principle 
  do
  {
    ///  la stuiation intiale : 
    statut=0; 
    cout << " || Student method in  1 : " << endl;
    cout << "|| Note methode    in  2 : " << endl;
    cout<<"|| to exit Entre  0 : "<<endl; 
    cin >> statut;
    system("cls");
    wait_timer();

    switch (statut)
    {
    // case 1 pour les fonctions de class node : 
   case 1:

            do
      {


        // ********************************************************case1 ***************************
        key1=0; 
         system("cls"); 
        cout << "\n***********Welcome to this programme I hope you were fine :**************" << endl;

        cout << "To add a new student, select 1 :  " << endl;
        cout << " To remove a student, click 2  : " << endl;
        cout << " To search for a student, click 3:" << endl;
        cout << " To edit te note of student  click 4 : " << endl;
        cout << " To sort the students in ascending order   click 5 : " << endl;
        cout << " To sort the students in descending order click 6 : " << endl;
        cout << " To view all students, select 7: " << endl;
        cout << " To add everyone's name to a text file, click 8: " << endl;
        cout << " \nto exit within  click  0 : " << endl;

        cout << endl;
        cout << "Enter the value: :  ";
        cin >>key1;
        system("cls"); 
        wait_timer();
     
        switch (key1)
        {
        case 1:
          // nicce ::::::::::::::::::
             system("cls"); 
          e1 = e1.add_etd();
        
          e2=n1.find_etd(e1.id);
          system("cls");  


          if(e2.Note_finale==-1){
            
            //   Sleep(1000);
           n1.filling(e1);
           cout<<"hi"; 
          n1.display_node();

          

          } 
          else{ 
           cout<<" The student's already been.: "<<endl; 
       
             
          }
          
        
          break;

        case 2:
        system("cls"); 
          x1=0; 
          // nicce ::::::::::::::::::
          n1.display_node();
          Sleep(2000);
        
          wait_timer(); 
          if(head!=NULL){ 
            
         
          cout << " Entre the ID : ";

          cin >> ID;
         x1=n1.delete_etd(ID);
         if(x1==0){ 
         cout<<" The DI does not exist: "<<endl; 
         
         }
         n1.display_node();
          } 
         else{ 
     
        cout<<" The database is  empty : "<<endl; 
              
         }
          
          break;
        case 3:
          system("cls"); 
          // nicce ::::::::::::::::::
          cout << " Entre the ID : ";
          cin >> ID;
          e1=n1.find_etd(ID);
          system("cls"); 
          if (e1.Note_finale != -1)
          {
            cout << "*" << endl;
            cout << "* the id : " << e1.id << endl;
            cout << "* the  name: " << e1.name << endl;
            cout << "* the Last   name: " << e1.last_name << endl;
            cout << "* the number of matier: " << e1.nbr_N << endl;
            cout << "* the  finale note: " << e1.Note_finale << endl;
          }
          else{ 
            cout<<"The student does not exist: "<<endl;
          }

          break;

        case 4:
          // nicce ::::::::::::::::::
         
            system("cls"); 
          cout<< "Entre the ID : ";
          cin >>ID;
          

           do{ 

         
          cout<< " Entre the new note : " << endl;
          cin >> new_note;
            }while (new_note>20 || new_note<0);
           
           
          n1.modif_etd(new_note, ID);
          break;

        case 5:
          // nicce ::::::::::::::::::
            system("cls"); 
          cout<< "welcome to ascending  order " << endl;
          n1.trier_crois();
          n1.display_node(); 
          break;

        case 6:
          // nicce ::::::::::::::::::
            system("cls"); 
          cout<< " welcome to descending order " << endl;
          n1.trier_decrois();
           n1.display_node(); 
          break;

        case 7:
          // nicce ::::::::::::::::::
            system("cls"); 
          cout<< " welcome to display : " << endl;
          n1.display_node();

          break;
        case 8:
          system("cls"); 
          char name_file[40];
          cout<< " Entre the name of the file : ";
          scanf("%s", name_file);
          n1.insert_file(name_file);

          break;
          case 0:
          cout<<" good  by :  "<<endl; 
          break; 

        default:
          system("cls"); 
          // nicce ::::::::::::::::::
          cout<< "there has been an error : " << endl;
          break;
      
      
        }


        //  system("cls");
       if(key1!=0){ 
      cout << "Press Enter to Continue"<<endl;
    getline(cin,name);
    cin.ignore();
       }
        system("cls");
      if(key2!=0 && statut!=0){ 
    wait_timer();

      }
       

             }while(key1 != 0);
    
   
   
     break;



 // ********************************************************case2 ***************************
    // case 1 pour les fonctions de class etudiant  : 
    case 2:

    do
      { 
                key2=0; 
               system("cls"); 
                cout << "\n***********welcome to this programme I hope you were fine :**************" << endl<<endl;

                cout<< " To display the note click 1 :" << endl;
                cout<< " To sort the notes in ascending order  click 2 :  " << endl;
               cout<< " To sort the students in descending order  click 3 : " << endl;
               cout<< " To display the valid note click 4:" << endl;
                cout<< " to display the invalid note click 5: " << endl;
                cout<< " To find a Student Score: click 6:  "<<endl;

                cout<< " \n TO EXIT CLICK  0 : " << endl;


                cin >> key2;
                 system("cls");
                 wait_timer();
                       switch (key2)
        {
        case 1:
          // nicce ::::::::::::::::::
          cout<< " Entre the ID : " << endl;
          cin >> ID;

          e1= n1.find_etd(ID);
          if (e1.Note_finale != -1)
          {
            e1.display_note(e1.Note, e1.nbr_N);
          }
          else{ 
          cout<<" not fond : \n"; 

          }

          break;

        case 2:
          // nicce ::::::::::::::::::
          cout<< " Entre the ID : " << endl;
          cin >> ID;
          e1 = n1.find_etd(ID);
          if (e1.Note_finale != -1)
          {
            e1.trier_croi(e1.Note, e1.nbr_N);
             e1.display_note(e1.Note,e1.nbr_N);  
          }
           else{ 
          cout<<"The ID does not exist:\n"; 

          }

          break;
        case 3:
          // nicce ::::::::::::::::::
          cout<< " Entre the ID : " << endl;
          cin >> ID;
          e1 = n1.find_etd(ID);
          if (e1.Note_finale != -1)
          {
            e1.trier_decroi(e1.Note, e1.nbr_N);
             e1.display_note(e1.Note,e1.nbr_N);  
          }
           else{ 
          cout<<" The ID does not exist:\n "; 

          }
          break;

        case 4:
          cout<< " Entre the ID : " << endl;
          cin >> ID;
          e1 = n1.find_etd(ID);
          if (e1.Note_finale != -1)
          {
            e1.valide(e1.Note, e1.nbr_N);
           
          }
           else{ 
          cout<<" The ID does not exist:\n"; 

          }
          break;

        case 5:
          cout<< " Entre the ID : " << endl;
          cin >> ID;
          e1 = n1.find_etd(ID);
          if (e1.Note_finale != -1)
          {
            e1.invalide(e1.Note, e1.nbr_N);
          }
           else{ 
          cout<<" The ID does not exist: \n"; 

          }
          break;
        case 6:

          cout << " entre the ID : " << endl;
          cin >> ID;
          e1 = n1.find_etd(ID);

          if (e1.Note_finale != -1)
          {
            e1.display_etd(e1);
            cout << " Entre the name of  the matier : ";
            cin >> name;

            e1.search_NOTE(e1.Note, e1.nbr_N, name);
          }
          break;
          case 0:
          cout<<" by by "<<endl;  
          break;

        default:
          cout << "error : " << endl;
          break;
        }
                 
       
             if(key2!=0){ 
               cout << "Press Enter to Continue"<<endl;
              getline(cin,name);
               cin.ignore();
              }
         system("cls");    
         if(key1!=0 && statut!=0  ){ 

          wait_timer(); 

         }
               

     
            
            
       } while (key2 != 0);
    
   
  
   break;


// default case  *************************************
   default:
         cout<< "error : " << endl;

    break;
     }
  // clear the console 
    system("cls"); 
     if(statut!=0 && key1!=0 &&key2!=0 ){  // la conditon d'attende : 
      cout << "Press Enter to Continue"<<endl;
    getline(cin,name);
    cin.ignore();
       }


       if(key1!=0 &&key2!=0){ 
          wait_timer(); 

       }
        

        
 } while (statut != 0); // condition de sortier 



}
 // *********************************************fonction de node************************************************* 
// nicce ::::::::::::::::::1
void node::display_node()
{

  if (head == NULL || last == NULL)
  {
    cout << " The database is empty : "<<endl;
  }
else{ 




  cout << "Welcome to display :  \n";
  node *list = head;
  int i = 0;

  while (list != NULL)
  {
    //  int id;
    // string name;
    // string last_name;
    // int nbr_N;
    // note_S Note[30];
    // float Note_finale;
    cout << endl
         << "***********************";
    cout << "*" << endl;
    cout << "* The ID : " << list->data.id << endl;
    cout << "* The  name: " << list->data.name << endl;
    cout << "* The Last  name: " << list->data.last_name << endl;
    cout << "* The number of matier: " << list->data.nbr_N << endl;
    cout << "* The final note : " << list->data.Note_finale << endl;
    list = list->next;
    cout << endl;
  }
}

}
// nicce ::::::::::::::::::2
void node::filling(etudiant data)
{
  node *new_node = new node;

  new_node->next == NULL;
  new_node->data = data;

  if (head == NULL || last == NULL)
  {
  
    new_node->perevies = NULL;
    new_node->next = NULL;
    head = new_node;
    last = new_node;
  }
  else
  {
    node *list = last;
    list->next = new_node;
    new_node->perevies = list;
    last = new_node;
    new_node->next = NULL;
  }
  cout << "The student adds with susseccfuly : " << endl;
}
// nicce ::::::::::::::::::3
int node::delete_etd(string id)
{

  if (head == NULL || last == NULL)
  {

    cout << " there  is no student in the database : " << endl;
  }
 
 
 
  else
  {

    node *list = head;
    node *listN;

    int a = 0;
   
      // the basic case if last.next == iD so 
      // we need just to change the positon of  last 
      // last=last.previes 
    if(head->next==NULL  && head->data.id==id){ 
     node *list=head; 
    cout<<"The student is deleting susseccfuly :   "<<endl; 
    head=NULL; 
   //  last==NULL; 
      // delete(list); 
          return 1; 

  

    }
   
   
   
  else   if ( last->next==NULL && last->data.id==id && last->perevies!=NULL)
    {
      // the function to change the postion of last  
      delete_last();

      cout << " The student is deleting susseccfuly : " << endl;
      return 1; 
    }
     

    else if ((head->data.id==id) && (head->next!=NULL) )
    {

      delete_first();
      cout << " The student is deleting susseccfuly : " << endl;
      return 1; 
    }

    else
    {
        while (list != NULL)
    {

      if (list->data.id == id)
      {
        a = 1;
        break;
      }

      list = list->next;
    }



      if (a == 1)

      {

    

        listN = list->perevies;
        listN->next = list->next;
        listN->next->perevies = listN;

        delete (list);
        cout << " The student is deleting susseccfuly : " << endl;
        return 1; 
      }
      else{ 
      return 0; 
         
      }
    }
  }

}
// nicce ::::::::::::::::::4
void node::display_reverse()
{

  cout << "welcome to display reverse : " << endl;
  node *list = last;
  if (head == NULL || last == NULL)
  {
    cout << " the datbase is empty : ";
  }
  else
  {

    while (list != head->perevies)
    {
      cout << endl
           << "***********************";
      cout << "*" << endl;
      cout << "* The ID : " << list->data.id << endl;
      cout << "* The  name: " << list->data.name << endl;
      cout << "* The Last   name: " << list->data.last_name << endl;
      cout << "* The number of matier: " << list->data.nbr_N << endl;
      cout << "* The  final note: " << list->data.Note_finale << endl;
      list = list->perevies;
      cout << endl;
    }
  }
}
// nicce ::::::::::::::::::5
void node::delete_first()
{
  node *list = head;

  head = head->next;
  head->perevies=NULL; 

  delete (list);
}
// nicce ::::::::::::::::::6
void node::delete_last()
{

  node *list = last;

  last = last->perevies;
  last->next = NULL;

  delete (list);
}
// nicce ::::::::::::::::::7
void node::trier_crois()
{
  if (head == NULL || last == NULL)
  {
    cout << " The the databasee is empty : " << endl;
  }

  else
  {

    node *i, *j;
    etudiant x;

    for (i = head; i != last->next; i = i->next)
    {

      for (j = i->next; j != last->next; j = j->next)
        if (i->data.Note_finale > j->data.Note_finale)
        {
          x = i->data;
          i->data = j->data;
          j->data = x;
        }
    }
  }
}
// nicce ::::::::::::::::::8
void node::trier_decrois()
{
  if (head == NULL || last == NULL)
  {
    cout << " The the databasee is empty : " << endl;
  }

  else
  {

    node *i, *j;
    etudiant x;

    for (i = head; i != last->next; i = i->next)
    {

      for (j = i->next; j != last->next; j = j->next)
        if (i->data.Note_finale < j->data.Note_finale)
        {
          //  cout<<i->data.Note_finale <<" ? <" <<j->data.Note_finale<<endl;
          x = i->data;
          i->data = j->data;
          j->data = x;
        }
    }
  }
}
// nicce ::::::::::::::::::9
void node::insert_file(char name[])
{
  // nicce :::::::::::::::::
  if (head == NULL || last == NULL)
  {
    cout << " The datbase is empty : ";
  }

  else
  {

    FILE *f1 = fopen(name, "w");
    if (f1 == NULL)
    {
      cout << " THERE HAS BEEN AN ERROR : ";
    }
    else
    {
      rewind(f1);
      int i = 1;
      node *list = head;
      fprintf(f1, "*************welcome to this programme I hope you were fine 🎉**************\n\n");
      fprintf(f1, "************** 1 ****************** ✅ \n");
      cout << " goog job :: " << endl;
      while (list != NULL)
      {

        fprintf(f1, "* The ID : %s                   \n", list->data.id.c_str());
        fprintf(f1, "* The name: %s                  \n", list->data.name.c_str());
        fprintf(f1, "* The Last name : %s            \n", list->data.last_name.c_str());
        fprintf(f1, "* The number of matier: %d      \n", list->data.nbr_N);
        fprintf(f1, "* The final  note : %.2f   ", list->data.Note_finale);
        if (list->data.Note_finale >= 10)
          fprintf(f1, "✨\n      \n");
        else
          fprintf(f1, "💔\n      \n");

        for (int i = 0; i < list->data.nbr_N; i++)
        {

          fprintf(f1, "   The name of the matier: %s  \n", list->data.Note[i].nom_mat.c_str());
          fprintf(f1, "   The note : %.2f             \n", list->data.Note[i].note);
          fprintf(f1, "   The note : %.2f             \n", list->data.Note[i].quefis);
        }
        i++;
        fprintf(f1, "\n************** %d ****************** ✅ \n", i);
        list = list->next;
      }
    }
  }
}
// nicce ::::::::::::::::::10
etudiant node::find_etd(string ID)
{
 etudiant e1;
  if (head == NULL || last == NULL)
  {

    cout<< " there  is no student in the database : " << endl;
     e1.name="nice"; 
     e1.last_name="nice"; 
     e1.nbr_N=0; 
    e1.Note_finale=-1; 


    return e1 ; 
  }
  else
  {

    node *list = head;

    while (list != NULL)
    {

      if (list->data.id == ID)
      {

        return list->data;
      }

      list = list->next;
    }

    cout << " The student does not EXIST : " << endl;
      e1.name="nice"; 
     e1.last_name="nice"; 
     e1.nbr_N=0; 
    e1.Note_finale=-1; 

   
    

    return e1;
  }
}
// nicce ::::::::::::::::::11
void node::modif_etd(float new_note, string ID)
{

  if (head == NULL || last == NULL)
  {

    cout << "There  is no student in the database : " << endl;
  }
  else
  {

    boolean t = false;

    node *list = head;

    while (list != NULL)
    {

      if (list->data.id == ID)
      {

        list->data.Note_finale = new_note;
        t = true;
        break;
      }
      list = list->next;
    }

    if (t == true)
    {
      cout << "The edit  make it with successfuly : " << endl;
    }
    else
    {
      cout << " ID don't EIXST : " << endl;
    }
  }
}


// *********************************************fonction de l'etudiant ************************************************* 
// nicce ::::::::::::::::::1
void etudiant::trier_croi(note_S N[], int n)
{
  int i, j;
  note_S x;

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (N[i].note > N[j].note)
      {
        x = N[i];
        N[i] = N[j];
        N[j] = x;
      }
    }
  }
}
// nicce ::::::::::::::::::2
void etudiant::trier_decroi(note_S N[], int n)
{

  int i, j;
  note_S x;

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (N[i].note < N[j].note)
      {
        x = N[i];
        N[i] = N[j];
        N[j] = x;
      }
    }
  }
}
// nicce ::::::::::::::::::3
void etudiant::search_NOTE(note_S N[], int n, string NAME)
{
  boolean a = false;
  for (int i = 0; i < n; i++)
  {
    if (N[i].nom_mat == NAME)
    {
      a = true;
      cout << endl
           << "***********************" << endl;
      cout << "* The name of the matier : " << N[i].nom_mat << endl;
      cout << "* The note of the : " << N[i].note << endl;
      cout << "* The facteur : " << N[i].quefis;

      cout << endl;
      break;
    }
  }
  if (a == false)
  {

    cout << " the matier not EXIST : " << endl;
  }
}
// nicce ::::::::::::::::::4
void etudiant::display_etd(etudiant e1)
{

  cout << "***********************";
  cout << "*" << endl;
  cout << "* The ID : " << e1.id << endl;
  cout << "* The  name: " << e1.name << endl;
  cout << "* The Last   name: " << e1.last_name << endl;
  cout << "* The number of matier: " << e1.nbr_N << endl;
  cout << "* The  finale note: " << e1.Note_finale << endl;
}
// nicce ::::::::::::::::::5
void etudiant::valide(note_S N[], int n)
{

  cout << " The valide note : " << endl;
  for (int i = 0; i < n; i++)
  {
    if (N[i].note >= 10)
    {
      cout << endl
           << "***********************" << endl;
      cout << "* The name of the matier : " << N[i].nom_mat << endl;
      cout << "* The note of the : " << N[i].note << endl;
      cout << "* The facteur : " << N[i].quefis;

      cout << endl;
    }
  }
}
// nicce ::::::::::::::::::6
void etudiant::invalide(note_S N[], int n)
{

  cout << " The invalide note : " << endl;
  for (int i = 0; i < n; i++)
  {
    if (N[i].note <= 10)
    {
      cout << endl
           << "***********************" << endl;
      cout << "* The name of the matier : " << N[i].nom_mat << endl;
      cout << "* The note of the : " << N[i].note << endl;
      cout << "* The facteur : " << N[i].quefis;

      cout << endl;
    }
  }
}
// nicce ::::::::::::::::::7
etudiant etudiant::add_etd()
{
  etudiant e1;
  /*
  int id;
  string name;
  string last_name;
  int nbr_N;
  float Note_finale;
  */

  cout << " Entre the ID: ";
  cin>>e1.id; 
  cout << " Entre the Name : ";
  cin >> e1.name;
  // cin>>e1.name;

  cout << "Entre the Last Name : ";
  cin >> e1.last_name;
  cout << "entre the number of matieres : ";
  cin >> e1.nbr_N;
  cout << endl;
  system("cls");

  e1.Note_finale = insert_Note(e1.Note, e1.nbr_N);
  return e1;
}
// nicce ::::::::::::::::::8
float etudiant::insert_Note(note_S N[], int n)
{
  float c = 0, k = 0;

  for (int i = 0; i < n; i++)
  {
    cout << endl
         << "***********************";
    cout << "*" << endl;
    cout << "* Entre the name of the matier   " << i << " : ";
    cin >> N[i].nom_mat;
     do{ 
     cout << "* Entre the note of the   " << N[i].nom_mat << ": ";
    cin >> N[i].note;

     }while(N[i].note>20  ||N[i].note<0 );
   
     do{ 
     cout << "* Entre the  cofficient   " << N[i].nom_mat << ":";
    cin >> N[i].quefis;


     }while(N[i].quefis>50  ||N[i].quefis<=0);
    


    c = c + (N[i].note * N[i].quefis);
    k = k + (N[i].quefis);
    cout << endl;
    system("cls");
  }
  return (c / k);
}
// nicce ::::::::::::::::::9
void etudiant::display_note(note_S N[], int n)
{

  int i;

  for (i = 0; i < n; i++)
  {
    cout << endl
         << "***********************" << endl;
    cout << "* The name of the matier : " << N[i].nom_mat << endl;
    cout << "* The note of the : " << N[i].note << endl;
    cout << "* The cofficient : " << N[i].quefis;

    cout << endl;
  }
}

