//
//  ChatItemTableCellView.h
//  ACE
//
//  Created by Norayr Harutyunyan on 10/22/15.
//  Copyright © 2015 Home. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LinphoneManager.h"

@interface ChatItemTableCellView : NSTableCellView

@property (weak) IBOutlet NSImageView *imageViewUserPicture;

- (void)setChatMessage:(LinphoneChatMessage *)message;
+ (CGFloat)height:(LinphoneChatMessage*)chatMessage width:(int)width;

@end
