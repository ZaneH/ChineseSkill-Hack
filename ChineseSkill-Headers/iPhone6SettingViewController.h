/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CSSwitchViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPopoverControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CSSwitchView, UIButton, UILabel, NSString, iPhone6NavView, UITableViewCell, UITableView;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface iPhone6SettingViewController : XXUnknownSuperclass <UIActionSheetDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, CSSwitchViewDelegate> {
	id<myDelegate> _delegate;
	UITableView* _mainTable;
	UIButton* _doneButton;
	UILabel* _promotionLabel;
	UILabel* _contactusLabel;
	UILabel* _moreAppLabel;
	UILabel* _downloadLabel;
	UILabel* _AccountLabel;
	UILabel* _RecommentLabel;
	UILabel* _characertestLabel;
	UILabel* _pytonecheckLabel;
	UIButton* _accountButton;
	UIButton* _feedbackButton;
	UIButton* _moreappsButton;
	UITableViewCell* _promotionCodeCell;
	CSSwitchView* _charactersytemSwitchButton;
	CSSwitchView* _clicksoundSwitchButton;
	CSSwitchView* _pyToneCheckSwitchButton;
	UIButton* _Chinesedisplay_Char_Button;
	UIButton* _Chinesedisplay_Pinyin_Button;
	UIButton* _Chinesedisplay_Both_Button;
	UIButton* _Chineseversion_simplified_Button;
	UIButton* _Chinesedisplay_tranditional_Button;
	iPhone6NavView* _navView;
}
@property(assign, nonatomic) __weak UILabel* AccountLabel;
@property(assign, nonatomic) __weak UIButton* Chinesedisplay_Both_Button;
@property(assign, nonatomic) __weak UIButton* Chinesedisplay_Char_Button;
@property(assign, nonatomic) __weak UIButton* Chinesedisplay_Pinyin_Button;
@property(assign, nonatomic) __weak UIButton* Chinesedisplay_tranditional_Button;
@property(assign, nonatomic) __weak UIButton* Chineseversion_simplified_Button;
@property(assign, nonatomic) __weak UILabel* RecommentLabel;
@property(assign, nonatomic) __weak UIButton* accountButton;
@property(assign, nonatomic) __weak UILabel* characertestLabel;
@property(assign, nonatomic) __weak CSSwitchView* charactersytemSwitchButton;
@property(assign, nonatomic) __weak CSSwitchView* clicksoundSwitchButton;
@property(assign, nonatomic) __weak UILabel* contactusLabel;
@property(readonly, copy) NSString* debugDescription;
@property(retain, nonatomic) id<myDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UIButton* doneButton;
@property(assign, nonatomic) __weak UILabel* downloadLabel;
@property(assign, nonatomic) __weak UIButton* feedbackButton;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(assign, nonatomic) __weak UILabel* moreAppLabel;
@property(assign, nonatomic) __weak UIButton* moreappsButton;
@property(retain, nonatomic) iPhone6NavView* navView;
@property(assign, nonatomic) __weak UITableViewCell* promotionCodeCell;
@property(assign, nonatomic) __weak UILabel* promotionLabel;
@property(assign, nonatomic) __weak CSSwitchView* pyToneCheckSwitchButton;
@property(assign, nonatomic) __weak UILabel* pytonecheckLabel;
@property(readonly, assign) Class superclass;
- (void).cxx_destruct;
- (void)AccountClick:(id)click;
- (void)BackButtonClick:(id)click;
- (void)ChineseDisplay_Both_Click:(id)click;
- (void)ChineseDisplay_Character_Click:(id)click;
- (void)ChineseDisplay_Pinyin_Click:(id)click;
- (void)ChineseVersion_Simplified_Click:(id)click;
- (void)ChineseVersion_Tranditional_Click:(id)click;
- (void)ContactUsOnFacebookClick:(id)click;
- (void)InitChinesedisplayButton:(int)button;
- (void)InitChineseversionButton:(int)button;
- (void)InitData;
- (void)PopupFeedbackView:(id)view;
- (void)RateThisAppClick:(id)click;
- (void)TellAFriendButtonClick:(id)click;
- (void)didReceiveMemoryWarning;
- (void)remindMeBtnClicked:(id)clicked;
- (void)setupNavView;
- (void)switchBeClosedWithSwitchTag:(int)switchTag;
- (void)switchBeOpenedWithSwitchTag:(int)switchTag;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

