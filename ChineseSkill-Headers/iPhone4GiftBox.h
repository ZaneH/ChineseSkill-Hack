/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIButton, UIView, iPhone4NavView;
@protocol usefulToolsViewDelegate;

__attribute__((visibility("hidden")))
@interface iPhone4GiftBox : XXUnknownSuperclass {
	iPhone4NavView* _navView;
	id<usefulToolsViewDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _pinyinImage;
	UIButton* _survivalCHNImage;
	UILabel* _pinyinLabel;
	UILabel* _survivalLabel;
	UIView* _seperatorLine;
	UILabel* _HappyNewYearLabel;
}
@property(assign, nonatomic) __weak UILabel* HappyNewYearLabel;
@property(assign, nonatomic) __weak id<usefulToolsViewDelegate> delegate;
@property(retain, nonatomic) iPhone4NavView* navView;
@property(assign, nonatomic) __weak UIButton* pinyinImage;
@property(assign, nonatomic) __weak UILabel* pinyinLabel;
@property(assign, nonatomic) __weak UIView* seperatorLine;
@property(assign, nonatomic) __weak UIButton* survivalCHNImage;
@property(assign, nonatomic) __weak UILabel* survivalLabel;
@property(assign, nonatomic) __weak UILabel* titleLabel;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)drawRect:(CGRect)rect;
- (void)happyNewYearBtn:(id)btn;
- (void)leftBtnClicked:(id)clicked;
- (void)liveStyle:(id)style;
- (void)pinyin:(id)pinyin;
- (void)setupNavView;
@end

