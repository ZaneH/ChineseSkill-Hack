/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "ToggleViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol CSSwitchViewDelegate;

__attribute__((visibility("hidden")))
@interface CSSwitchView : XXUnknownSuperclass <ToggleViewDelegate> {
	id<CSSwitchViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) __weak id<CSSwitchViewDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)customSwitchBeClosedWithTag:(int)tag;
- (void)customSwitchBeOpenedWithTag:(int)tag;
- (void)selectLeftButton;
- (void)selectRightButton;
- (void)setupSwitchWithTag:(int)tag status:(int)status;
@end

