<?php
// print BOM character (EIGE-42, EIGEDR-498)
echo "\xEF\xBB\xBF"; // UTF-8 BOM
// Print out header row, if option was selected.
if ($options['header']) {
  print implode($separator, $header) . "\r\n";
}
