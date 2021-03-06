/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton;
@protocol RSTapRateViewDelegate;

@interface RSTapRateView : XXUnknownSuperclass {
	UILabel* _textLabel;
	UIButton* _oneStarButton;
	UIButton* _twoStarButton;
	UIButton* _threeStarButton;
	UIButton* _fourStarButton;
	UIButton* _fiveStarButton;
	int _rating;
	id<RSTapRateViewDelegate> _delegate;
	UIImageView* _oneStarReflectionView;
	UIImageView* _twoStarReflectionView;
	UIImageView* _threeStarReflectionView;
	UIImageView* _fourStarReflectionView;
	UIImageView* _fiveStarReflectionView;
}
@property(assign, nonatomic) id<RSTapRateViewDelegate> delegate;
@property(retain, nonatomic) UIButton* fiveStarButton;
@property(retain, nonatomic) UIImageView* fiveStarReflectionView;
@property(retain, nonatomic) UIButton* fourStarButton;
@property(retain, nonatomic) UIImageView* fourStarReflectionView;
@property(retain, nonatomic) UIButton* oneStarButton;
@property(retain, nonatomic) UIImageView* oneStarReflectionView;
@property(assign, nonatomic) int rating;
@property(retain, nonatomic) UILabel* textLabel;
@property(retain, nonatomic) UIButton* threeStarButton;
@property(retain, nonatomic) UIImageView* threeStarReflectionView;
@property(retain, nonatomic) UIButton* twoStarButton;
@property(retain, nonatomic) UIImageView* twoStarReflectionView;
- (id)initWithFrame:(CGRect)frame;
- (void)clean;
- (void)dealloc;
- (void)layoutSubviews;
- (void)reflectionViewRefresh;
- (void)tapStarButton:(id)button;
@end

