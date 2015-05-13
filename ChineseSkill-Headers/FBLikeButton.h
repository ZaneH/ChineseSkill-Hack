/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIImageView;

@interface FBLikeButton : XXUnknownSuperclass {
	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;
}
- (id)initWithFrame:(CGRect)frame;
- (UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)contentHeight;
- (UIEdgeInsets)_contentEdgeInsetsForHeight:(float)height;
- (void)_initializeContent;
- (CGSize)_sizeWithTitleSize:(CGSize)titleSize;
- (void)_updateIconForState;
- (void)awakeFromNib;
- (void)dealloc;
- (CGRect)imageRectForContentRect:(CGRect)contentRect;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)selected;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
- (CGRect)titleRectForContentRect:(CGRect)contentRect;
@end

