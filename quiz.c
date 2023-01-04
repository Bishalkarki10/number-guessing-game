#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int ans;
    int choice;
    int count = 0;
    printf("Welcome to the Quiz Game \n\n");
    printf("\t\t>>> Press 1 to start the game \n");
    printf("\t\t>>> Press 0 to quit the game \n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("\t\t--------------The game has started--------------\n\n\n\n\n");
        printf(">>>---------------some information about the quiz game---------------<<<");
        printf("\n\t There are 5 topics in this quiz ");
        printf("\n\t Each topic contains 10 questions ");
        printf("\n\t Each question contains 10 points ");
    }
    else if (i == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid number\n\n");
    }
start:
    if (i == 1)
    {
        printf("\t--------------Choose the any topic you want to learn--------------\n\n");
        printf("1) Basic computer \n2) Computer system \n3) Networking \n4) C-programming \n5) JavaScript");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("________________________Q.no-1_______________________________\n");
            printf("Which one is the first search engine in internet?\n\n");
            printf(" 1) Google \n 2) Archie\n 3) Wais\n 4)  Altavista\n");
            printf("Enter your answer: \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-2_______________________________\n");
            printf(" Where are the contents of your computer's hard drive indexed?\n\n");
            printf(" 1) Yahoo! \n 2) Google\n 3) MSN \n 4) None of the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-3_______________________________\n");
            printf(" Main circuit board in a computer is:\n\n");
            printf(" 1) Decoder \n 2) Highlight\n 3) Select \n 4) Mother board\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-4_______________________________\n");
            printf(" ISP stands for:\n\n");
            printf(" 1) Internet Survey Period \n 2) Integrated Service Provider\n 3) Internet Security Protocol \n 4) Internet Service Provider\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-5_______________________________\n");
            printf(" Internet Explorer is a:\n\n");
            printf(" 1) Any person browsing the net \n 2) Web Browser\n 3) Graphing Package \n 4) News Reader\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-6_______________________________\n");
            printf(" Lately you hear a clatter from your computer, especially when you load a program or call up information. What's going on? \n\n");
            printf(" 1) It's infested with reindeer \n 2) Your hard disk may be headed for failure\n 3) A loose wire is hitting the cooling fanct \n 4) A loud metallic clatter is normal\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-7_______________________________\n");
            printf(" The 'http' you type at the beginning of any site's address stands for:\n\n");
            printf(" 1) HTML Transfer Technology Process\n 2)  Hyperspace Terms and Tech Protocol\n 3)  Hyperspace Techniques & Tech Progress\n 4) Hyper Text Transfer Protocol\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-8_______________________________\n");
            printf("Which company created the most used networking software in the 1980's\n\n");
            printf(" 1) Microsoft \n 2) Sun\n 3) IBM \n 4) Novell\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-9_______________________________\n");
            printf("Which of the following operating systems is produced by IBM?\n\n");
            printf(" 1) OS-2 \n 2) Windows\n 3) DOS \n 4) UNIX\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-10_______________________________\n");
            printf("Which is the best search tool for finding We sites that have been handpicked and recommended by someone else?\n\n");
            printf(" 1) Subject directories \n 2) Search engines\n 3) Meta-search engines \n 4) Discussion groups\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("\n\nEach question holds the value of 10 points\n");
            printf("Your score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
            break;

        case 2:
            printf("________________________Q.no-1_______________________________\n");
            printf("Which of the following statements correctly describes the microcomputer disk drive?\n\n");
            printf(" 1)  A disk drive is used to transfer data to and from disks.\n 2)  The two types of disk drives are hard disks and flexible disks.\n 3) Hard disks are permanent storage devices.\n 4) All of these\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-2_______________________________\n");
            printf("RAM chips\n\n");
            printf(" 1)  Store data indefinitely unless you delete it.\n 2)  Allow the computer to store data electronically\n 3)  Are always measured in thousand of bytes\n 4)  All of these\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-3_______________________________\n");
            printf(" The CPU and memory are located on the\n\n");
            printf(" 1) Keyboard \n 2) Graphics board\n 3) Sound board \n 4) Motherboard\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-4_______________________________\n");
            printf(" The brain of any computer system is\n\n");
            printf(" 1) CPU \n 2) Memory\n 3) ALU \n 4) Control unit\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-5_______________________________\n");
            printf(" ALU stands for\n\n");
            printf(" 1)  Algorithm and logical unit \n 2)  Arithmetic and logical unit\n 3) Arithmetic and logarithm unit\n 4) Algorithm and logarithm unit\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-6_______________________________\n");
            printf(" Which of the following is the main circuit-board of the system unit? \n\n");
            printf(" 1) Control unit \n 2) Sound board\n 3) Motherboard \n 4) Graphics board\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-7_______________________________\n");
            printf(" The 'http' you type at the beginning of any site's address stands for:\n\n");
            printf(" 1) HTML Transfer Technology Process\n 2)  Hyperspace Terms and Tech Protocol\n 3)  Hyperspace Techniques & Tech Progress\n 4) Hyper Text Transfer Protocol\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-8_______________________________\n");
            printf("PCS are considered fourth-generation and contain\n\n");
            printf(" 1) Microprocessors \n 2) Information\n 3) Vacuum tubes \n 4) Data\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-9_______________________________\n");
            printf("The hardware in which data may be stored for a computer system is called\n\n");
            printf(" 1) Memory \n 2) Control unit\n 3) Bus \n 4) Register\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-10_______________________________\n");
            printf("Which bus is used to connect the monitor to the CPU?\n\n");
            printf(" 1) SCSI bus \n 2) HACK bus\n 3) KISS bus\n 4) PCI\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("Each question holds the value of 10 points\n");
            printf("Your score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }

            break;

        case 3:
            printf("________________________Q.no-1_______________________________\n");
            printf("What is the frequency range of the IEEE 802.11a standard?\n\n");
            printf(" 1) 2.4Gbps \n 2) 5Gbps\n 3) 2.4GHz\n 4) 5GHz\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-2_______________________________\n");
            printf(" What is the maximum distance running the lowest data rate for 802.11b?\n\n");
            printf(" 1) About 100 feet \n 2) About 175 feet\n 3) About 300 feet \n 4) About 350 feet\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-3_______________________________\n");
            printf(" What is the maximum distance with maximum data rate for 802.11a?\n\n");
            printf(" 1) About 65-75 feet \n 2) About 90-100 feet\n 3) About 150 feet \n 4) Over 200 feet\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-4_______________________________\n");
            printf(" What is the frequency range of the IEEE 802.11b standard?\n\n");
            printf(" 1) 2.4Gbps \n 2) 5Gbps\n 3) 2.4GHz \n 4) 5GHz\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-5_______________________________\n");
            printf(" You have a Cisco mesh network. What protocol allows multiple APs to connect with many redundant connections between nodes?\n\n");
            printf(" 1) LWAPP \n 2) AWPP\n 3) STP \n 4) IEEE\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-6_______________________________\n");
            printf(" Which layer 1 devices can be used to enlarge the area covered by a single LAN segment? \n\n");
            printf(" 1) Switch\n 2) NIC\n 3) Hub and repeater\n 4) Repeater\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-7_______________________________\n");
            printf(" Routers operate at layer _____. LAN switches operate at layer _____. Ethernet hubs operate at layer _____. Word processing operates at layer _____.\n\n");
            printf(" 1) 3, 3, 1, 7\n 2) 3, 2, 1, none\n 3) 3, 2, 1, 7\n 4) 3, 3, 2, none\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-8_______________________________\n");
            printf("Which of the following describe router functions?\n\n");
            printf(" 1) Packet switching \n 2) Packet filtering\n 3) Internetwork communication \n 4) Path selection\n 5) All of the above \n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 5)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 5\n");
            }

            printf("________________________Q.no-9_______________________________\n");
            printf("Why does the data communication industry use the layered OSI reference model?\n\n");
            printf(" A) It divides the network communication process into smaller and simpler components, thus aiding component development, design, and troubleshooting. \n B) It enables equipment from different vendors to use the same electronic components, thus saving research and development funds.\n C) It supports the evolution of multiple competing standards and thus provides business opportunities for equipment manufacturers. \n D) It encourages industry standardization by defining what functions occur at each layer of the model.\n");
            printf(" 1) A only \n 2) A and D\n 3) B and C \n 4) C only\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-10_______________________________\n");
            printf("A receiving host has failed to receive all of the segments that it should acknowledge. What can the host do to improve the reliability of this communication session?\n\n");
            printf(" 1) Send a different source port number. \n 2) Restart the virtual circuit.\n 3) Decrease the sequence number. \n 4) Decrease the window size.\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("Each question holds the value of 10 points\n");
            printf("Your score is %d", 10 * count);

            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
            break;

        case 4:
            printf("________________________Q.no-1_______________________________\n");
            printf("Identify the incorrect file opening mode from the following. \n\n");
            printf(" 1) r \n 2) w \n 3) x\n 4)  a\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-2_______________________________\n");
            printf("Which of the following operator can be used to access value at address stored in a pointer variable?\n\n");
            printf(" 1) * \n 2) #\n 3) && \n 4) @ \n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-3_______________________________\n");
            printf(" An operation with only one operand is called unary operation.\n\n");
            printf(" 1) Yes \n 2) An operation with two operand is called unary operation\n 3)  An operation with unlimited operand is called unary operation \n 4) None of the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-4_______________________________\n");
            printf(" The maximum combined length of the command-line arguments as well as the spaces between adjacent arguments is – a) 120 characters, b) 56 characters, c) Vary from one OS to another\n\n");
            printf(" 1) a\n 2) a,b\n 3) a,b,c \n 4) c\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-5_______________________________\n");
            printf(" C is a:\n\n");
            printf(" 1) general-purpose computer programming language \n 2) procedural computer programming language\n 3) multi-paradigm computer programming language \n 4)  All the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-6_______________________________\n");
            printf(" C first appeared in \n\n");
            printf(" 1)  1972 \n 2)  1974\n 3) 1982 \n 4) 1984\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-7_______________________________\n");
            printf("  Filename extension of C language is\n\n");
            printf(" 1) .cp\n 2) cl\n 3)   .c\n 4)  All the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-8_______________________________\n");
            printf(" C influenced by\n\n");
            printf(" 1) Assembly language \n 2) FORTRAN\n 3)  ALGOL 68 \n 4) All the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-9_______________________________\n");
            printf(" C influenced\n\n");
            printf(" 1)  C++, C#, and Objective-C \n 2) Java and JavaScript\n 3) Perl, PHP, and Python \n 4) All the above\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-10_______________________________\n");
            printf("Who is father of C Language ?\n\n");
            printf(" 1)Bjarne Stroustrup \n 2)  Dennis Ritchie\n 3) Dr. E.F. Codd\n 4)  James A. Gosling\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("Each question holds the value of 10 points\n");
            printf("Your score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }

            break;

        case 5:
            printf("________________________Q.no-1_______________________________\n");
            printf("Which of the following is correct about features of JavaScript?\n\n");
            printf(" 1) JavaScript is a lightweight, interpreted programming language\n 2) JavaScript is designed for creating network-centric applications.\n 3) JavaScript is complementary to and integrated with Java.\n 4) All of the above.\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-2_______________________________\n");
            printf("How can you get the total number of arguments passed to a function?\n\n");
            printf(" 1) Using args.length property\n 2) Using arguments.length property\n 3) Both of the above.\n 4)  None of the above.\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-3_______________________________\n");
            printf(" Which built-in method removes the last element from an array and returns that element?\n\n");
            printf(" 1) last() \n 2) get()\n 3) pop()\n 4) None of the above.\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-4_______________________________\n");
            printf(" Which built-in method returns the string representation of the number's value?\n\n");
            printf(" 1) toValue() \n 2)  toNumber()\n 3) toString() \n 4) None of the above.\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 3\n");
            }

            printf("________________________Q.no-5_______________________________\n");
            printf(" Which of the following function of Number object defines how many total digits to display of a number?\n\n");
            printf(" 1) toExponential()\n 2)  toFixed()\n 3)  toLocaleString()\n 4) toPrecision()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-6_______________________________\n");
            printf(" Which of the following function of String object returns the index within the calling String object of the first occurrence of the specified value? \n\n");
            printf(" 1) substr() \n 2) search()\n 3)  lastIndexOf() \n 4)  indexOf()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-7_______________________________\n");
            printf(" Which of the following function of String object creates an HTML anchor that is used as a hypertext target?\n\n");
            printf(" 1) anchor()\n 2) link()\n 3) blink()\n 4) big()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("________________________Q.no-8_______________________________\n");
            printf("Which of the following function of String object causes a string to be italic, as if it were in an <i> tag?\n\n");
            printf(" 1) fixed()\n 2) fontcolor()\n 3) fontsize()\n 4)  italics()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 4\n");
            }

            printf("________________________Q.no-9_______________________________\n");
            printf("Which of the following function of Array object joins all elements of an array into a string?\n\n");
            printf(" 1) concat() \n 2)  join()\n 3)  pop() \n 4)  map()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 2\n");
            }

            printf("________________________Q.no-10_______________________________\n");
            printf(" Which of the following function of Array object represents the source code of an object?\n\n");
            printf(" 1) toSource() \n 2) splice()\n 3)  toString()\n 4) unshift()\n");
            printf("Enter your answer : \n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("Correct answer\n");
                count++;
            }
            else
            {
                printf("Wrong answer\n");
                printf("Correct answer option is 1\n");
            }

            printf("Each question holds the value of 10 points\n");
            printf("Your score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        }
    end:
        printf("\n\n\t\t\nThank you for playing");
    }
    return 0;
}
