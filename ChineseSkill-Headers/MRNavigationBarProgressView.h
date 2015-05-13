/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "MRProgressView.h"

@class UIColor, UIViewController, UIView;

@interface MRNavigationBarProgressView : MRProgressView {
	UIView* _progressView;
	UIViewController* _viewController;
	UIView* _barView;
}
@property(assign, nonatomic) __weak UIView* barView;
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIColor* progressTintColor;
@property(assign, nonatomic) __weak UIView* progressView;
@property(assign, nonatomic) __weak UIViewController* viewController;
+ (id)progressViewForNavigationController:(id)navigationController;
+ (BOOL)requiresConstraintBasedLayout;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)_setProgress:(float)progress;
- (void)commonInit;
- (void)dealloc;
- (void)layoutProgressView;
- (void)layoutSubviews;
- (void)navigationControllerDidShowViewController:(id)navigationController;
- (void)progressDidChange;
- (void)registerObserverForNavigationController:(id)navigationController;
- (void)setProgress:(float)progress animated:(BOOL)animated;
- (void)unregisterObserverForNavigationController:(id)navigationController;
@end

