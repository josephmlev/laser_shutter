# THIS FILE IS AUTOMATICALLY GENERATED
# Project: E:\JP Shutter Driver\shutter_controller.cydsn\shutter_controller.cyprj
# Date: Thu, 19 Dec 2019 22:50:33 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {HS_Clock} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list [get_pins {ClockBlock/udb_div_1}]]
create_generated_clock -name {microsecond_clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 25 49} [list [get_pins {ClockBlock/udb_div_2}]]
create_generated_clock -name {microsecond_clock} -source [get_pins {ClockBlock/hfclk}] -edges {1 25 49} [list [get_pins {ClockBlock/udb_div_3}]]


# Component constraints for E:\JP Shutter Driver\shutter_controller.cydsn\TopDesign\TopDesign.cysch
# Project: E:\JP Shutter Driver\shutter_controller.cydsn\shutter_controller.cyprj
# Date: Thu, 19 Dec 2019 22:50:26 GMT
