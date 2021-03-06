/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;
@protocol CSScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface CSScrollView : XXUnknownSuperclass {
	id<CSScrollViewDelegate> _delegatecs;
	UIImageView* _indicator;
}
@property(assign, nonatomic) __weak id<CSScrollViewDelegate> delegatecs;
@property(retain, nonatomic) UIImageView* indicator;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setContentSize:(CGSize)size;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;
- (BOOL)touchesShouldCancelInContentView:(id)touches;
@end

