#!/usr/bin/env ruby
puts ARGV[0].scan(/^[0-9]{10}$/).join
# another answer:
# puts ARGV[0].scan(/\d{10}$/).join
