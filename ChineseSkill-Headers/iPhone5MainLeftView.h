/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIButton;
@protocol CSMainLeftView_iPhoneDelegate;

__attribute__((visibility("hidden")))
@interface iPhone5MainLeftView : XXUnknownSuperclass {
	BOOL _mainBtnLocked;
	BOOL _giftBtnLocked;
	BOOL _settingBtnLocked;
	BOOL _listenSpeakBtnLoced;
	id<CSMainLeftView_iPhoneDelegate> _delegate;
	UIButton* _mainBtn;
	UIButton* _usefulToolsBtn;
	UIImageView* _portraitImageView;
	UIImageView* _topImage;
	UIImageView* _bottomLogoLabel;
	UIImageView* _bottomImage;
	UIImageView* _CourseImage;
	UIImageView* _GiftBoxImage;
	UIImageView* _SettingsImage;
	UIImageView* _ListenSpeakImage;
}
@property(assign, nonatomic) __weak UIImageView* CourseImage;
@property(assign, nonatomic) __weak UIImageView* GiftBoxImage;
@property(assign, nonatomic) __weak UIImageView* ListenSpeakImage;
@property(assign, nonatomic) __weak UIImageView* SettingsImage;
@property(assign, nonatomic) __weak UIImageView* bottomImage;
@property(assign, nonatomic) __weak UIImageView* bottomLogoLabel;
@property(assign, nonatomic) __weak id<CSMainLeftView_iPhoneDelegate> delegate;
@property(assign, nonatomic) BOOL giftBtnLocked;
@property(assign, nonatomic) BOOL listenSpeakBtnLoced;
@property(assign, nonatomic) __weak UIButton* mainBtn;
@property(assign, nonatomic) BOOL mainBtnLocked;
@property(assign, nonatomic) __weak UIImageView* portraitImageView;
@property(assign, nonatomic) BOOL settingBtnLocked;
@property(assign, nonatomic) __weak UIImageView* topImage;
@property(assign, nonatomic) __weak UIButton* usefulToolsBtn;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)ListenSpeakBtn:(id)btn;
- (void)mainBtnClicked:(id)clicked;
- (void)portraitImage;
- (void)refreshUserInterface;
- (void)resetSelecteBtnImage;
- (void)settingBtn:(id)btn;
- (void)unlockGiftBox;
- (void)unlockListenSpeakBtn;
- (void)unlockMainBtn;
- (void)unlockSettingBtn;
- (void)usefultoolsBtn:(id)btn;
@end

