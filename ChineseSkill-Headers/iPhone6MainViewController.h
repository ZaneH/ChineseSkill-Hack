/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "CSMainLeftView_iPhone6Delegate.h"
#import "CSShareSheetBtnClickedDelegate.h"
#import "iPhone6GiftBoxViewDelegate.h"
#import "MBProgressHUDDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString, UIView, iPhone4UserSubscribeViewController, UIPopoverController, iPhone6AchievementViewController, iPhone6ChinesePinyinViewController, iPhone6PlayBoardViewController, NSArray, CSMainLeftView_iPhone6, CSShareView, UIButton, NSMutableArray, iPhone6SettingViewController, NSMutableDictionary, CSGiftBox_iPhone6, UIScrollView;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface iPhone6MainViewController : XXUnknownSuperclass <UINavigationControllerDelegate, CSMainLeftView_iPhone6Delegate, CSShareSheetBtnClickedDelegate, UIActionSheetDelegate, iPhone6GiftBoxViewDelegate, MBProgressHUDDelegate> {
	BOOL _isInView;
	BOOL _canMoveLeft;
	BOOL _isLeftViewOpened;
	BOOL _isRightViewOpened;
	NSMutableDictionary* _m_UnitMap;
	NSArray* _allKeys;
	NSMutableArray* _controllersList;
@private
	id<myDelegate> _mydelegate;
@protected
	UIPopoverController* _m_popoverController;
	iPhone4UserSubscribeViewController* _userSubscribeViewController;
	int _nUnitId;
	iPhone6PlayBoardViewController* _midView;
	CSMainLeftView_iPhone6* _leftView;
	iPhone6AchievementViewController* _rightVC;
	CSGiftBox_iPhone6* _utView;
	UIImageView* _coverImageview;
	UIView* _currenMidView;
	UIButton* _cancelBtn;
	iPhone6SettingViewController* _settingVC;
	UIView* _preMidView;
	UIScrollView* _scrollView;
	CSShareView* _scv;
	iPhone6ChinesePinyinViewController* _pinYinVC;
	CGPoint _beginPoint;
	CGPoint _prePoint;
}
@property(retain, nonatomic) NSArray* allKeys;
@property(assign, nonatomic) CGPoint beginPoint;
@property(assign, nonatomic) BOOL canMoveLeft;
@property(retain, nonatomic) UIButton* cancelBtn;
@property(retain, nonatomic) NSMutableArray* controllersList;
@property(retain, nonatomic) UIImageView* coverImageview;
@property(retain, nonatomic) UIView* currenMidView;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isInView;
@property(assign, nonatomic) BOOL isLeftViewOpened;
@property(assign, nonatomic) BOOL isRightViewOpened;
@property(retain, nonatomic) CSMainLeftView_iPhone6* leftView;
@property(retain, nonatomic) NSMutableDictionary* m_UnitMap;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(retain, nonatomic) iPhone6PlayBoardViewController* midView;
@property(retain, nonatomic) id<myDelegate> mydelegate;
@property(assign) int nUnitId;
@property(retain, nonatomic) iPhone6ChinesePinyinViewController* pinYinVC;
@property(retain, nonatomic) UIView* preMidView;
@property(assign, nonatomic) CGPoint prePoint;
@property(retain, nonatomic) iPhone6AchievementViewController* rightVC;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) CSShareView* scv;
@property(retain, nonatomic) iPhone6SettingViewController* settingVC;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) iPhone4UserSubscribeViewController* userSubscribeViewController;
@property(retain, nonatomic) CSGiftBox_iPhone6* utView;
- (void).cxx_destruct;
- (void)GiftBoxBtnClicked;
- (void)ListenSpeakBtnClicked;
- (void)checkAndUpdateFromAWS;
- (void)closeLeftRightView;
- (void)closeLeftView;
- (void)courseBtnClicked;
- (void)currentMidViewChanged;
- (void)currentMidViewUnChanged;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)happyNewYearBtnClicked;
- (BOOL)isCurrentMidViewChanged:(id)changed;
- (void)leftNavBarButton:(id)button;
- (void)listenSpeakBtnBeClicked:(id)clicked;
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
