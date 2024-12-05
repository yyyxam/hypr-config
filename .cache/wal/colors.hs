--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/mxy/wallpaper/macos-monterey-wwdc-21-stock-5k-3840x2160-5584.jpg"

-- Special
background="#180c4a"
foreground="#decfdd"
cursor="#decfdd"

-- Colors
color0="#180c4a"
color1="#C6649E"
color2="#C86FA3"
color3="#9928CF"
color4="#B444C2"
color5="#CC8EB4"
color6="#CA99C6"
color7="#decfdd"
color8="#9b909a"
color9="#C6649E"
color10="#C86FA3"
color11="#9928CF"
color12="#B444C2"
color13="#CC8EB4"
color14="#CA99C6"
color15="#decfdd"
