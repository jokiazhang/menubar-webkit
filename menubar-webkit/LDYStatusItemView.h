//
//  LDYStatusItemView.h
//  menubar-webkit
//
//  Created by Xhacker Liu on 5/1/14.
//  Copyright (c) 2014 Xhacker. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface LDYStatusItemView : NSButton

@property (nonatomic, weak) NSStatusItem *statusItem;
@property (nonatomic) BOOL highlighted;

@end