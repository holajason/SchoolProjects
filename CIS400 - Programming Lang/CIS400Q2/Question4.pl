use warnings;
use strict;

use FileHandle;
#print "Enter a numerical String: \n";
my $sum = 0;
#my $input = readline STDIN;
my $input = (176298);
my @value =(split//,$input);
foreach my $val(@value){
    # print "$val";
    $sum +=$val;
}
print "The sume is $sum\n";
