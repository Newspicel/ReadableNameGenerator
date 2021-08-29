<?php
$starts = array("a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u");

$speakable = array(
    "a" => array("b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u"),
    "b" => array("a", "e", "i", "l", "o", "r", "u"),
    "c" => array("h"),
    "d" => array("a", "e", "i", "l", "o", "r", "u"),
    "e" => array("f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u"),
    "f" => array("a", "e", "i", "l", "o", "r", "u"),
    "g" => array("a", "e", "i", "l", "o", "u"),
    "i" => array("a", "e", "i", "o", "u"),
    "j" => array("b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t"),
    "k" => array("a", "e", "i", "o", "u"),
    "l" => array("a", "e", "i", "l", "o", "u"),
    "m" => array("a", "e", "i", "o", "u"),
    "n" => array("a", "e", "i", "l", "o", "u"),
    "o" => array("b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t"),
    "p" => array("a", "e", "i", "l", "o", "r", "u"),
    "r" => array("a", "e", "i", "o", "u"),
    "s" => array("a", "e", "c", "i", "o", "u", "t"),
    "t" => array("a", "e", "i", "o", "u"),
    "u" => array("b", "g", "i", "k", "n", "m", "p", "r", "s", "t")
);

$minLength = 5;
$maxLength = 10;

public function generate()
{
    $length = rand($minLength, $maxLength);
    $char = $starts[rand(0, count($starts) - 1)];
    $word = $char;
    while (strlen($word) < $length) {
        $char = $speakable[$char][rand(0, count($speakable[$char]) - 1)];
        $word .= $char;
    }
    return $word;
}
