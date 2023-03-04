
  ********************************************************
  *                                                      *
  *                Ext_Detector.dll                      *
  *                                                      *
  *           Non executable detector for :              *
  *                                                      * 
  *          Exeinfo Pe , XoR Data Uncrypter             *
  *                                                      *
  *                   ver.5.0.0                          *
  *                                                      *
  *               www.exeinfo.xn.pl                      *
  *                                                      *
  *               2018.07.30 by A.S.L                    *
  *                                                      *
  *                freeware version                      *
  *                                                      *
  ********************************************************



 Usage : Copy this file to Exeinfo PE directory or Windows System directory


 Detection list :


001. NOT EXE - .skf GUI skin file for developers - www.SkinCrafter.com
002. NOT EXE - .vpx Avast packed setup files www.avast.com
003. NOT EXE - .ICO Windows Vista icon PNG format - > ( new icon detector )
004. NOT EXE - .CRX - Google Chrome Extension
005. NOT EXE - .Tar - Tape ARchive ***
006. NOT EXE - .lz LZIP ( UNIX archive file - LZ77/78 like Lzma )
007. NOT EXE - .ppu  Free Pascal Unit file ( F.P.Compiler ) - www.freepascal.org
008. NOT EXE - .arj - ARJ compressed archive - www.arjsoftware.com    *ACM
009. NOT EXE - .wim - Windows Imaging Format ( LZX compression ) - http://en.wikipedia.org/wiki/Windows_Imaging_Format
010. NOT EXE - .NUP / LIC - NOD32 Antivirus Update file / License file - www.eset.com
011. NOT EXE - .LZH/LHA -  LHARC/LZARK compressed archive
012. NOT EXE - .CPIO -  CPIO ASCII archive / new portable / CRC format
013. NOT EXE - .IMG - Qemu qcow disk image [ Ver.01/02 ]
014. NOT EXE - .DSK - Generic PC disk image (FDD-HDD/NTFS crypt on/off info) - www.Qemu.com
015. NOT EXE - .VHD - Virtual Hard Disk image - ( Fixed size )  MS Virtual PC file format
016. NOT EXE - .VHD - Virtual Hard Disk image - ( Dynamically Expanding Size ) MS Virtual PC file format
017. NOT EXE - .yz1 archive - Deep Freezer compressed archive - by Yamazaki ZIPPER
017. NOT EXE - .yz1 archive [ passworded ]- Deep Freezer compressed archive - by Yamazaki ZIPPER

018. NOT EXE - .jbc - Jetico BestCrypt encrypted drive ( *Virtual Disk ) - www.jetico.com
019. NOT EXE - .uif Universal Image Format [ MODE: *** Compr. ] MagicISO file ( without password* )
020. NOT EXE - .icns Apple Icons Mac OS X resource file www.apple.com
021. NOT EXE - .ROM ( ROFS Symbian FirmWare file )
022. NOT EXE - .asz Skin file for Delphi AlphaControls 2010 v7.67 www.alphaskins.com
023. NOT EXE - .pak ( founded in Game files level0x.pak  *Mumbo Jumbo )
024. NOT EXE - .aswcs Avast! antivirus skin
025. NOT EXE - .MTS - AVCHD video clips - MPEG Transport Stream
026. NOT EXE - .CPI - AVCHD Clip Information
027. NOT EXE - .MPL - AVCHD Video Playlist
028. NOT EXE - .DAA - PowerISO Direct-Access-Archive image [ Mode : Normal / password : Yes ] - www.poweriso.com
029. NOT EXE - .mp4/f4v HTTP Streaming Video f4f - ( part of movie - not playable ) [ I. MetaData first * ]
030. NOT EXE - .xar eXtensible ARchiver Archive  - http://code.google.com/p/xar - Mac OS X / Unix
031. NOT EXE - .IMG  * Disk Image / Partition - Generic Detector for UNIX / GPS / other systems
032. NOT EXE - .HFS  HFS+/HFSX (Hierarchical File System) volume - MAC Os / OS X (iPod) Volume
033. NOT EXE - .DER - DER encoded X509 Certificate ( ex. from exe file - if Digital Signed )
034. NOT EXE - .BH BlackHole compressed archive - www.ziptv.com
035. NOT EXE - .GCD/GMA - Garmin GPS generic file detector - www.garmin.com
036. NOT EXE - .??? / *Garmin GPS generic file detector ( .TRF / .JCV / .TYP ) - www.garmin.com
037. NOT EXE - .GCD - data file for : Software key wrapper 2.0. GiveawayOfTheDay.com
038. NOT EXE - .GEA Archive - from ovl Gentee Installers - www.createinstall.com
039. NOT EXE - .TDB - used by Mapsource & Basecamp - www.garmin.com
040. NOT EXE - .o MinGW/FPC object files ***
041. NOT EXE - .skn VCLSkin - www.link-rank.com ( not free Delphi VCL ! ) *** 90% detector
042. NOT EXE - .dcu - Delphi 2010 compiled Unit - Borland Delphi 2010 - www.borland.com - www.embarcadero.com
043. NOT EXE - .dcu - Delphi 2011 compiled Unit - Delphi XE - www.borland.com - www.embarcadero.com
044. NOT EXE - .obj 32bit - OMF Relocatable Object Module Format
045. NOT EXE - .obj 64bit - *** Relocatable Object Module Format *
046. NOT EXE - .ice - ICE compressed archive- www.iceows.com [ :-( Free Compressor - NO GUI ]
047. NOT EXE - .ice - Freeze! Compressed Archive (Reeve Soft) by Alan Reeve - obsolete 1991 ***
048. NOT EXE - .uha UHARC Archive last ver.0.6a Beta - FREE (c) 1997-2005 by Uwe Herklotz
049. NOT EXE - .apk ( AP32 header ) aPLib compression library  www.ibsensoftware.com
050. NOT EXE - .aplib / (.apk without header AP32 ) M8Z - I detect only Exe file packed with aPlib compression lib.- www.ibsensoftware.com
051. NOT EXE - .TLB  Type Library (Type1)
052. NOT EXE - .ddd - GLBasic 3D data - www.glbasic.com ( GCC )
053. NOT EXE - .dcu - Delphi v7 compiled Unit - Borland Delphi 7 - www.borland.com - www.embarcadero.com
054. NOT EXE - .dcu - Delphi 2009 compiled Unit - Borland Delphi 2009 - www.borland.com - www.embarcadero.com
055. NOT EXE - .dcu - Delphi 2011 XE2 compiled Unit - Borland Delphi 2011 - www.borland.com - www.embarcadero.com
056. NOT EXE - .DER - DER encoded X509 Certificate ( *for small bytes sign detector - example from exe file )
057. NOT EXE - .ARC - FreeArc compressed archive
058. NOT EXE - .pkg -  Sun Solaris SVR4 package data stream  *UNIX Package
059. NOT EXE - .mkv/.mka - Matroska Video/Audio stream - www.matroska.org 
     NOT EXE - .WebM - ( VP8/VP9 *Matroska VIDEO Stream  ) - http://www.webmproject.org
 
060. NOT EXE - .dcu 32bit - Delphi 2012 XE3 compiled Unit - Borland Delphi 2012 - www.embarcadero.com
061. NOT EXE - .dcu 64bit - Delphi 2012 XE3 compiled Unit - www.borland.com - www.embarcadero.com
062. NOT EXE - .dcu [ Mac OS X 32bit ] - Delphi 2012 XE3 compiled Unit - www.borland.com - www.embarcadero.com
063. NOT EXE - .AC3 Dolby Digital audio
064. NOT EXE - .dcu - Delphi v9 compiled Unit - Borland Delphi 2005 - www.borland.com - www.embarcadero.com
065. NOT EXE - .dcu - Delphi v6 compiled Unit - www.borland.com - www.embarcadero.com
066. NOT EXE - .JDBG - Embedded JCL debug info - www.delphi-jedi.org
067. NOT EXE - .dat Game files - ex. Mumbo Jumbo / 7 Wonders
068. NOT EXE - .PSD Adobe Photoshop image  - www.adobe.com
069. NOT EXE - .3DS - ( 3D Studio Mesh ) - 3D file format - Autodesk Inc.  Autodesk 3ds Max 3D modeling
070. NOT EXE - .skp  SketchUp 3D model
071. NOT EXE - .aqt - AQtime projects - SmartBear Software (2012) - profiler file - www.SmartBear.com
072. NOT EXE - .rsm / .dsm -  Remote debug symbols / Delphi Symbol Module file
073. NOT EXE - .GE - Gentee compiled source file - Freeware open source compiler - www.gentee.com
074. NOT EXE - .vct - Installer VISE Mindvision Wizard Module v3 - project file - www.mindvision.com
075. NOT EXE - .inx - InstallShield 2012 setup compiled script file  www.installshield.com - Flexera Software
076. NOT EXE - .kdc - Kaspersky Anti-Virus signature base - www.kaspersky.com
077. NOT EXE - .avz/.pva* - AVZ Antiviral Toolkit data - www.z-oleg.com/secur/avz  ( RUS )
078. NOT EXE - .xpt - XPCOM Type Library generated by the XPIDL compiler  (ver.info)
079. NOT EXE - HIV/DAT - Windows NT Registry on-disk storage format ( ver.info / type ) 
080. NOT EXE - .otf - OpenType CFF compact font format
081. NOT EXE - .bpi - Borland Package Import - www.borland.com
082. NOT EXE - .ib - InterBase Database by Borland/Embarcadero
083. NOT EXE - .prj6 - Visual Prolog 7 project file - TXT UTF-16 (LE) encoded
084. NOT EXE - .jxr/.wdp JPEG XR picture ( TIFF container ) - Better then jpg format
085. NOT EXE - (.WOFF) Web Open Font Format - http://www.w3.org/TR/WOFF
086. NOT EXE - .dds DirectX DirectDraw Surface
087. NOT EXE - .sdb    Windows Shim Database (v2/3) - Application Compatibility Database
088. NOT EXE - .LIB Library file - OMF ( .obj files inside )
089. NOT EXE - .Lzma Archive ( LZMA:24 ) by Igor Pavlov
090. NOT EXE - .pdn Paint.NET picture format (v3)
091. NOT EXE - .dar Disk Archive Denis Corbin - v2.4.10 2013.03.09 (Bzip2/GZ/store) - http://dar.linux.free.fr
092. NOT EXE - .b1 Archive ( free , nice GUI ) - www.b1.org    *ACM
093. NOT EXE - .sqx Archive - www.sqx-archiver.org
094. NOT EXE - .apl - APLIBTC - aPlib Archive - inside .apk ( AP32 header ) aPLib compression library  www.ibsensoftware.com
095. NOT EXE - .msg - Inno Setup Installer Messages file - www.innosetup.com
096. NOT EXE - .DAT - Inno Setup Uninstall Log - www.innosetup.com
097. NOT EXE - .GCA - [ passworded and not ] G Compression Archiver v.0.9k ! 2001 by Shin-ichi TSURUTA- www.emit.jp/gca/gca.html
098. NOT EXE - .bza - BGA Archive ( Mode : BZA )
099. NOT EXE - .Gza - BGA Archive ( Mode : GZA )
100. NOT EXE - .PYO  Python optimized code - www.python.org ( .PYC generic bytecode )
101. NOT Win exe - (.) MenuetOS 32-bit x86 application - www.menuetos.net
102. NOT Win exe - (.) MenuetOS 64-bit x86 application - www.menuetos.net
103. NOT EXE - .vdd - Visual Basic 5-6 decompiler  data base - DotFix Software - www.vb-decompiler.org
104. NOT EXE - .isz - zipped packed .iso file 
105. NOT EXE - .DWG - AutoCAD drawing file v2.20 - 2014 - www.autodesk.com ( ver.detector )
106. NOT EXE - .csf  Secure CSF (Content Sealed Format) ***AutoCAD vector picture .DWG
107. NOT EXE - .DFM/IFM - text file - Delphi Compiler Form [ objects description - size/color/font ] - text format 
108  NOT EXE - .dcu - Delphi 2013 XE4 compiled Unit - Borland Delphi 2013 - www.embarcadero.com
109. NOT EXE - .FLP / .Fst -  FL Studio v11 - Audio and sound file Image Line Software - www.image-line.com 
110. NOT EXE - .IFX  IcoFX file ( icons / cursors )
111. NOT EXE - .dcu - Delphi 2013 XE5 * compiled Unit - Borland Delphi 2013 - www.embarcadero.com
112. NOT EXE - .cab - ver.x - InstallShield v.xx compressed Archive - www.installshield.com - 
112a NOT EXE - .hdr - ver.? - InstallShield v?? HDR file - www.installshield.com - www.flexerasoftware.com

113. NOT EXE - .FRM VisualBasic Form ( ver.5.0 ) - www.microsoft.com
114. NOT EXE -  .obj Visual Basic / Pelles C *** - or Asm generic header
115. NOT EXE - .pak - Game data file ( XORed F7 byte ) -  /Alchemy/Yumster/...
116. NOT EXE - .pak  ( PAK V11 Game Data - not packed , ex. Puzkend / Dragon Portal / ... )
117. NOT EXE - .DAT - Futuremark Corporation 2011-2013 crypted data file  ( PCMark7 / 3DMark05 )
118. NOT EXE - .txt / .asc - text file with --- PGP KEY BLOCK ---  http://en.wikipedia.org/wiki/Pretty_Good_Privacy
119. NOT EXE - .SFS/SQUASHFS/SB* - SquashSF image file (little endian) - is a compressed file system for Linux.
120. NOT EXE - .img - RKFW - ROM Image  Flash Boot Data file ( for Android - Tablet devices )
121. NOT EXE - .hgr - KA3D is a scene graph based 3D-engine with a tool-chain for 3dsmax  (7 and newer) . *www.ka3d.com  / ***Rovio
122. NOT EXE - .pvr - Texture format - compatible with TexturePacker v3
123. NOT EXE - .ccz ( packed .pvr texture format with .Zlib ) 
124. NOT EXE - .PVR - PowerVR Texture format - www.imgtec.com
125. NOT EXE - .odex - Android system - optimized Dalvik executable file, like an .exe in Windows. 
126. NOT EXE - .e4a Mahmoud Elsisy Encrypted Archive v1.0 - Encrypt4all Home Ed.v.5.4.1.299 - www.encrypt4all.com
127. NOT EXE - .lic - EXE Shield v5 -  License file - www.exeshield.com
128. NOT EXE - .xsh - project file for EXE Shield 5 - www.exeshield.com
129. NOT EXE - .pl - Perl script  - www.perl.org
130. NOT EXE - .rce - Encrypted file - Right-Click Encrypter - www.starfortsoftware.com
131. NOT EXE - .MOBI/PRC Mobipocket - PRC Palm e-Book / .AZW - Amazon Kindle eBook
132. NOT EXE - .rb language ( Ruby on Rails ) framework open source - www.rubyinstaller.org - 50% detector
133. NOT EXE - .zpaq ( v4.0-6.42 ) Archive (C) 2013, Dell Inc. Written by Matt Mahoney. Compiled Mar 26 2012
134. NOT EXE - .paq8 [o/f/h/l/n detector ] archiver (C) 2006, Matt Mahoney et al
135. NOT EXE - .tiz archive - InstallMate - Installer v.9.x www.tarma.com
136. NOT EXE - .SH  Linux/UNIX shell script
137. NOT EXE - .bash  Linux/UNIX shell script
138. NOT EXE - .paq8kx / .paq8px - archiver (C) 2008, Matt Mahoney et al
139. NOT EXE - .svp - project file - SCREEN2EXE/SWF Player v3.0 Stepok Image Lab. - www.screen-record.com
140. NOT EXE - .dpk - for Delphi compiler package source file (txt) / Pascal file - www.embarcadero.com
141. NOT EXE - .bluej - Java compiler BlueJ v3.1. package file - www.bluej.org
142. NOT EXE - .ctxt - Java compiler BlueJ v3.1. class context file - www.bluej.org
143. NOT EXE - .DCM -  DICOM medical imaging bitmap ( Rezonans/Tomograf )
144. NOT EXE - .EnPack - Packages for EnScript program ***www.guidancesoftware.com
145. NOT EXE - .case file for EnCase programm by Guidance Software  ***www.guidancesoftware.com
146. NOT EXE - .xcf GIMP image file www.gimp.org
147. NOT EXE - .key H-BEDV - AVIRA product key
148. NOT EXE - .key Kaspersky Antivirus license file - SN : xxxxxxxxxxxxxx
149. NOT EXE - .lzo Archive - lzop v1.03 Lempel-Ziv-Oberhumer Packer Nov 1st 2010  [ 1..9 ]
150. NOT EXE - .avastlic - Antivirus AVAST Software License File ( txt ) www.avast.com
151. NOT EXE - .xar Xara drawing - www.xara.com  / www.xaraxtreme.org
152. NOT EXE - .js - jQuery JavaScript library is a fast, small, and feature rich JS library
153. NOT EXE - .fzip Foxit Software add-ons for Foxit Reader PDF view - www.foxitsoftware.com ( unp.info )
154. NOT EXE - .x3d Xara 3D animation graphics  - www.xara.com
155. NOT EXE - .sit - Cypherix encrypted file v7.x - v10.00 - www.cypherix.com
156. NOT EXE - .rebel ( NET structure file for rebuild exe ) - Rebel.NET 2009 Daniel Pistelli
157. NOT EXE - .iso .dmg .hfs .apm - CD Image
158. NOT EXE - .cso  Compressed ISO Disk Image  ***Sony PSP
159. NOT EXE - .PBP Sony Playstation ( PSP ) Bootable file "EBOOT.PBP"
160. NOT EXE - .vgm (Video Game Music) is an audio format - for multiple video game platforms : Sega 
161. NOT EXE - .xdelta Compressed data  ( *often used for patch files ) http://xdelta.org
162. NOT EXE - .jasper  RJavacCompiler - Java serialized data - JasperReports tool Free Java Reporting Library
163. NOT EXE - .dcu - Delphi 2014 XE6 - compiled Unit - Borland Delphi 2014 - www.embarcadero.com    *ACM
164. NOT EXE - .vsf - Vsual Style v2.0 for Delphi XE? - www.embarcadero.com
165. NOT EXE - .LZXC MSCompressed data ( LZ77 - used in : .cab , .chm , .lit  files )
166. NOT EXE - .lit  Microsoft Reader eBook  ( used LZXC MSCompressed data )
167. NOT EXE - .dcu - Delphi 2011 XE2 ( 64 bit ) compiled Unit  - www.embarcadero.com
168. NOT EXE - .gmo  Gettext ( GNU Machine Object ) file - www.gnu.org/software/gettext/gettext.html
169. NOT EXE - (.) Mac OS X Binary-format PList - property list format
170. NOT EXE - .xml TrID definition - signature text xml file
171. NOT EXE - (.) Java serialized data object v.? new  ( ver. from file )
172. NOT EXE - .pf Windows prefetch file - System Windows : XP / 7 / 8 / ???
173. NOT EXE - .rbp / .xojo_binary_project  - REALbasic Binary File Project  - www.xojo.com *www.realsoftware.com
174. NOT EXE - .DS_Store - Mac OS X folder information
175. NOT EXE - .idb IDA Dissassembler database - www.hex-rays.com ( DATA : Zlib compression )
176. NOT EXE - .dsk -  IBM SKF disk image
177. NOT EXE - .xx_ - FTCOMP by IBM compressed file
178. NOT EXE - .z UNIX Compressed file - packer : compress
179. NOT EXE - .A - ar File Format (Big) IBM AIX
180. NOT EXE - .A - ar File Format (Small - aiaff ) IBM AIX
181. NOT EXE - .pcf (portable compiled format) bitmap font files for X11 Server
182. NOT EXE - .PS  Adobe PostScript language file - www.adobe.com
183. NOT EXE - (.) ksh  UNIX shellscript language file  ( ksh-Korn Shell )
184. NOT EXE - .sqz Squeeze compressed archive ( SQZ -- Squeeze It(1.08.4) - *obsolete tool - 1993 year )
185. NOT EXE - (.) squish compressed ( SQUISH version 1.0 - Copyright (c) 1992 Mike Albert ) *obsolete DOS
186. NOT EXE - .sqz Sqwez v2.3 multi-file compression package - JM Software (c) 1995 *obsolete
187. NOT EXE - .nz  NanoZip v0.0x - www.nanozip.net
188. NOT EXE - .zz  ZZIP v0.36c (04-Jun-2001) Copyright (c)2001 Damien Debin www.debin.net/zzip *obsolete
189. NOT EXE - .lz4 compressed file - LZ4 for Windows 32-bits v1.4, by Yann Collet (Sep 17 2013)                                   http://fastcompression.blogspot.fr/p/lz4.html
190. NOT EXE - .BMF  v1.x - 2.x  bitmap lossless image compressor 2009 by Dmitry Shkarin
191. NOT EXE - .pae PowerArchiver 201x Strong Encrypted file ( encrypted zip/7zip/... )
192. NOT EXE - .pkg  BeOS installation package - www.bebits.com
193. NOT EXE - .pack  Java class packed file ( .JAR file - Java ARchive ) - pack200
194. NOT EXE - .fbapx  Protected Action Package ( Final Builder Action Studio v6.x - 7.0 ) - www.finalbuilder.com
195. NOT EXE - .nx1/.nx2 NexusDB database - NexusDB Pty Ltd - www.nexusdb.com
196. NOT EXE - .torrent ( Bittorrent link for download file ) BitTorrent is a protocol for distributing files
197. NOT EXE - .pack ( ETW,NTW,some S2TW )  -  ETW - Empire Total War and related games like Napoleon Total War
198. NOT EXE - .esf  - Total War campaign settings file
199. NOT EXE - .fla  audio file - FLAC ( Free Lossless Audio )
200. NOT EXE - .SFO  Sony Playstation ( PARAM.SFO - System File Object file ) - www.playstation.com
201. NOT EXE - .rbo / .*xojo_obj  - REALbasic Object File  - www.xojo.com *www.realsoftware.com
202. NOT EXE - .bom   Bill Of Materials (Apple Mac OS X v10.9 Bill of materials files)
203. NOT EXE - .hqx   BinHex encoded  ( Mac OS X )
204. NOT EXE - .design  Microsoft Expression Design v4 (2012 ver 8.0 file)
205. NOT EXE - (.)  vfs journal file (NEW Header) - Apple.com
206. NOT EXE - .apple_partition_map [***STATUS:] Apple.com Partition Map (APM) 
207. NOT EXE - .nib  Interface Builder User Interface File Apple Xcode - (binary) Apple.com
208. NOT EXE - .sig  Panda Signature file system (c) Panda Security - www.pandasecurity.com (xor)
209. NOT EXE - .dmg  Apple disk Image ( MODE : ADC compression ) ***
210. NOT EXE - .swp  Vim txt Editor v7.x - tmp file  ( Apple / Windows ) - https://code.google.com/p/macvim
211. Not Win exe - .nlm  Novell NetWare Loadable Module (NLM)
212. NOT EXE - .APE  Monkey's Audio MAC (Monkey's Audio Compression) *Mac OS use - www.monkeysaudio.com
213. NOT EXE - .par2  MultiPar v1.x - PARv2 data file  - http://hp.vector.co.jp/authors/VA021385
214. NOT EXE - .ECM - (Error Code Modeler) compression preprocessor (c) 2002-2011 Neill Corlett 
215. NOT EXE - .lvl   Game level txt script file
216. NOT EXE - .CDF-MS  ClickOnce Compiled Manifest  - http://msdn.microsoft.com/en-us/library/t71a733d.aspx
217. NOT EXE - .nls  Windows Code Page National Language Support file
218. NOT EXE - .PBM/PGM/PNM/PPM  Portable BitMap Package - UNIX  http://netpbm.sourceforge.net/doc
219. NOT EXE - .xpm (XPM3) X PixMap is an image file format used by the X Window System
220. NOT EXE - .js crypted/obfuscated/packed - java script ( generic detector )
221. NOT EXE - .pspimage / .psp... - Corel Paint Shop Pro *picture - www.corel.com
222. NOT EXE - (.) Linux kernel boot image
223. NOT EXE - .txt : GNU GENERAL PUBLIC LICENSE  v1.0/2.x/3.0 readme file
224. NOT EXE - .xmp  Adobe Extensible Metadata Platform (XMP) - www.adobe.com/products/xmp.html
225. NOT EXE - .img  Linux Boot disk image file - x86 platform
226. NOT EXE - .img/cmg - Cramfs ROM filesystem package - http://sourceforge.net/projects/cramfs
227. NOT EXE - .nfi  Dreambox Disc Image ( Firmware data file ) - www.dream-multimedia-tv.de
228. NOT EXE - .bin  Sega Mega Drive / Genesis - BOOT ROM
229. NOT EXE - .bin  Sony PlayStation 2 (PS2) - ROM Bios
230. NOT EXE - .sdi System Deployment Image - RAMDISK Boot Image - MS Window Server ...
231. NOT EXE - .wmt  WinMount Virtual Disk File - www.winmount.com  ( std/passworded ) 
232. NOT EXE - .mou  WinMount Archive - Virtual Disk File - www.winmount.com
233. NOT EXE - .mds  Media Descriptor  ( disk image files index for .mdf file ) 
234. NOT EXE - .bin  InnoSetup -  Inner Fuse Pascal Script (IFPS) language binary file - www.innosetup.com
235. NOT EXE - .svm  (Project: Component) - XenoCode Virtual Application Studio 2009 - 2012
236. NOT EXE - .she - Skin file for ( Delphi , C++ ,VBasic ,.NET ) www.skinsharp.com - CHN Lang.
237. NOT EXE - .ilk  - Microsoft Incremental Linker data
238. NOT EXE - (.) Java serialized data object - old (all types) - v1.0-5.0
239. NOT EXE - .ppm  Compressed file by Dmitry Shkarin
240. NOT EXE - .names - Hiew.exe data file ( asm user comments , ... ) - www.hiew.ru (c) SEN
241. NOT EXE - .svf  Smartversion 3.0 Archive - www.smartversion.com  ( 2013.09.23 ) Gilles Vollant Software
242. NOT EXE - .cvd  ClaimAV 0.98 Antivirus database - www.clamav.net ( Open source tool )
243. NOT EXE - .sgn  VIPRE antivir packed database from : www.vipreantivirus.com
244. NOT EXE - .a3x  AutoIt compiled script ( BINARY DATA ) - www.autoitscript.com/autoit3
245. NOT EXE - .wixlib  WIX libraries ( *dll files inside ) - Outercurve Foundation 
246. NOT EXE - .pak  XERO CODER(R) compiler v.4.x.0.0 [ grid file ] - http://xerocoder.com
247. NOT EXE - .pro XERO project v2.0 - 4.x - XERO CODER(R) compiler - http://xerocoder.com
248. NOT EXE - .js/css - jQuery Mobile JavaScript library is a fast, small, JS library - http://jquerymobile.com
249. NOT EXE - .00  ESET Smart Security - Antispam txt files ( Crypted XOR 2C ) www.eset.com
250. NOT EXE - .std  (CSCM) *VIPRE definitions database - www.vipreantivirus.com/vipre-internet...
251. NOT EXE - .udb  VBA32 Antivirus data base file by VBA Ltd., Minsk, Belarus. - http://anti-virus.by/en
252. NOT EXE - .assetsbundle  - Unity Engine v4.x.x file  (game engine) - http://unity3d.com
253. NOT EXE - .js java script - Packed with Dean Edwards Packer v1.0
254. NOT EXE - .mgc   Unix/Linux magic compiled data
255. NOT EXE - .rk WinRK File Archive v3.1.2  www.msoftware.co.nz ( 2008.09.09 )
256. NOT EXE - .lzpx ( exe compressed )  v1.5b (c) 2005 ilia muraviev  ( 2005.11.16 )
257. NOT EXE - .zhf Zhuff 32-bits v0.xx [ v0.8 - 0.99 ] compressed file , by Yann Collet ( 2011-2014 )
258. NOT EXE - .zhf Zhuff 32-bits v0.xx [ v0.2 - 0.7 ] compressed file , by Yann Collet ( 2011-2014 )
259. NOT EXE - .apk ( AP32 crypted ) - PASSWORDED Archive - aPLib compression library  
260. NOT EXE - .img  Android boot image ( Header : ANDROID )
261. NOT EXE - .img  Android boot image ( Header : NO ! )
262. NOT EXE - .DTS audio - DTS (Digital Theater Systems) - audio file 
263. NOT EXE - .bin ( Exe PE file compressed with LZNT1 algorithm - RtlGetCompressionWorkSpaceSize
264. NOT EXE - .edc  Kryptel v6.0 -7.0 file - *AES ZIP/BZIP Deflation protected data - www.kryptel.com
265. NOT EXE - .sk   Parcel file - Silver Key v1.0 data AES crypted (2014.08.08) - www.kryptel.com
266. NOT EXE - .jad  Java Application Descriptor  ( txt file ) - http://java.sun.com
267. NOT EXE - .MF   Java Manifest ( txt file ) - http://java.sun.com
268. NOT EXE - .keystore/.jks   Java KeyStore is a repository of security certificates  www.oracle.com
269. NOT EXE - (.) - Document Security Solution (NASCA)  *www.sds.samsung.com/popup/solution/epoint.jsp
270. NOT EXE - (.)  Antivirus 360 Security file [AVXS] - www.360safe.com - Qihu 360 Software
271. NOT EXE - (.dat)  Antivirus 360 Security file [D063] - www.360safe.com - Qihu 360 Software
272. NOT EXE - .ntx  yEnc32 v1.0 encoded file - www.yenc32.com / www.yenc.org
273. NOT EXE - .enc  ENhanced Compressor Archive v0.15 (Feb 14 2003) by Enchanter
274. NOT EXE - .lex  ( lexicon data file ) software Sisulizer Localization Tool v1.x - v4.x - www.sisulizer.com
275. NOT EXE - .exe-ovl  Overlay data madCollection installer ( Exe XOR-ed 9A ... )
276. NOT EXE - .XNB  XNA Framework Content Pipeline Binary msdn.microsoft.com/../library/../XNAGameStudio.aspx
277. NOT EXE - .mp4/wmv/...  - Haihaisoft DRM-X 3.0 Desktop Packager (2014.12.12)  movie/pdf/epub - www.drm-x.com
278. NOT EXE - .epub eBook - Haihaisoft DRM-X 3.0 Desktop Packager   movie/pdf/epub - www.drm-x.com
279. NOT EXE - .mpc  ( Audio ) Musepack or MPC (formerly known as MPEGplus, MPEG+ or MP+) - www.musepack.net
280. NOT EXE - .assets  - Unity Engine v3-5.x.x file  (game engine) - http://unity3d.com
281. NOT EXE - .exe-ovl  7z-InstallAware Setup ( txt+overlay data )  www.installaware.com  - .7z Archive
282. NOT EXE - .asx   Microsoft ASF Stream Redirector File  ( txt xml file )
283. NOT EXE - .exe-ovl Installer data - Setup Factory 6.0 - 7.0  Indigo Rose Corporation 
284. NOT EXE - .mpq  Blizzard Mo'PaQ Archive - Blizzard game data ( levels,gfx,audio )
285. NOT EXE - .pack  game data file - Alawar.com  *The Fog - Mg-a , Twisted Lands: Insomniac
286. NOT EXE - .pak   game data file - Alawar.com - *Dead city *Twilight City Pursuit of Humanity
287. NOT EXE - .dg2/dg3  Koingo Software Data Guardian database ( PASSWORDED OR NOT )
288. NOT EXE - .vdi  VirtualBox Disk Image - www.virtualbox.org
289. NOT EXE - .emf  Windows Enhanced Metafile - vector graphics format  http://fileinfo.com/extension/emf
290. NOT EXE - .wmf  Windows Metafile ( vector/raster graphics )  http://fileinfo.com/extension/wmf
291. NOT EXE - .cap/.pcap  network Packet Capture File ( TCPDUMP's style capture )
292. NOT EXE - .dmo  Merid Stream - Game data file by Meridian'93 ***
293. NOT EXE - .enc  PowTools v2.1 2009 - www.file-encryption.net
294. NOT EXE - .drc  Dr.Crypt 1.0.3 - www.yildiztakimi.com  http://sourceforge.net/projects/drcrypt
295. NOT EXE - .sig  Emsisoft Antimalware signature file - www.emsisoft.com
296. NOT EXE - .xmd/rv0-9/cvd  Emsisoft Antimalware (BitDefender) file - www.emsisoft.com [.zlib only]
297. NOT EXE - .bin  IDR/IDD Knowledge Base File - http://kpnc.org/idr32/en/download.htm ( ver:old )
298. NOT EXE - .nup  ESET v7.0 - v10.0  ESET-MODULE - (c) 1994-2016 ESET software
299. NOT EXE - .exe-ovl  Overlay data - InstallShield 2014-15 ( v21.00-22.00 ) Flexera Software www.installshield.com
300. NOT EXE - .qtif/qif  QuickTime Image File  - http://fileformats.archiveteam.org/wiki/QTIF
301. NOT EXE - .bin  Inno Setup installer data (dsk32) file - www.innosetup.com
302. NOT EXE - .dwr  SoftMaker Office data file  - www.softmaker.com
303. NOT EXE - .pct QuickTime picture  www.apple.com [ Type : png /jpg/raw ]
304. NOT EXE - .bik  Bink Video movie - www.radgametools.com/bnkdown.htm
305. NOT EXE - (.) Enigma VBOX v.7.30 package  - www.enigmaprotector.com
306. NOT EXE - .czip  ZipGenius 6 encrypted compressed archive - www.zipgenius.it
307. NOT EXE - .x  Microsoft Direct3D Object [ ???? ] - DirectX Model File
308. NOT EXE - .db  Deviare Database - *www.nektra.com
309. NOT EXE - .bundle   Game Data Bundle File ( EA , *CD PROJEKT )
310. NOT EXE - .w3speech  *Game Sound bank file  (CPSW) *Wiedzmin
311. NOT EXE - .w3strings  *Game text bank file  (RTSW)  *Wiedzmin
312. NOT EXE - .tga/jpg  [ type ] - FBN Game file  - inside picture jpg/targa
313. NOT EXE - .bin  Pro Evolution Soccer 201x data file ( .zlib only* ) - (c) Konami Digital
314. NOT EXE - .adx  Sega Dreamcast audio  - www.dreamcast.com
315. NOT EXE - .js Java script - by NFQ - http://www.nfq.lt
316. NOT EXE - .exe-ovl  EA Install v1.35 - 2014 - www.eainstall.com - installer data
317. NOT EXE - .tmd/tmv  SoftMaker Office document file [ v.xx ] - www.softmaker.com
318. NOT EXE - (.)  PA30  Binary Delta Compression (BDC) Technology to Update Windows Operating Systems
319. NOT EXE - .keb/.dat  Kaspersky Anti-Virus Bases File ( SQZ KAV format ! ) - www.kaspersky.com
320. NOT EXE - .xdi  WinArchiver Extended Disc Image - www.winarchiver.com
321. NOT EXE - .mzp (MZP) WinArchiver v3.9 Mountable Archive - www.winarchiver.com  (not DOS exe file!)
322. NOT EXE - .CER  Internet Security Certificate or other  ( Generic detector !!! )
323. NOT EXE - .js/css  Bootstrap v3.x - http://getbootstrap.com
324. NOT EXE - .js  CryptoJS v3.1.x  http://code.google.com/p/crypto-js
325. NOT EXE - .aif  AIFF Audio Interchange File Format - [ Compressed/Storage ]
326. NOT EXE - .m2v  mpg II Raw video only

327. NOT EXE - .NOT EXE - .gob  Game data file  - www.magnussoft.de  ***www.gamehouse.com
328. NOT EXE - .bca  BCArchive v2.x ( 2015 ) - www.jetico.com
329. NOT EXE - .base64 encoded ( Exe PE file inside )
330. NOT EXE - .xar  ***XLGameBox - Thunder Corporation - copyright (C) Thunder Corporation
331. NOT EXE - .dcu - Delphi 2014 XE7 * compiled Unit - Borland Delphi 2014 - www.embarcadero.com
332. NOT EXE - .dcu - Delphi 2015 XE8 * compiled Unit - Borland Delphi 2015 - www.embarcadero.com
333. NOT EXE - .dfm  Embarcadero Delphi XE* / C++ [ objects description - size/color/font ] - binary Form format
334. NOT EXE - .exe-ovl , Installer data - MSI Factory v2.x data - 2015 - www.indigorose.com
335. NOT EXE - .msifact , Installer MSI Factory v2.x project xml data - www.indigorose.com
336. NOT EXE - .EPS  Adobe Encapsulated PostScript - DOS Binary Header   ( Vector Image File )
337. NOT EXE - (./res/imp/lib)  PureLibrary - PureBasic v5.x 2015  Fantaisie Software - www.purebasic.com
338. NOT EXE - .AEF  CA Visual Object Application Export File - www.cavo.com
339. NOT EXE - .MEF  CA Visual Object Module Export File - www.cavo.com
340. NOT EXE - .exe-ovl , overlay from : Pelles Installer v7.0  - www.smorgasbordet.com
341. NOT EXE - .ena  Altap Salamander [Pack/encrypt (plugin) v1.1  ENCRYPT.SPL ] 2015 - www.altap.cz
342. NOT EXE - .o MinGW/FPC v3.0 object files - Free Pascal Compiler
343. NOT EXE - .kz KuaiZip 2.x - www.kuaizip.com/en
344. NOT EXE - .ALZ  ALZip 8.0 archive  ESTsoft Corp. - www.altools.com ( pass/no pass )
345. NOT EXE - .EGG  ALZip 8.0 Format A New Compression Format - ESTsoft Corp. - www.altools.com
346. NOT EXE - .rbs - Microsoft Windows Installer Rollback Script
347. NOT EXE - .edb  Extensible Storage Engine (ESE, EDB, ESEDB), also known as JET Blue
348. NOT EXE - .pyc/pyo  Python Compiled File - www.python.org
349. NOT EXE - .pae2 PowerArchiver 201x Strong Encrypted file ( encrypted zip/7zip/... )
350. NOT EXE - .lng/exe-ovl WinRAR SFX Messages file - www.rarlabs.com
351. NOT EXE - .vmdk  - Virtual Machine Disk File  ( v4 monolitic disk ) - www.vmware.com
352. NOT EXE - .voice  Audio WAV data/s for AutoMapa.pl
353. NOT EXE - .a Map data for Navigation - AutoMapa.pl
354. NOT EXE - .eot  Embedded OpenType font by Microsoft ( IE 6-8 )
355. NOT EXE - .nsi  NSIS script  Nullsoft Install System v2.x-3.x  http://nsis.sourceforge.net
356. NOT EXE - .rdb Oracle Database object-relational database management system
357. NOT EXE - .cr2  RAW File from Canon digital camera  -  ( picture TIFF II format Header )
358. NOT EXE - .orf  Olympus digital camera RAW image (little-endian)
359. NOT EXE - .nef  Nikon camera RAW image (little-endian) ( picture TIFF II format )
360. NOT EXE - .nef  Nikon camera RAW image ( picture TIFF MM format )
361. NOT EXE - .arw  Sony camera RAW image  ( picture TIFF II format - little-endian )
362. NOT EXE - .WebP  image format for the Web  uses VP8 key frame encoding
363. NOT EXE - .cdr  CorelDraw Drawing or vector image file - www.corel.com ( not zipped version only )
364. NOT EXE - .pdb  Demo Builder v.xx file - Tanida Software - www.demo-builder.com
365. NOT EXE - .p3d  Panda3D game engine file - www.panda3d.org  (c) Carnegie Mellon University 2010-2016
366. NOT EXE - .vdb  Dr.Web Anti-Virus Database - www.drweb.com
367. NOT EXE - .apm  AutoPlay Menu Builder v7.1 - 8.0 data file by Linasoft 2016 - www.linasoft.com
368. NOT EXE - .exe-ovl  XenoCode Virtual App. Studio - Spoon Studio / Turbo Studio - http://turbo.net/studio
369. NOT EXE - .snk Strong Name Key File - Software key file created by Strong Name Tool (Sn.exe)
370. NOT EXE - .nvram  Virtual machine (VM) data file used by VMware virtualization software
371. NOT EXE - .icc/.icm  ICC profile / Indipendent Color Matching profile  [ profile type info ! ]
372. NOT EXE - .dcu - Delphi 2016 XE10 Seattle - compiled Unit - www.embarcadero.com
373. NOT EXE - .dcu - Delphi 2016 XE10.1 Berlin - compiled Unit - www.embarcadero.com
374. NOT EXE - .b64  Base64 encoded file data ( MIME header via T.Commander detector )
375. NOT EXE - .xwb  XACT Wave Bank by Microsoft
376. NOT EXE - .cav  Comodo Virus Definitions File - www.comodo.com
377. NOT EXE - .xsl  XML Style Sheet  v1.0 - text file
378. NOT EXE - .FBX Autodesk - Kaydara FBX 3D format (Binary) - autodesk.com
379. NOT EXE - .cpk  CRI Middleware Package  Game package file used by games 
380. NOT EXE - .eid  Easy Compression Library setup file for Delphi / C++ Builder - www.componentace.com
381. NOT EXE - .ecl  ECL Archiver - Easy Compression Library  - www.componentace.com
382. NOT EXE - (.)/.EHFS  ECL HugeFile Compression  Easy Compr.Libr. - www.componentace.com
383. NOT EXE - .tpkg  Game data package ( .zlib inside ) - www.alawar.com / www.buka.ru / ...
384. NOT EXE - .win  Game Maker data file  - www.yoyogames.com
385. NOT EXE - .cso   Microsoft DirectX Compiled HLSL Shader (bytecode) Object ( 3D image file type )
386. NOT EXE - .mxe  Macro Express Pro v4.x  playable macro file - www.macros.com  ( only Pro !)
387. NOT EXE - (.)  UTF-32LE  Unicode header
388. NOT EXE - (.)  UTF-32BE  Unicode header
389. NOT EXE - .tds  RAD Studio TDS debug file
390. NOT EXE - .env  Windows Event Viewer Log file
391. NOT EXE - .obj - OMF Relocatable Object Module Format ( CodeGear C++ ) - www.embarcadero.com
392. NOT EXE - .pch  RAD Studio C++ precompiled header file  - www.embarcadero.com
393. NOT EXE - .ilc  RAD Studio C++ linker State file - [ Code file ]
394. NOT EXE - .ild  RAD Studio C++ linker State file - [ Data file ]
395. NOT EXE - .vps  avast! Virus Definition File v.4 - v.x  - www.avast.com
396. NOT EXE - .gmk  Game Maker data - www.yoyogames.com/gamemaker
397. NOT EXE - .bin/rom  - BIOS ROM Extension (IA-32) Intel - http://en.wikipedia.org/wiki/Option_ROM
398. NOT EXE - .bin/rom  - BIOS ROM Extension ( AMD non UEFI - bin or .lzh format )
399. NOT EXE - .bin/rom  - (.) Image file - Marvell Raid ROM
400. NOT EXE - .zip Archive ( crypted with XOR ED byte ! ) - *Hamrick.com use this
401. NOT EXE - .ex4/ex5 MetaTrader v4/5 compiled lang. binary file - www.metaquotes.net
402. NOT EXE - .qp qpress archive ( using QuickLZ 1.4.1 ) -  www.quicklz.com
403. NOT EXE - .NQF  ESET Quarantine data file (PE32) - www.eset.com
404. NOT EXE - .NDF  (EQDF) ESET description file from Quarantine Dir. - www.eset.com
405. NOT EXE - .aip***   All-in-One-Protector v7.x ( *2016.11.18 ) - crypted file - www.AllInOne-Protector.com
406. NOT EXE - .mpvideo  All-in-One-Protector v7.x ( 2016.11.18 ) - crypted video - www.AllInOne-Protector.com
407. NOT EXE - .UCE  Microsoft Windows UniCode Extensions
408. NOT EXE - .JSONLZ4  Compressed Firefox Bookmarks Backup File - www.mozilla.com
409. NOT EXE - .vp   Intel GFX Accelerator driver package file for Windows
410. NOT EXE - .bin/rom/F1x  - NVIDIA VGA BIOS ROM Extension (IA-32)
411. NOT EXE - (.)/.bin  Version Info from EXE Resources
412. NOT EXE - .pfx/p12/p7c/p7s  *Personal Information Exchange Syntax Standard  -
                http://en.wikipedia.org/wiki/PKCS_12
413. NOT EXE - .avb  Digital Patrol 5 by NictaTech Software Antivirus database file - www.nictasoft.com
414. NOT EXE - .arc  ( used Delphi Tcompress component v6-11 by SPIS/Webcentre Ltd. )
415. NOT EXE - .nm2   GPS Navitel map  v3.1 - www.navitel.ru
416. NOT EXE - .nm3-7 GPS Navitel map  v5.1-9.0 - www.navitel.ru
417. NOT EXE - .cda  CD Audio track shortcut ( RIFF container )
418. NOT EXE - .dem  GPS - iGO Digital Elevation Map  - www.navngo.com
419. NOT EXE - .FSB  FMOD Sample Bank File ( ver. FSB2-5 ) - www.fmod.org ( Audio/Sound files )
420. NOT EXE - .pak Sygic GPS map/voices - www.sygic.com
421. NOT EXE - .fbl/fjw/fpa/fda/fsp -  iGo map file  - www.igonavigation.com
422. NOT EXE - .poi [ Points of Interest ]  iGo map file ( Binary file ) -  iGo map file 
423. NOT EXE - .3dc/3dl [ Building ]  iGo map file ( Binary file ) -  iGo map file
424. NOT EXE - .bmp (v5) Windows Bitmap ( picture ) - www.en.wikipedia.org/wiki/BMP_file_format
425. NOT EXE - .amv/mtv  MTV movie  (***AVI) - 2007yr obsolete format
426. NOT EXE - .pri  MS Package Resource Index  - [mrm_...]
427. NOT EXE - .p7x  Packed Digital Signature File by MS Visual Studio
428. NOT EXE - .gz ( GZIP Archive with "BLAH" header ) , founded on : vadsharedvoiceagents
429. NOT EXE - .xbf  XAML Binary file Format - used for creating Rich Internet Applications
430. NOT EXE - .lxa  Microsoft Speech Lexicon File - Microsoft Speech API (SAPI) 5.4
431. NOT EXE - .wcx/wxcf  - WX Compress File 2.0 - packed file ( exe/dll/...) - www.wxsda.com
432. NOT EXE - .avr  Avira AntiVir message ( compressed data ) - www.avira.com
433. NOT EXE - .vdf  Avira AntiVir Virus Database - www.avira.com
434. NOT EXE - .dat  WTM Copy Protection v2.65 2017 ( *BoxedAppPacker SDK file ) - www.webtoolmaster.com 
435. NOT EXE - .asz ( commercial Skin file ) for Delphi AlphaControls - www.alphaskins.com
436. NOT EXE - .sbi  SetupBuilder project v10 - Lindersoft 2017 - www.lindersoft.com
437. NOT EXE - .swf Flash  ZWS format ( LZMA pack )
438. NOT EXE - .js crypted/obfuscated/packed ( Type II ) - java script ( generic detector )
439. NOT EXE - .enc  1-abc.net File EncrypteR v8 2015 - crypted file - www.1-abc.net
440. NOT EXE - .jsa   JRun Server Application
441. NOT EXE - .sdf  Microsoft SQL SDF CE ver.2.0-4.0 ( Compact Edition Database files )
442. NOT EXE - .sdf  Microsoft SQL SDF CE ver.4.0 - Compact Edition Database - v4.0 det.only )
443. NOT EXE - .Bin2hex - .EXE file converted to HEX data ( text file )
444. NOT EXE - .uue/xxe  Binary file converted to txt with TCommander
445. NOT EXE - (.)  Chromium WebView cache file ( or Opera Browser/Yandex browser/...) 
446. NOT EXE - (.)  Chromium WebView cache index file ( or Opera Browser/Dragon/Yandexbrowser) 
447. NOT EXE - .obj  x64 Fortran for Windows - FTN95/Win32 (C) 1993-2017 Silverfrost
448. NOT EXE - .DU8  ( dat file with Error lng ) - Electronic Control Unit (ECU)
449. NOT EXE - .evtx  Binary Windows XML Event Log ( Vista / Windows 7 )
450. NOT EXE - .etl  Microsoft Event Trace Log File  -  www.microsoft.com
451. NOT EXE - .odl  Binary log file from OneDrive ( SyncEngine created ) 
452. NOT EXE - .lrz  Long Range Zip compressed - http://github.com/ckolivas/lrzip  ( linux archive )
453. NOT EXE - .db Windows 7/10 Explorer cache file - www.microsoft.com
454. NOT EXE - .obj  32bit NASM version 2.x - www.nasm.us
455. NOT EXE - .bin  ( .xml file xor-ed FF byte ) used by NVidia 
456. NOT EXE - .bin Firefox v5x Mozilla cache file - www.mozilla.com
457. NOT EXE - .pfe  Definition file for Amiti Antivirus v24-xx  - www.netgate.sk
458. NOT EXE - .SZ - Snzip compressed ( framing2 format ) - http://github.com/kubo/snzip
459. NOT EXE - .SZ - Snzip compressed ( framing format )  - http://github.com/kubo/snzip
460. NOT EXE - .SNAPPY  Snzip compressed (comment-43 format) - http://github.com/kubo/snzip
461. NOT EXE - .SNZ Snzip compressed (snzip format) - http://github.com/kubo/snzip
462. NOT EXE - .gem  ThunderSoft GEMPlayer v1.0 data - ThunderSoft Video Password Protect ( movie / jpg )
463. NOT EXE - .ins  InstallShield Script - InstallShield 201x Flexera Software www.installshield.com

464. NOT EXE - .inv  Sphinx inventory of Objects.inv - http://sphinx-objectsinv-encoderdecoder.readthedocs.io/en/latest/index.html
465. NOT EXE - .encrypted  - Cyber Crypto 8.0 ( crypted file ) 2017.02 - www.christosberetas.com
466. NOT EXE - .dcu - Delphi 2016 XE 10.2 Tokyo - compiled Unit - www.embarcadero.com
467. NOT EXE - .dcu - Delphi 2016 XE (x64) 10.2 Tokyo - compiled Unit - www.embarcadero.com
468. NOT EXE - .dtb  Linux Device Tree Blob - Device Tree Compiler (dtc)
469. NOT EXE - .cobra   The Cobra Programming Language source file ( .NET 4.0+ / Mono 2.10+ )
470. NOT EXE - .mdb  .NET Mono  *Debug Program DataBase 
471. NOT EXE - .Asar  Asar Archive - http://github.com/electron/asar
472. NOT EXE - .encm   encrypted video data, - HEVC (High Efficiency Video Coding)
473. NOT EXE - .mfl  Mozilla XUL FastLoad File - www.mozilla.org
474. NOT EXE - .msd  Samsung Update TV Firmware file ( MSDU10 / MSDU11 detector *2017.12 )
475. NOT EXE - .cmd/bat  - Windows batch file ( via @echo off detect )
476. NOT EXE - .NOT EXE - .yaml, .yml  (YAML Ain't Markup Language) is a human-readable data seri.lang.
477. NOT EXE - .js  jQuery Knob - http://github.com/aterrien/jQuery-Knob
478. NOT EXE - .croco  Crypted Archive file v1.6  - www.frankhissen.de/crococryptfile.html
479. NOT EXE - .lf  ESET Internet Security v11 license file - www.eset.com
480. NOT EXE - .dat/res/icu/brk  ICU Dat Package  IBM Corp. / 2016 and later: Unicode, Inc.
481. NOT EXE - (.)  Antivirus F-Secure / 360 Security file [AVXS] ( not compressed ) - www.f-secure.com
482. NOT EXE - .gem  McAfee AV Pattern update ( newer engine 2017 ) - www.mcafee.com
483. NOT EXE - .dat  McAfee AV scan dat file - www.mcafee.com
484. NOT EXE - .dat  McAfee AV AMCONTENT epo V3 file - www.mcafee.com
485. NOT EXE - .mdi Microsoft Document Imaging File ( print )
486. NOT EXE - .JNG (JPEG Network Graphics) is an image file format
487. NOT EXE - .abox  ABox - File Packer Archive - v1.9.0.0 2016.04 - www.mcrenox.com.ar
488. NOT Win DLL - .dll  OS/2 System DLL library - no MZ-LX Header data
489. NOT EXE - .woff2  Web Open Font Format 2 - ( LZ77 Brotli compr. ) font format for use in web pages
490. NOT EXE - .aac   format ( audio - mp2 codec detector only , mp4 codec detect exeinfo )
491. NOT EXE - .ivf  Indeo Video File - VP8/VP9 ( codec developed by Intel in 1992 - *obsolete )
492. NOT EXE - .json  JavaScript Object Notation - JSON format is used for browser/server communication
     NOT EXE - .json  Firefox bookmark - JavaScript Object Notation - JSON format for browser/server
493. NOT EXE - .ssk  Skin data - Sunisoft Skin Solutions v2 Delphi/C++  www.sunisoft.com/skinlib
494. NOT EXE - .hpp C++ Program Header - CodeGear C++Builder - 1995, 2014 by Embarcadero - [ txt - ascii ]
495. NOT EXE - (.) Frostbite Chunks game data format
496. NOT EXE - .js  JavaScript created with : webpack  - http://github.com/webpack  http://webpack.js.org
497. NOT EXE - .BGL Babilon dictionary file ( .gz ) - www.babylon.com
498. NOT EXE - .DB  Antivirus database - Net Protector - www.indiaAntivirus.com
499. NOT EXE - .skinres  dxSkin VLC skin data for Delphi Embarcadero
500. NOT EXE - .til  IDA Debugger Type Information List - www.hex-rays.com










			***	( c ) - A.S.L  2018  ***



