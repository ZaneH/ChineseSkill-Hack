/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MBProgressHUDDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, MBProgressHUD;

__attribute__((visibility("hidden")))
@interface HUDAlertWithMessage : XXUnknownSuperclass <MBProgressHUDDelegate> {
	MBProgressHUD* m_alert;
	UIView* m_parentView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MBProgressHUD* m_alert;
@property(retain, nonatomic) UIView* m_parentView;
@property(readonly, assign) Class superclass;
+ (id)sharedOperator;
- (id)init;
- (void).cxx_destruct;
- (void)HUDTask;
- (void)ShowAlertInView:(id)view Message:(id)message Type:(int)type;
- (void)hudWasHidden:(id)hidden;
@end

