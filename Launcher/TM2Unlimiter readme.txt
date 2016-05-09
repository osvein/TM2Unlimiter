TM2Unlimiter by arc_

Intro
-----
This little tool will patch TrackMania 2 Canyon in-memory, removing most block
placement limitations in its track editor. More specifically it allows you to:
* Place overlapping blocks
* Enlarge the track area size, up to a maximum of 255x255 (see further below)

Installation
------------
Simply extract the archive to your ManiaPlanet directory (where ManiaPlanet.exe
resides) and start TM2Unlimiter.exe. It will launch the game, patch it in-memory
(it doesn't touch any files on the harddisk), and quit, leaving the patched game
running.

To uninstall, simply remove the files again. TM2Unlimiter does not create, alter
or delete any files, and does not write anything to the registry.

Oversize tracks
---------------
TM2Unlimiter allows you to customize the track area size and enlarge it up to
255x255 units (up from the default 32x32). To do this, you simply edit
TM2Unlimiter.ini and enter the desired size in the format x,y,z (x = width,
y = height, z = depth). This custom size will then be applied to any new tracks
you create. After you have created and saved your track, you can revert the size
setting to the default - the size of your track will stay stored in the .gbx.

IMPORTANT: for *playing* tracks that are larger than usual, you *also* need
TM2Unlimiter. Even though the track size is stored in the .gbx, TrackMania
overrides this information with the default track size (32x32). Therefore,
if you enlarge your track and place blocks outside of the default area,
TrackMania would not load these blocks or just crash. TM2Unlimiter disables
this overriding behaviour so that the track size stored in the .gbx is retained,
both for editing and playing the track.

For regular blockmixing (e.g. placing overlapping blocks) however, you only need
to run TM2Unlimiter while creating the map; playing can be done without it.

Custom block variants
---------------------
Most blocks in TrackMania have several variants. They look different when placed
on the ground or in the air, and apart from that there can be different variations
as well (for example, the road block can look like a straight, a corner, or a
street crossing).

Normally, these variants are picked automatically by TrackMania. However,
TM2Unlimiter adds two new buttons at the bottom of the screen in the editor GUI
with which you can control the block variant that gets placed.

* The button on the left switches between Auto, Gnd (Ground) and Air when clicked.
  It controls whether the ground or air version of blocks is placed: automatic
  choice (like TrackMania without TM2Unlimiter), always the ground version (even
  when the block is placed in the air), or always the air version (even when the
  block is placed on the ground).

* The button on the right switches between Auto and a set of numbers when clicked.
  It controls which variant of the block is placed. This button is mainly useful
  for controlling roads: it allows you to place the different types of road blocks
  at will. For example, you can place a cornerpiece that's not connected to anything,
  which is impossible with the regular unmodded editor.

Placing manually specified variants of blocks is completely safe: they will show
up without problems for people who play or edit the map without TM2Unlimiter.

Disclaimer
----------
I am not responsible for any damage this program might cause to your computer,
or for lost work because of a crash. Use this program at your own risk.

Updates
-------
More information and updates can be found at the official forum thread:
  http://forum.mania-creative.com/thread-2983.html
