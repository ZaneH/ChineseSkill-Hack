/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIiPhone6MovingImage : XXUnknownSuperclass {
	BOOL _isHintPart;
	NSString* _nodeImageName;
	UIImageView* _nodeImage;
	int _nodeId;
	int _SpriteRectRealWidth;
	int _ButtonRealWidth;
	CGPoint _oriPoint;
	CGPoint _spriteRectOffSet;
	CGPoint _viewRectOffSet;
	CGPoint _comparePoint;
	CGPoint _animoPointBefore;
	CGPoint _animoPointAfter;
	CGRect _newFrameRect;
	CGRect _spriteRect;
}
@property(assign) int ButtonRealWidth;
@property(assign) int SpriteRectRealWidth;
@property(assign) CGPoint animoPointAfter;
@property(assign) CGPoint animoPointBefore;
@property(assign) CGPoint comparePoint;
@property(assign) BOOL isHintPart;
@property(assign) CGRect newFrameRect;
@property(assign) int nodeId;
@property(retain, nonatomic) UIImageView* nodeImage;
@property(retain, nonatomic) NSString* nodeImageName;
@property(assign) CGPoint oriPoint;
@property(assign) CGRect spriteRect;
@property(assign) CGPoint spriteRectOffSet;
@property(assign) CGPoint viewRectOffSet;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)DubleScale;
- (void)SingleScale;
- (void)UpdateImageColor:(id)color;
- (void)UpdateImagePosition;
@end

