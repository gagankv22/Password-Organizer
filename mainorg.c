#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<math.h>

#include<string.h>

#include<unistd.h>

#include<dos.h>



struct node
{
                char data;
                struct node *next;
}*start=NULL,*q1,*t1;


long int n,t,flag,e[100],d[100],temp[100],j,i;
char force[80];
 int l=0;
int ii = 0,ii1=0;
char force2[80];
char force3[80];
int p,q;
char chs;

char msg[100],m[100],m1[100],en[100],ele[100];
char uname1[100],msg1[200];


int prime(long int);

void ce();
void nn();

void change();

void search(char opt);

void option();

void insertend(char hi[]);

void pop(char accinfo[100]);

long int cd(long int);

void encrypt();

void decrypt();

int search1(char search[]);

void doing();






int main() {

	int p = 7;
	int q = 17;
	int j = 1;

	int i = 1;
	char ch;
	char uname[50];
    printf("\n\t     WELCOME TO PASSWORD ORGANISER \n");
    printf("\n\t   WHERE SECURITY IS OUR MAIN CONSERN \n");
    printf("\n\t   New user(N)   /   Existing user(E) \n");
    scanf("%c",&ch);

    /*existing user */
    while(ch == 'E' && j ==1){

    flag=prime(p);

	if(flag==0) {

		printf("\n\tWRONG INPUT\n");

		getch();

		exit(1);

	}


	flag=prime(q);

	if(flag==0||p==q) {

		printf("\nfault in program sorry for inconvience\n");

		getch();

		exit(1);

	}


    void doing();




	for (i=0;msg[i]!='\0';i++)

	m[i]=msg[i];

	n=p*q;

	t=(p-1)*(q-1);

	ce();

	printf("\n\t Encrypting  plz wait\n");



	encrypt();

	j =0;

	decrypt();


 }


 if(ch == 'N')
        {

 nn();


}

	return (0);



	getch();


}

void nn(){
    char uname[100];

    if(l == 0){
      printf("\n Password Organiser . Secure and Safe \n");
            printf(" enter the details\n");
            printf("     User Name : ");
            fflush(stdin);
            gets(uname);
            strcpy(uname1,uname);


            printf("     Password : ");
            fflush(stdin);
            gets(msg);
            strcpy(msg1,msg);







            for (i=0;msg[i]!='\0';i++)

            m[i]=msg[i];

            n=p*q;

            t=(p-1)*(q-1);

            ce();

                printf("\nEncrypting  password plz wait\n");
                printf("\n   Generating a strong password ...\t ");

            encrypt();

            printf("\n\tAre you happy with the encryption ? :) Y/N \n\t");

                fflush(stdin);
                scanf("%c",&chs);
                l =l+1;
                if(chs == 'Y')
                {

                    insertend(uname);
                     printf("\n plz remember this password for further access\n");

                    printf("\n \n Password is saved  :) \n");

                    insertend(msg);

                    decrypt();
                    printf("\n----------------x--------x----------------\n\t");
                   option();
                }

               else{
                printf("plz try with another password\n");
                exit(0);
               }
    }
               else if(l == 1){
                  printf("\n Password Organiser . Secure and Safe \n");
            printf(" enter the details\n");
            printf("     User Name : ");
            fflush(stdin);
            gets(uname);
            strcpy(uname1,uname);


            printf("     Password : ");
            fflush(stdin);
            gets(msg);
            strcpy(msg1,msg);
            printf("the Decrypted is $fd\n");

        printf("\tTHE USER NAME PASSWORD IS  UPDATED");
        exit(0);
        l = l-1;





               }

            printf("\n plz remember this password for further access\n");

            printf("\n \n Password is saved  :) \n");



}

void change(){
    int pas;
    char uname2[100],msg2[100];
   do{  printf("\n Password Organiser . Secure and Safe \n");
     printf("\t\n for a new user name please enter the present user name and password");
            printf(" enter the details\n");
            printf("     User Name : ");
            fflush(stdin);
            gets(uname2);



            printf("     Password : ");
            fflush(stdin);
            gets(msg2);
            if((strcmp(uname2,uname1)==0)&& (strcmp(msg2,msg1)==0)){
            printf("Hii GAGAN %S WELCOME BACK ENTER NEW USER NAME AND PASSWORD",&uname1);

            nn();
            }
            else
            {

                printf("invalid user name\n");
                printf("do you wish to try again ? 1 for y,0 for no");
                scanf("%d",&pas);
            }
   }while(pas == 1);



}

void option2(){

    int s,q22 = 0;
        char acc[50];
   do{  printf("\n\t choose the account password you required\n");
     printf("\n 1.instagram \n"
            "   2. facebook\n"
            "   3. snapchat \n"
            "   4. whatsapp confermation\n"
            "   5. gmail\n"
            "   6. yahoo gamil"
            "   7. kindle\n"
            "   8. flipkart\n"
            "   9. google pay\n"
            "   10. paytm\n"
            "   11. ola\n"
            "   12. uber\n"
            "   13. bounce\n"
            "   14.zomato \n"
            "   15.quicker\n"
            "   16.olx\n"
            "   17.google chrome\n"
            "   18.my jio id\n"
            "   19.settings\n"
            "   20.others ;) \n");
        printf("enter the account\n");
         fflush(stdin);
         gets(acc);

        printf("enter the choice no. \n");
         fflush(stdin);
        scanf("%d",&s);
        printf("\nGETTING you the Password\n\t");
        if(ii == 0){
        printf("%s",&force);
        ii = ii +1;
        }

        else if(ii==1){
            printf("%s",&force2);
            ii = ii +1;
        }
        else if(ii == 2){
            printf("%s",&force3);
        }

        search1(s);
        printf("\n\n\t THANKYOU FOR USEING PASSWORD ORGANISER :) \n");
        printf("1] Do you wish to continue ? 1 for yes 0 for no \n");
              scanf("%d",&q22);
}while(q22 == 1);

}








void option(){
        int k,l = 0,q12 = 1;
        int p = 7;
        char s;
        int q = 17;
        char acc[50];
   do{  printf("\n\t choose the account for password\n");
     printf("\n 1.instagram \n"
            "   2. facebook\n"
            "   3. snapchat \n"
            "   4. whatapp confermation\n"
            "   5. gmail\n"
            "   6. yahoo gamil\n"
            "   7. kindle\n"
            "   8. flipkart\n"
            "   9. google pay\n"
            "   10. paytm\n"
            "   11. ola\n"
            "   12. uber\n"
            "   13. bounce\n"
            "   14.zomato \n"
            "   15.quicker\n"
            "   16.olx\n"
            "   17.google chrome\n"
            "   18.my jio id\n"
            "   19.settings\n"
            "   20.others ;) \n");
        printf("enter the account\n");
         fflush(stdin);
         gets(acc);

        printf("enter the choice no. \n");
         fflush(stdin);
        scanf("%c",&s);


        insertend(s);



        printf("Set the password for this account %s: ",&acc);
        fflush(stdin);
        gets(msg);


            for (i=0;msg[i]!='\0';i++)

            m[i]=msg[i];

            n=p*q;

            t=(p-1)*(q-1);

            ce();

        printf("getting you the password just a movement\n\n\t");
        printf("generating...\n");
        encrypt();

        printf("\n\t plz use the above generated password :)");

        printf("\n \n Password is saved  :) \n");
        printf("\n\t the password you had entered  ...");

        decrypt();

        printf("\t DO you want to add more account ? 1 for yes , 2 for no \n\t");
        scanf("%d",&q12);
        insertend(en);
   }while(q12 == 1);

       do{ printf("\n\t 1]. Do you wish to see the saved passwd\n"
               "\n\t 2]. exit the program ?\n"
                "\t 3.] Change the user name \n"
               "\t 4]. change the user password \n");
        scanf("%d",&k);



               switch(k){
           case 1:
                l = 1;
                doing();

                break;
           case 2:
                printf("\tSEE you soon bye...\n");
                l = 1;


                break;
           case 3:
               change();


           default :
            printf("\n\t Invalid choice ,plz select the valid choice");

               }
       }while(l == 0);

        /* new users password has to be stored */


/*
     switch(s){
         case 1:
                pop(acc);
                break;
         case 2:
                pop(acc);
                 break;
         case 3:
                pop(acc);
                 break;
         case 4:
                pop(acc);
                 break;
         case 5:
                pop(acc);
                 break;
         case 6:
                pop(acc);
                 break;

         case 7:
                pop(acc);
                 break;
         case 8:
                pop(acc);
                 break;
         case 9:
                pop(acc);
                 break;
         case 10:
                pop(acc);
                 break;
         case 11:
                pop(acc);
                 break;
         case 12:
                pop(acc);
                 break;
         case 13:
                pop(acc);
                 break;
         case 14:
                pop(acc);
                 break;
         case 15:
                pop(acc);
                 break;
         case 16:
                pop(acc);
                 break;
         case 17:
                pop(acc);
                 break;
         case 18:
                pop(acc);
                 break;
         case 19:
                pop(acc);
                 break;
         case 20:
                pop(acc);
                 break;
         default:
            printf("invalid enter\n");
            exit(0);

     }*/

}


/*retriving the password */



void doing(){
   int res1 =0,res2 =0;
 do{
	printf("\nENTER USER NAME: ");

	fflush(stdin);
    scanf("%s",ele);
    res1 = search1(ele);




    printf("ENTER THE PASSWORD: \n");
    	fflush(stdin);
	scanf("%s",msg);
	res2 = search1(msg);

	if(1){
        printf("\n\t HI %s WELCOME BACK TO PASSWORD ORGANINER\n",&ele);
        printf("\n\t Which account do you want to access ?");
        i = 3;
        option2();

	}
	else{
        printf("PASSWORD DOES NOT EXITS PLEASE TRY AGAIN\n\t");
        i = i+1;
        if(i == 2){
            printf("last chance \n");

        }
	}

    }while(i<=2);



}


int prime(long int pr) {

	int i;

	j=sqrt(pr);

	for (i=2;i<=j;i++) {

		if(pr%i==0)

		    return 0;

	}

	return 1;

}


void insertend(char hi[])
{
char num11;
num11 = hi;

t1=(struct node*)malloc(sizeof(struct node));

t1->data=num11;
t1->next=NULL;
if(start==NULL) //If list is empty
{
start=t1;
}
else
{
q1=start;
while(q1->next!=NULL)
q1=q1->next;
q1->next=t1;
q1=q1->next;
q1->next = NULL;
}
}

int search1(char search[]){

    char elem ;
    struct node *cur;
    elem = search;
    cur = start;
    while(cur->data!=elem && cur->next!=NULL){
        cur = cur->next;
    }
    if(cur->data == elem){
        return 1;
    }
    else{
        return 0;
        }


}

void search(char opt){

    char elem ;
    struct node *cur,*link;
    elem = opt;
    cur = start;
    while(cur->data!=elem && cur->next!=NULL){
        cur = cur->next;
    }
    if(cur->data == elem){
        link = cur;
        link = link->next;
        printf("THE PAWWORD YOU HAVE DESIRED IS ...\n\t");
        printf("\t\n %d",link->data);
    }
    else{
        printf("\n\t Password not found make sure you have entered the correct one\n");
        }
}

void ce() {

	int k;

	k=0;

	for (i=2;i<t;i++) {

		if(t%i==0)

		    continue;

		flag=prime(i);

		if(flag==1&&i!=p&&i!=q) {

			e[k]=i;

			flag=cd(e[k]);

			if(flag>0) {

				d[k]=flag;

				k++;

			}

			if(k==99)

			        break;

		}

	}

}

long int cd(long int x) {

	long int k=1;

	while(1) {

		k=k+t;

		if(k%x==0)

		    return(k/x);

	}

}

void encrypt() {

	long int pt,ct,key=e[0],k,len;

	i=0;

	len=strlen(msg);

	while(i!=len) {

		pt=m[i];

		pt=pt-96;

		k=1;

		for (j=0;j<key;j++) {

			k=k*pt;

			k=k%n;

		}

		temp[i]=k;

		ct=k+96;

		en[i]=ct;

		i++;

	}

	en[i]=-1;

	printf("\nTHE ENCRYPTED PASSWORD IS\n\t");

if(ii1 == 0)
	{for (i=0;en[i]!=-1;i++)
{
printf("%c",en[i]);
force[i] = en[i];
}
ii1 = ii1 +1;
}
 else if(ii1 == 1){

	for (i=0;en[i]!=-1;i++)
{
printf("%c",en[i]);
force2[i] = en[i];


}

}

else if(ii1 == 2){

	for (i=0;en[i]!=-1;i++)
{
printf("%c",en[i]);
force3[i] = en[i];

}
}
}

void decrypt() {

	long int pt,ct,key=d[0],k;

	i=0;

	while(en[i]!=-1) {

		ct=temp[i];

		k=1;

		for (j=0;j<key;j++) {

			k=k*ct;

			k=k%n;

		}

		pt=k+96;

		m[i]=pt;

		i++;

	}

	m[i]=-1;

	printf("\nTHE DECRYPTED PASSWORD  IS\n");

	for (i=0;m[i]!=-1;i++)

	printf("%c",m[i]);



}
