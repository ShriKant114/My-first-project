// This code is made by ShriKant as project 2
#include <iostream>
using namespace std;

std::string sto, pap, sess, name, ok, yes;
int n;
class ston
{

public:
  void data()
  {
    cout << "\t   STONE PAPER SCISSORS GAME\n"
         << endl;
    cout << "Enter your Name_player: ";
    cin >> name;
  }
  void start()
  {

    cout << "\npress 1 FOR STONE 🪨💎\n"
         << endl;
    cout << "press 2 FOR PAPER 📜📝\n"
         << endl;
    cout << "press 3 FOR SCISSORS ✂️💇" << endl
         << endl;
    cout << "write 'ok' to start game: ";
  }

  void confirmation()
  {

    cin >> ok;

    if (ok == "ok")
    {

      cout << "\n"
           << name << " your choice(1,2,3): ";
      turn();
    }

    else
    {

      cout << "Please Write correct Ok: \a\n"
           << endl;
      confirmation();
    }
  }
  void turn()
  {

    cin >> n;

    switch (n)
    {
    case 1:
      n = 1;
      cout << "\n"
           << name << " you choose 🪨💎" << endl;
      cout << "\nComputer: PAPER 📜📝\n" << endl;
      break;

    case 2:
      n = 2;
      cout << "\n"
           << name << " you choose 📜📝" << endl;
      cout << "\nComputer: SCISSORS ✂️💇\n"<< endl;
      break;

    case 3:
      n = 3;
      cout << "\n"
           << name << " you choose ✂️💇 " << endl;
      cout << "\nComputer: STONE 🪨💎\n"<< endl;
      break;

    default:

      cout << "\nInvalid choice\n\a" << endl;
      cout << "Again choose number: " << endl;
      turn();

      break;
    }

    cout << "You loss the game 🎯 \n\a" << endl;
    cout << "Better luck your next time 👍👍\n\n"<< endl;
  }

  void playagain()
  {

    cout << "If you play again then write ✍️ yes: ";
    cin >> yes;

    if (yes == "yes")
    {
      void start();
      void confirmation();
    }
  }
};
int main()
{

  ston access;
  access.data();

  do
  {

    access.start();
    access.confirmation();
    access.playagain();

  }

  while (yes == "yes");

  return 0;
}
