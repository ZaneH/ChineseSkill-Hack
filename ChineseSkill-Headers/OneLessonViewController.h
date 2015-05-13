/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "myDelegate.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CSShareButtonDelegate.h"
#import "UIWebViewDelegate.h"

@class VerticallyAlignedLabel, UIImageView, NSString, UIView, UIActivityIndicatorView, CSReportController, CSShareView, UIButton, UIImage, NSMutableArray, DataModelViewController, NSMutableDictionary, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface OneLessonViewController : XXUnknownSuperclass <CSShareButtonDelegate, myDelegate, UIWebViewDelegate, UIActionSheetDelegate> {
	BOOL _isRedoThisLesson;
	BOOL _isChecked;
	BOOL _ActionSheetQuitCalled;
	BOOL _currentTestResult;
	NSMutableArray* _m_RegexList;
	UIView* _stepContainerView;
	UIView* _containerView;
	UIButton* _checkAndContinueButton;
	UIButton* _quitButton;
	UIButton* _quitButton2;
	UIButton* _nextLessonButton;
	UIImageView* _heartImage1bg;
	UIImageView* _heartImage2bg;
	UIImageView* _heartImage3bg;
	UIImageView* _heartImage4bg;
	UIImageView* _heartImage1;
	UIImageView* _heartImage2;
	UIImageView* _heartImage3;
	UIImageView* _heartImage4;
	UIView* _resultViewBG;
	UIView* _resultView;
	UIView* _resultColorView;
	UIView* _resultColorshadowView;
	UIView* _shareBtnBGView;
	UILabel* _checkAnswerLabel;
	UIImageView* _resultViewResultICONImage;
	VerticallyAlignedLabel* _resultLabel;
	UIButton* _showCharacterAnswerAnimationButton;
	UILabel* _translationLabelInResult;
	DataModelViewController* _pSubViewController;
	NSMutableDictionary* _m_TestResultDic;
	int _nLevelId;
	int _nUnitId;
	int _nLessonId;
	int _nCurTest;
	int _nTotalTest;
	int _nNumberofLeftHearts;
	int _nNumberofCharacterInLesson;
	int _nCurrentModelType;
	int _waitingSeconds;
	CSReportController* _csr;
	CSShareView* _scv;
	UIView* _blackView;
	UIImage* _screenShot;
	NSTimer* _timerCheckAvailable;
	UIActivityIndicatorView* _activityView;
}
@property(assign) BOOL ActionSheetQuitCalled;
@property(retain, nonatomic) UIActivityIndicatorView* activityView;
@property(retain, nonatomic) UIView* blackView;
@property(assign, nonatomic) __weak UIButton* checkAndContinueButton;
@property(assign, nonatomic) __weak UILabel* checkAnswerLabel;
@property(assign, nonatomic) __weak UIView* containerView;
@property(retain, nonatomic) CSReportController* csr;
@property(assign, nonatomic) BOOL currentTestResult;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIImageView* heartImage1;
@property(assign, nonatomic) __weak UIImageView* heartImage1bg;
@property(assign, nonatomic) __weak UIImageView* heartImage2;
@property(assign, nonatomic) __weak UIImageView* heartImage2bg;
@property(assign, nonatomic) __weak UIImageView* heartImage3;
@property(assign, nonatomic) __weak UIImageView* heartImage3bg;
@property(assign, nonatomic) __weak UIImageView* heartImage4;
@property(assign, nonatomic) __weak UIImageView* heartImage4bg;
@property(assign) BOOL isChecked;
@property(assign) BOOL isRedoThisLesson;
@property(retain, nonatomic) NSMutableArray* m_RegexList;
@property(retain, nonatomic) NSMutableDictionary* m_TestResultDic;
@property(assign) int nCurTest;
@property(assign) int nCurrentModelType;
@property(assign) int nLessonId;
@property(assign) int nLevelId;
@property(assign) int nNumberofCharacterInLesson;
@property(assign) int nNumberofLeftHearts;
@property(assign) int nTotalTest;
@property(assign) int nUnitId;
@property(assign, nonatomic) __weak UIButton* nextLessonButton;
@property(retain, nonatomic) DataModelViewController* pSubViewController;
@property(assign, nonatomic) __weak UIButton* quitButton;
@property(assign, nonatomic) __weak UIButton* quitButton2;
@property(assign, nonatomic) __weak UIView* resultColorView;
@property(assign, nonatomic) __weak UIView* resultColorshadowView;
@property(assign, nonatomic) __weak VerticallyAlignedLabel* resultLabel;
@property(assign, nonatomic) __weak UIView* resultView;
@property(assign, nonatomic) __weak UIView* resultViewBG;
@property(assign, nonatomic) __weak UIImageView* resultViewResultICONImage;
@property(retain, nonatomic) UIImage* screenShot;
@property(retain, nonatomic) CSShareView* scv;
@property(assign, nonatomic) __weak UIView* shareBtnBGView;
@property(assign, nonatomic) __weak UIButton* showCharacterAnswerAnimationButton;
@property(assign, nonatomic) __weak UIView* stepContainerView;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSTimer* timerCheckAvailable;
@property(assign, nonatomic) __weak UILabel* translationLabelInResult;
@property(assign) int waitingSeconds;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)CheckOrContinueButtonClick:(id)click;
- (void)CheckResult;
- (void)CheckTestModelMaterials;
- (void)CheckToPopRateView;
- (void)EnableCheckButton:(id)button;
- (void)InitNextModel;
- (void)LossOnePandaHeartImage;
- (void)ReleaseDelegateReference;
- (void)Repeat_CheckTestModelMaterials;
- (void)SwitchCheckButton:(BOOL)button;
- (void)UpdateHeartImage;
- (void)UpdateSetpViews;
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
- (void)dealloc;
- (void)didClickedBugReportButton;
- (void)didReceiveMemoryWarning;
- (id)getTestStatistics;
- (void)nextLessonButtonClick:(id)click;
- (void)popEditViewWithImage:(id)image andText:(id)text nameOfSNS:(int)sns;
- (void)reportSendSuccess;
- (id)screenshotWithView:(int)view;
- (void)sendReportSuccess;
- (void)shareViewcancel;
- (void)showCharacterAnswerAnimationButtonClick:(id)click;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)useSystemMethodToShareText:(id)shareText withSNSType:(id)snstype;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

