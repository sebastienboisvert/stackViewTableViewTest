# stackViewTableViewTest
Demo program to try to debug a NSStackView in a NSTableView

The app has two windows: one with a single stackview only (which has the desired behaviour), and the other with a tableview that contains similar stackviews. Currently, both stackviews are configured exactly the same in IB. My goal is to have the stackviews in the tableview behave the same as the one in the single window.

You’ll see that in the single stackview window the stack will compress the label, and drop the button views as needed; I’ve tried achieving the same behaviour in the tableview version, but the best I ever got was compression (no dropping) of all the views, which isn’t what I want (currently the configuration clips the views as the tableview width shrinks).

Ideally I want the right label to compress and not clip, then the buttons to drop, before the left label starts truncating. The checkbox at left should never drop 
