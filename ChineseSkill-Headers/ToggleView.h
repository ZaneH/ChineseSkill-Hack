/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class ToggleBase, UIButton, NSString, UIView, ToggleButton;
@protocol ToggleViewDelegate;

__attribute__((visibility("hidden")))
@interface ToggleView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	id<ToggleViewDelegate> _toggleDelegate;
	float _leftEdge;
	float _rightEdge;
	ToggleButton* _toggleButton;
	UIView* _baseView;
	UIButton* _leftButton;
	UIButton* _rightButton;
	id<ToggleViewDelegate> toggleDelegate;
	int viewType;
	int _selectedButton;
	ToggleBase* _toggleBase;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int selectedButton;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) int tag;
@property(retain, nonatomic) ToggleBase* toggleBase;
@property(assign, nonatomic) id<ToggleViewDelegate> toggleDelegate;
@property(assign, nonatomic) int viewType;
- (id)initWithFrame:(CGRect)frame toggleViewType:(int)type toggleBaseType:(int)type3 toggleButtonType:(int)type4 tag:(int)tag;
- (void).cxx_destruct;
- (void)handleBaseTapGesture:(id)gesture;
- (void)handleButtonTapGesture:(id)gesture;
- (void)handlePanGesture:(id)gesture;
- (void)onLeftButton:(id)button;
- (void)onRightButton:(id)button;
- (void)setToggleBaseImage:(id)image;
- (void)setTogglePosition:(float)position ended:(BOOL)ended;
@end

