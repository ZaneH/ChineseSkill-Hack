/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MRBlurView : XXUnknownSuperclass {
	BOOL _redrawOnFrameChange;
}
@property(assign, nonatomic) BOOL redrawOnFrameChange;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (void)clearPlaceholder;
- (void)commonInit;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)redraw;
- (void)registerForNotificationCenter;
- (void)setPlaceholder;
- (id)snapshot;
- (void)statusBarOrientationDidChange:(id)statusBarOrientation;
- (void)unregisterFromNotificationCenter;
@end

