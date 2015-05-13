/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CSMainLeftView_iPhonePlusDelegate.h"
#import "iPhonePlusGiftBoxViewDelegate.h"
#import "CSShareSheetBtnClickedDelegate.h"
#import "MBProgressHUDDelegate.h"

@class iPhonePlusSettingViewController, VerticallyAlignedLabel, UIButton, iPhonePlusChinesePinyinViewController, CSGiftBox_iPhonePlus, CSMainLeftView_iPhonePlus, NSMutableArray, CSShareView, NSMutableDictionary, UILabel, UIScrollView, iPhonePlusPlayBoardViewController, iPhonePlusAchievementViewController, UIImageView, UIView, UIPopoverController, iPhone4UserSubscribeViewController, NSArray, NSString;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface iPhonePlusMainViewController : XXUnknownSuperclass <UINavigationControllerDelegate, CSMainLeftView_iPhonePlusDelegate, CSShareSheetBtnClickedDelegate, UIActionSheetDelegate, iPhonePlusGiftBoxViewDelegate, MBProgressHUDDelegate> {
	BOOL _isInView;
	BOOL _canMoveLeft;
	BOOL _isLeftViewOpened;
	BOOL _isRightViewOpened;
	NSMutableDictionary* _m_UnitMap;
	NSArray* _allKeys;
	NSMutableArray* _controllersList;
	id<myDelegate> _mydelegate;
	UIPopoverController* _m_popoverController;
	iPhone4UserSubscribeViewController* _userSubscribeViewController;
	int _nUnitId;
	UIImageView* _unitImgView;
	VerticallyAlignedLabel* _unitDescription;
	UIButton* _closeLockBtnView;
	UILabel* _completePreviouToUnlock;
	iPhonePlusPlayBoardViewController* _midView;
	CSMainLeftView_iPhonePlus* _leftView;
	iPhonePlusAchievementViewController* _rightVC;
	CSGiftBox_iPhonePlus* _utView;
	UIImageView* _coverImageview;
	UIView* _currenMidView;
	UIButton* _cancelBtn;
	iPhonePlusSettingViewController* _settingVC;
	UIView* _preMidView;
	UIScrollView* _scrollView;
	CSShareView* _scv;
	iPhonePlusChinesePinyinViewController* _pinYinVC;
	CGPoint _beginPoint;
	CGPoint _prePoint;
}
@property(retain, nonatomic) NSArray* allKeys;
@property(assign, nonatomic) CGPoint beginPoint;
@property(assign, nonatomic) BOOL canMoveLeft;
@property(retain, nonatomic) UIButton* cancelBtn;
@property(assign, nonatomic) __weak UIButton* closeLockBtnView;
@property(assign, nonatomic) __weak UILabel* completePreviouToUnlock;
@property(retain, nonatomic) NSMutableArray* controllersList;
@property(retain, nonatomic) UIImageView* coverImageview;
@property(retain, nonatomic) UIView* currenMidView;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isInView;
@property(assign, nonatomic) BOOL isLeftViewOpened;
@property(assign, nonatomic) BOOL isRightViewOpened;
@property(retain, nonatomic) CSMainLeftView_iPhonePlus* leftView;
@property(retain, nonatomic) NSMutableDictionary* m_UnitMap;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(retain, nonatomic) iPhonePlusPlayBoardViewController* midView;
@property(retain, nonatomic) id<myDelegate> mydelegate;
@property(assign) int nUnitId;
@property(retain, nonatomic) iPhonePlusChinesePinyinViewController* pinYinVC;
@property(retain, nonatomic) UIView* preMidView;
@property(assign, nonatomic) CGPoint prePoint;
@property(retain, nonatomic) iPhonePlusAchievementViewController* rightVC;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) CSShareView* scv;
@property(retain, nonatomic) iPhonePlusSettingViewController* settingVC;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak VerticallyAlignedLabel* unitDescription;
@property(assign, nonatomic) __weak UIImageView* unitImgView;
@property(retain, nonatomic) iPhone4UserSubscribeViewController* userSubscribeViewController;
@property(retain, nonatomic) CSGiftBox_iPhonePlus* utView;
- (void).cxx_destruct;
- (void)AsktoPopupBuyViewByTestOut:(id)anOut;
- (void)GiftBoxBtnClicked;
- (void)ListenSpeakBtnClicked;
- (void)checkAndUpdateFromAWS;
- (void)closeLeftRightView;
- (void)closeLeftView;
- (void)currentMidViewChanged;
- (void)currentMidViewUnChanged;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)happyNewYearBtnClicked;
- (BOOL)isCurrentMidViewChanged:(id)changed;
- (void)leftNavBarButton:(id)button;
- (void)mainBtnClicked;
- (void)mainMidViewGoBack;
- (void)midViewBePan:(id)pan;
- (void)pinyinExerciseClicked;
- (void)portraitImageClicked;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForSegue:(id)segue sender:(id)sender;
- (void)refreshLeftViewFrame;
- (void)refreshRightViewFrame;
- (void)rightNavBarButton:(id)button;
- (void)settingBtnClicked;
- (void)setupCloseLeftRightViewBtn;
- (void)setupRightView;
- (void)setupSubViews;
- (void)survivalCHNBtnBeClicked:(id)clicked;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

