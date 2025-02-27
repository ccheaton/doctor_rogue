<?xml version="1.0" encoding="UTF-8"?>
<tileset name="fog" tilewidth="128" tileheight="128">
 <image source="newfog-hd.png" width="768" height="768"/>
 <terraintypes>
  <terrain name="clear" tile="-1"/>
  <terrain name="partial" tile="-1"/>
  <terrain name="black" tile="-1"/>
 </terraintypes>
 <tile id="0" terrain="1,1,1,0"/>
 <tile id="1" terrain="1,1,0,0"/>
 <tile id="2" terrain="1,1,0,1"/>
 <tile id="3" terrain="1,1,1,2"/>
 <tile id="4" terrain="1,1,2,2"/>
 <tile id="5" terrain="1,1,2,1"/>
 <tile id="6" terrain="1,0,1,0"/>
 <tile id="7" terrain="0,0,0,0"/>
 <tile id="8" terrain="0,1,0,1"/>
 <tile id="9" terrain="1,2,1,2"/>
 <tile id="10" terrain="2,2,2,2">
  <properties>
   <property name="terrain_type" value="fog_black"/>
  </properties>
 </tile>
 <tile id="11" terrain="2,1,2,1"/>
 <tile id="12" terrain="1,0,1,1"/>
 <tile id="13" terrain="0,0,1,1"/>
 <tile id="14" terrain="0,1,1,1"/>
 <tile id="15" terrain="1,2,1,1"/>
 <tile id="16" terrain="2,2,1,1"/>
 <tile id="17" terrain="2,1,1,1"/>
 <tile id="18" terrain="0,0,0,1"/>
 <tile id="19" terrain="0,0,1,1"/>
 <tile id="20" terrain="0,0,1,0"/>
 <tile id="21" terrain="2,2,2,1"/>
 <tile id="22" terrain="2,2,1,1"/>
 <tile id="23" terrain="2,2,1,2"/>
 <tile id="24" terrain="0,1,0,1"/>
 <tile id="25" terrain="1,1,1,1">
  <properties>
   <property name="terrain_type" value="fog_grey"/>
  </properties>
 </tile>
 <tile id="26" terrain="1,0,1,0"/>
 <tile id="27" terrain="2,1,2,1"/>
 <tile id="28" terrain="1,1,1,1">
  <properties>
   <property name="terrain_type" value="fog_grey"/>
  </properties>
 </tile>
 <tile id="29" terrain="1,2,1,2"/>
 <tile id="30" terrain="0,1,0,0"/>
 <tile id="31" terrain="1,1,0,0"/>
 <tile id="32" terrain="1,0,0,0"/>
 <tile id="33" terrain="2,1,2,2"/>
 <tile id="34" terrain="1,1,2,2"/>
 <tile id="35" terrain="1,2,2,2"/>
</tileset>
