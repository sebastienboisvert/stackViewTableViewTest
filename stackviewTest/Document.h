//
//  Document.h
//  stachviewTest
//
//  Created by Sebastien Boisvert on 2015-03-30.
//  Copyright (c) 2015 Sebastien Boisvert All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument

@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSButton	*checkbox;
@property (weak) IBOutlet NSTextField *label;
@property (weak) IBOutlet NSStackView *stack;
@property (weak) IBOutlet NSButton* button1;
@property (weak) IBOutlet NSButton* button2;
@property (weak) IBOutlet NSArrayController *array;
@end

