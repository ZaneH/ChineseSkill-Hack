/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FBRequestConnectionRetryManagerAlertViewHelper : XXUnknownSuperclass <UIAlertViewDelegate> {
	id _callback;
}
@property(copy, nonatomic) id callback;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
- (void)dealloc;
- (void)show:(id)show message:(id)message cancelButtonTitle:(id)title handler:(id)handler;
@end
