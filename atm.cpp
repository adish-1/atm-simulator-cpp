here#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int chekinglogin=0,aftercheckch,withdrawal=0,depositing=0;
  char ch;
  char accpin[5],newpin[5],accno[5],accpinnumber[4];
  bool validation=true;
  bool cheking=true;
  char acno[3][5]={"1001","1002","1003"};
  char pin[3][5]={"1234","4567","8910"};
  int balance[3]={15000,20000,3000};
  while(validation)
  {
   int i,j,k,acnosame=0,acpinsame=0;
   cout << "\n𝗪𝗘𝗟𝗖𝗢𝗠𝗘 𝗧𝗢 𝗔𝗧𝗠\n" << endl;
   while(validation)
   {
   cout << "𝗘𝗡𝗧𝗘𝗥 𝗬𝗢𝗨𝗥 𝗔𝗖𝗖𝗢𝗨𝗡𝗧 𝗡𝗨𝗠𝗕𝗘𝗥: \n" << endl;
   cin>>accno;
   int len=strlen(accno);
   if(len!=4)
   {
   cout << "𝗠𝗜𝗡𝗜𝗠𝗨𝗠 𝗡𝗨𝗠𝗕𝗘𝗥 𝗜𝗦 𝟰!" << endl;
   continue;
   }
   bool accountnochek=false;
   for(i=0;i<3;i++)
   {
     accountnochek=true;
    for(j=0;j<4;j++)
    {
    if(acno[i][j]!=accno[j])
    {
     accountnochek=false;
     break;
     }
     }
     if(accountnochek==true)
     break;
     }
     if(accountnochek==true)
     {
     acnosame=i;
     break;
     }
     if(accountnochek==false)
     {
      cout << "𝗧𝗛𝗘 𝗘𝗡𝗧𝗘𝗥𝗘𝗗 𝗔𝗖𝗖𝗡𝗢 𝗗𝗢𝗦𝗘𝗡𝗧 𝗘𝗫𝗜𝗦𝗧" << endl;
     continue;
     }
     }
     
   while(validation)
   {
   int j;
   for(int check=1;check<=3;check++)
   {
   cout << "𝗘𝗡𝗧𝗘𝗥 𝗬𝗢𝗨𝗥 𝗣𝗜𝗡 𝗡𝗨𝗠𝗕𝗘𝗥: \n" << endl;
   cin>>accpin;
   int len=strlen(accpin);
   if(check==3)
   {
   cout << "𝗪𝗥𝗢𝗡𝗚 𝗣𝗜𝗡 𝗘𝗡𝗧𝗥𝗬 𝗙𝗢𝗥 𝟯 𝗧𝗜𝗠𝗘𝗦" << endl;
   return 1;
   }
   if(len!=4)
   {
    cout << "𝗧𝗛𝗘 𝗔𝗖𝗖𝗢𝗨𝗡 𝗣𝗜𝗡 𝗜𝗦 𝗪𝗥𝗢𝗡𝗚  "<<check<<" 𝗧𝗥𝗬 𝗢𝗨𝗧 𝗢𝗙( 𝟯) \n" << endl;
    continue;
    }
    else
    break;
    }
    for(j=0;j<4;j++)
    {
    cheking=true;
     if(pin[acnosame][j]!=accpin[j])
     {
      cheking=false;
      break;
      }
      } 
      if(cheking==false)
      {
      if(chekinglogin==3)
      {
      chekinglogin++;
       cout << "𝗬𝗢𝗨𝗥 𝟯 𝗧𝗥𝗜𝗘𝗦 𝗔𝗥𝗘 𝗢𝗩𝗘𝗥" << endl;
       return 1;
       }
       else
       {
        cout << "𝗔𝗖𝗖𝗢𝗨𝗡𝗧 𝗡𝗨𝗠𝗕𝗘𝗥 𝗔𝗡𝗗 𝗔𝗖𝗖𝗢𝗨𝗡𝗧 𝗣𝗜𝗡 𝗔𝗥𝗘 𝗡𝗢𝗧 𝗠𝗔𝗧𝗖𝗛𝗜𝗡𝗚" << endl;
        continue;
        }
      }
      else
      {
      chekinglogin=1;
      break;
      }
      }
            cout << "𝗟𝗢𝗚𝗜𝗡 𝗦𝗨𝗖𝗖𝗘𝗦𝗦𝗙𝗨𝗟𝗟 𝗙𝗢𝗥  "<<accno << endl;
            while(true)
            {
             cout<<"𝟭:𝗚𝗢 𝗧𝗢 𝗠𝗔𝗜𝗡 𝗪𝗜𝗡𝗗𝗢𝗪\n𝟮: 𝗖𝗛𝗘𝗖𝗞 𝗕𝗔𝗟𝗔𝗡𝗖𝗘\n𝟯: 𝗪𝗜𝗧𝗛𝗗𝗥𝗔𝗪 𝗠𝗢𝗡𝗘𝗬\n𝟰: 𝗗𝗘𝗣𝗢𝗦𝗜𝗧 𝗠𝗢𝗡𝗘𝗬\n𝟱: 𝗘𝗫𝗜𝗧\n"<<endl;
             if(!(cin>>aftercheckch))
             {
              cout << "𝗘𝗡𝗧𝗘𝗥 𝗔 𝗩𝗔𝗟𝗜𝗗 𝗖𝗛𝗢𝗜𝗖𝗛𝗘" << endl;
              cin.clear();
              cin.ignore(1000,'\n');
              continue;
             }
             if(aftercheckch==1)
             {
              cout << "𝗟𝗢𝗚 𝗢𝗨𝗧 𝗙𝗥𝗢𝗠 "<<accno<< endl;
              break;
             }
             else if(aftercheckch==2)
             {
              cout<<" 𝗖𝗨𝗥𝗥𝗘𝗡𝗧 𝗕𝗔𝗟𝗔𝗡𝗖𝗘 𝗙𝗢𝗥 "<<accno<<" = "<<balance[acnosame]<<endl;
             }
              else if(aftercheckch==3)
               {
                cout << "𝗘𝗡𝗧𝗘𝗥 𝗧𝗛𝗘 𝗔𝗠𝗢𝗨𝗡𝗧 𝗙𝗢𝗥 𝗪𝗜𝗧𝗛𝗗𝗥𝗔𝗪𝗜𝗡𝗚 : " << endl;
                cin>>withdrawal;
                cout << "𝗘𝗡𝗧𝗘𝗥 𝗬𝗢𝗨 𝗣𝗜𝗡 𝗡𝗨𝗠𝗕𝗘𝗥" << endl;
                cin>>accpinnumber;
                if(strcmp(accpinnumber,accpin)!=0)
                {
                 cout << "𝗧𝗛𝗘 𝗣𝗜𝗡 𝗜𝗦 𝗜𝗡𝗖𝗢𝗥𝗘𝗖𝗧" << endl;
                 break;
                 }
                 if(withdrawal>balance[acnosame])
                 {
                  cout << "𝗜𝗡𝗦𝗨𝗙𝗙𝗜𝗖𝗘𝗡𝗧 𝗕𝗔𝗟𝗔𝗡𝗖𝗘 " << endl;
                  continue;
                 }
                 cout <<withdrawal<< " 𝗗𝗘𝗕𝗜𝗧𝗘𝗗 𝗙𝗥𝗢𝗠 𝗬𝗢𝗨𝗥 𝗔𝗖𝗖𝗢𝗨𝗡𝗧" << endl;
                 balance[acnosame]=balance[acnosame]-withdrawal;
                 cout << "𝗖𝗨𝗥𝗥𝗘𝗡𝗧 𝗕𝗔𝗡𝗞 𝗕𝗔𝗟𝗔𝗡𝗖𝗘 : "<<balance[acnosame] << endl;
                }
                else if(aftercheckch==4)
               {
                cout << "𝗘𝗡𝗧𝗘𝗥 𝗧𝗛𝗘 𝗔𝗠𝗢𝗨𝗡𝗧 𝗧𝗢 𝗗𝗘𝗣𝗢𝗦𝗜𝗧𝗘: " << endl;
                cin>>depositing;
                cout << "𝗘𝗡𝗧𝗘𝗥 𝗬𝗢𝗨 𝗣𝗜𝗡 𝗡𝗨𝗠𝗕𝗘𝗥" << endl;
                cin>>accpinnumber;
                if(strcmp(accpinnumber,accpin)!=0)
                {
                 cout << "𝗧𝗛𝗘 𝗣𝗜𝗡 𝗜𝗦 𝗜𝗡𝗖𝗢𝗥𝗘𝗖𝗧" << endl;
                 break;
                 }
                 cout <<depositing<< " 𝗗𝗘𝗕𝗜𝗧𝗧𝗘𝗗 𝗧𝗢 𝗬𝗢𝗨𝗥 𝗔𝗖𝗖𝗢𝗨𝗡𝗧" << endl;
                 balance[acnosame]=balance[acnosame]+depositing;
                 cout << "𝗖𝗨𝗥𝗥𝗘𝗡𝗧 𝗕𝗔𝗡𝗞 𝗕𝗔𝗟𝗔𝗡𝗖𝗘 : "<<balance[acnosame] << endl;
                }
                 else if(aftercheckch==5)
                 {
                  cout << "𝗛𝗔𝗩𝗘 𝗔 𝗚𝗢𝗢𝗗 𝗗𝗔𝗬!" << endl;
                  break;
                 }
                 cout << "𝗗𝗢 𝗬𝗢𝗨 𝗪𝗔𝗡𝗧 𝗧𝗢 𝗖𝗢𝗡𝗧𝗜𝗡𝗨𝗘(𝗬/𝗡)" << endl;
                 cin>>ch;
                 if(ch!='y' && ch!='Y')
                 {
                  cout << "𝗧𝗛𝗔𝗡𝗞 𝗬𝗢𝗨" << endl;       
                  break;
                 }
            }
             cout << "𝗗𝗢 𝗬𝗢𝗨 𝗪𝗔𝗡𝗧 𝗧𝗢 𝗖𝗢𝗡𝗧𝗜𝗡𝗨𝗘(𝗬/𝗡)" << endl;
             cin>>ch;
             if(ch!='y' && ch!='Y')
             {
              cout << "𝗧𝗛𝗔𝗡𝗞 𝗬𝗢𝗨" << endl;       
              break;
             }
 }
}
