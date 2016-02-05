//
//  TimelineEventsListItem.h
//  TogglDesktop
//
//  Created by Indrek Vändrik on 05/02/16.
//  Copyright © 2016 Alari. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TimelineChunkView.h"

@interface TimelineEventsListItem : NSTableCellView
- (void)render:(TimelineChunkView *)view_item;
- (void)tester;
@end