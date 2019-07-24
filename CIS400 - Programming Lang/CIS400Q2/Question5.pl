use strict;
use warnings;

my %counts = ();
#print "Enter a series of digits: \n";
#my $input = readline STDIN;
my $input = (1762982020);
my @value = (split//, $input);

for (@value){
    $counts{$_}++;
}

foreach my $keys (sort keys %counts) {
    print "$keys $counts{$keys}\n";
}
