use warnings;
use strict;

print "Enter IP address\n";
my $testIP = readline STDIN;

if($testIP=~/^(\d{1,3})\.(\d{1,3})\.(\d{1,3})\.(\d{1,3})$/ &&
(($1<=255  && $2<=255 && $3<=255  &&$4<=255 )))
{
print "IP address is valid.\n";
}
else{
	print "IP address is not valid.\n";
 }
