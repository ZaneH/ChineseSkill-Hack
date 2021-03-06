/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UIScrollViewDelegate.h"
#import "myDelegate.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VerticallyAlignedLabel, UIImageView, NSString, UIView, iPhone4UserSubscribeViewController, UIPopoverController, NSArray, UIButton, iPhonePlusNavView, NSMutableArray, NSMutableDictionary, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface iPhonePlusPlayBoardViewController : XXUnknownSuperclass <UIScrollViewDelegate, UIActionSheetDelegate, myDelegate> {
	BOOL _canRefresh;
	UIButton* _settingButton;
	UIScrollView* _scrollView;
	UIImageView* _LogoImageView;
	UIView* _lockViewBG;
	UIView* _lockViewMove;
	UIView* _lockView;
	UIView* _lockViewColor;
	UIImageView* _unitImgView;
	VerticallyAlignedLabel* _unitDescription;
	UIButton* _closeLockBtn;
	UILabel* _completePreviouToUnlock;
	NSMutableDictionary* _m_UnitMap;
	NSArray* _allKeys;
	NSMutableArray* _controllersList;
	UIPopoverController* _m_popoverController;
	iPhone4UserSubscribeViewController* _userSubscribeViewController;
	int _nUnitId;
	iPhonePlusNavView* _navView;
}
@property(retain, nonatomic) UIImageView* LogoImageView;
@property(retain, nonatomic) NSArray* allKeys;
@property(assign, nonatomic) BOOL canRefresh;
@property(assign, nonatomic) __weak UIButton* closeLockBtn;
@property(assign, nonatomic) __weak UILabel* completePreviouToUnlock;
@property(retain, nonatomic) NSMutableArray* controllersList;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIView* lockView;
@property(assign, nonatomic) __weak UIView* lockViewBG;
@property(assign, nonatomic) __weak UIView* lockViewColor;
@property(assign, nonatomic) __weak UIView* lockViewMove;
@property(retain, nonatomic) NSMutableDictionary* m_UnitMap;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(assign) int nUnitId;
@property(retain, nonatomic) iPhonePlusNavView* navView;
@property(assign, nonatomic) __weak UIScrollView* scrollView;
@property(assign, nonatomic) __weak UIButton* settingButton;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak VerticallyAlignedLabel* unitDescription;
@property(assign, nonatomic) __weak UIImageView* unitImgView;
@property(retain, nonatomic) iPhone4UserSubscribeViewController* userSubscribeViewController;
- (void).cxx_destruct;
- (void)AsktoPopupBuyView:(id)view;
- (void)AsktoPopupBuyViewByTestOut:(id)anOut;
- (void)AsktoPopupInforView:(id)view;
- (void)AsktoPopupInforViewByTestOut:(id)anOut;
- (void)BuildUpStructure;
- (void)CheckNeedUpdate;
- (void)CloseLockView:(id)view;
- (void)EnterOneTest:(id)test;
- (void)EnterOneTestOut:(id)anOut;
- (void)PopupAchievementView:(id)view;
- (void)ReLoadAndReflesh;
- (void)RefleshViewUI;
- (id)RetrivalUnitLessonDescripition;
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)segue sender:(id)sender;
- (void)setupNavView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

