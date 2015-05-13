/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIAlertViewDelegate <NSObject>
@optional
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
- (void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
- (void)alertViewCancel:(id)cancel;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;
- (void)didPresentAlertView:(id)view;
- (void)willPresentAlertView:(id)view;
@end

