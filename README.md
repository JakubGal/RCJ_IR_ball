
# RCJ_IR_ball
Opensource IR ball for robocup junior soccer

This project is still work in progress!!!

# TODO list:
1. Make a version of the drive board for self-assembly
2. Update switch to smd version for assembly
3. Change weight from current 89g to 95g with strengthening week parts of shelves
4. Make a panel version of all PCBs for kit
5. Create proper code with gyro auto turn-off feature
6. Check the avalibility of all components around the world
7. Test version with homemade PCBs
8. Make some ready-to-send kits for testing with 'early adopters'


# Quick guide on how to create your ball

## Stuff you nead
1. Every ball consists of 3 main parts:
2. Top and bottom shells
3. PCBs
4. Mechanical parts

![1676059455433](https://user-images.githubusercontent.com/44644846/218199909-0faff625-584b-4579-9111-4d693d9fabec.jpg)

## 1. Top and botom shells
To get your shells you can 3d print them yourself or ask a friend who has SLA 3d printer or order it from pcbway or another manufacturer with a 3d printing service. Here are some resins and manufacturers I tried if you found some other please open the issue and let us know so we can add it to a list.

|   | Resin name                | Were to buy | Cost per ball | Strenght | Transparenci | Photo |
|---|---------------------------|-------------|---------------|----------|--------------|-------|
| 1 |  Phrozen Aqva Resin Clear |[3djake](https://www.3djake.sk/liqcreate-resin-pre-sla-dlp-3d-tlaciarne/clear-impact) | 4,8 EUR| LOW  | MEDIUM|![1676486634181](https://user-images.githubusercontent.com/44644846/219143458-03654cfd-a070-467f-90a6-ac246d412b55.jpg)|
| 2 |  Liqcreate Clear Impact   |[3djake](https://www.3djake.sk/liqcreate-resin-pre-sla-dlp-3d-tlaciarne/clear-impact)| 12,8 EUR| HIGH | MEDIUM| ![1676486634167](https://user-images.githubusercontent.com/44644846/219146075-49f26888-d29b-4188-b5ad-833d9f88e560.jpg)|
| 3 | UTR-8100                  |PCBWAY               |13,83 EUR|MEDIUM             | LOW      |![1676486634201](https://user-images.githubusercontent.com/44644846/219143408-931c6f02-c58d-4770-90bf-7980de1b1e98.jpg)
| 4 | UTR-8100(transparent)     |PCBWAY               |36,8 EUR|MEDIUM              |HIGH       |![1676486634195](https://user-images.githubusercontent.com/44644846/219143177-77d9bcea-a94a-4dd6-bad2-3f4332c3b2a3.jpg)

## 2. PCBs
For PCBs, we have two main variants. One is cheaper and easier to make at home with just one switch, and the other with gyro, buzzer and ws2812b that can switch off itself when it will not move for 3 minutes. So you have 3 main options for how to get your PCBs:
1. Get them almost fully assembled by JLCPCB or PCBWAY (need to solder LEDs)
2. Get just PCBs and buy components from digikey/mouser/lcsc or other manufacturers and solder it all yourself (can choose simpler wersion of PCB so need for hot air station)
3. Make them and cut them all by yourself at home (need to order components) using photolithography or another process. TODO does detail guide on how to do that

### Components and where to get them
https://docs.google.com/spreadsheets/d/1AJk5qBYIz7-Oj68zrsEcClqDoz_VDrp_WEVsXvldfIE/edit#gid=0
(all componets are realy easy to get and they are in stock in at least 4 eshops)
TODO put in in table here
## 3. Mechanical parts
This is easiest part. You just need to buy folowing ithems from your local hardawe store or from internet(few sugested websides listed)
1. 2x M3 screw
2. 2x M3 nut
3. 8x brass/coperr standoff M3 10mm
TODO be more specifick and prowide links to websides were to get them


# Ball testing
When you make your ball now is the time to test if it actualy works. Here are few ways how to do that:

## Test quality of IR light
1. Use IR seeker (easy test with lego mindstor)
2. Use TSOP
3. Make your own ir seeker (link to repo how to meke your own ir seeker)
4. Use smartphone(not proof of working, just good assumption)

## Test mechanical integrity
1. dorop it form 1m and if it survives it is ok

## Test power consumption
1. Use ampere meter
2. Check if it have sam ir intensity for 3h (use new bateries)

Reference testing data:
https://drive.google.com/drive/folders/1isDrJiC3cLQZJ-q2lvDSGFadgaxJweIT?usp=share_link

TODO provide exact step by step how to test it with each metod

# How it works
![rcj_modulation](https://user-images.githubusercontent.com/44644846/219173109-26b2e452-877c-40da-9c19-ad2d4f615f99.png)
TODO
Ball neads to emits ir light on wawelengt of 940nm in this modulated way:

to save energy a ...TODO
And drive PCB work like this.... TODO


![ball](https://user-images.githubusercontent.com/44644846/218197888-c3d92154-a12a-4497-98c9-b9f257484591.png)


