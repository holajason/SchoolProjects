use strict;
use warnings;

use filehandle;
use feature 'say';
my $regex = qr/[A-Z0-9._%+-]+\@[A-Z0-9.-]+\.[A-Z]{2,4}/i;
my $found = 0;
my $email_file   = "output.txt";
print ("Enter file\n");

my $emailFile = readline STDIN;
open my $contact, $emailFile or die("File not Found\n");
open my $outPutEmail, ">", $email_file;
while (<$contact>) {    # read from the $contact filehandle
   while (/($regex)/g) { # the /g is optional if there is max one address per line
       $found++;
       say{$outPutEmail}$.,': ', $1;
   }
}
