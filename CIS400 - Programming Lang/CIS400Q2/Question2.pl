
print "Enter a string: ";
my $testStr = readline STDIN;
my $subString = ('YES', 'YEs' , 'Yes' , 'YeS', 'yEs', 'yES' , 'yeS', 'yeS', 'yes');
my $subString2 = 'the';


if($testStr =~/^-?\d+$/){
		my @char = split ('',$testStr);
	if($char[0] %2 == 1 && $char[1]%2 == 0){
		print "an odd digit followed by an even digit\n";
	}
}
 	if($testStr =~/^[A-Z]/){
	print "a word that starts with an upper case letter\n";
	}

	if($testStr =~/[a-z]/ || $testStr=~ /^[A-Z]/){
		my@char = split('', $testStr);
		if($char[1] =~/\W/ && $char[2] =~ /^-?\d+$/){
			print "Letter followd by non-Letter followed by number\n";
		}
	}
	if($testStr =~ /\Q$subString\E/){
	print "Found the word 'yes' in the string\n";
	}
	if($testStr =~ /\Q$subString2\E/){
	print "The word 'the' appeared one or more time\n";
	}
	if($testStr =~/^(\d{1,2})\.(\d{1,2})\.(\d{1,2})$/){
	print "The string is a date\n";
	}
	if($testStr =~ s/[[:punct:]]//g){
	print "Punctuation Mark found";
	}
