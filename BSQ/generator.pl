# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    generator.pl                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ******** <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/25 13:19:52 by ********          #+#    #+#              #
#    Updated: 2026/08/25 13:20:50 by ********         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "Usage: program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
