/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIMovingButton : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	NSString* _nodeName;
	int _nodeId;
	CGPoint _oriPoint;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign) int nodeId;
@property(retain, nonatomic) NSString* nodeName;
@property(assign) CGPoint oriPoint;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)dealloc;
@end

