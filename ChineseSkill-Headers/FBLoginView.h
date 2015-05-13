/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIActionSheetDelegate.h"

@class UIButton, NSArray, FBRequestConnection, UILabel, NSString, FBSession, NSNumber;
@protocol FBGraphUser, FBLoginViewDelegate;

@interface FBLoginView : XXUnknownSuperclass <UIActionSheetDelegate> {
	BOOL _hasShownTooltipBubble;
	NSArray* _permissions;
	NSArray* _readPermissions;
	NSArray* _publishPermissions;
	int _defaultAudience;
	int _loginBehavior;
	unsigned _tooltipBehavior;
	unsigned _tooltipColorStyle;
	id<FBLoginViewDelegate> _delegate;
	UILabel* _label;
	UIButton* _button;
	FBSession* _session;
	FBRequestConnection* _request;
	id<FBGraphUser> _user;
	id _sessionStateHandler;
	id _requestHandler;
	NSNumber* _lastObservedStateWasOpen;
}
@property(retain, nonatomic) UIButton* button;
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) int defaultAudience;
@property(assign, nonatomic) id<FBLoginViewDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) BOOL hasShownTooltipBubble;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* label;
@property(copy) NSNumber* lastObservedStateWasOpen;
@property(assign, nonatomic) int loginBehavior;
@property(copy) NSArray* permissions;
@property(copy, nonatomic) NSArray* publishPermissions;
@property(copy, nonatomic) NSArray* readPermissions;
@property(retain, nonatomic) FBRequestConnection* request;
@property(copy, nonatomic) id requestHandler;
@property(retain, nonatomic) FBSession* session;
@property(copy, nonatomic) id sessionStateHandler;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) unsigned tooltipBehavior;
@property(assign, nonatomic) unsigned tooltipColorStyle;
@property(retain, nonatomic) id<FBGraphUser> user;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithPermissions:(id)permissions;
- (id)initWithPublishPermissions:(id)publishPermissions defaultAudience:(int)audience;
- (id)initWithReadPermissions:(id)readPermissions;
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
- (void)buttonPressed:(id)pressed;
- (void)configureViewForStateLoggedIn:(BOOL)anIn;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)fetchMeInfo;
- (void)handleActiveSessionSetNotifications:(id)notifications;
- (void)handleActiveSessionUnsetNotifications:(id)notifications;
- (void)informDelegate:(BOOL)delegate;
- (void)informDelegateOfError:(id)error;
- (void)initialize;
- (void)initializeBlocks;
- (CGSize)intrinsicContentSize;
- (id)logInText;
- (id)logOutText;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
- (void)showTooltipIfNeeded;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)unwireViewForSession;
- (void)wireViewForSession:(id)session userInfo:(id)info;
- (void)wireViewForSessionWithoutOpening:(id)sessionWithoutOpening;
@end

