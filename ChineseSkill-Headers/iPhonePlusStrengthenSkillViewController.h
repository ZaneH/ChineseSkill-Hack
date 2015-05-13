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

@class VerticallyAlignedLabel, UIImageView, NSString, UIView, UIActivityIndicatorView, iPhonePlusDataModelViewController, CSReportController, CSShareView, UIButton, UIImage, NSMutableArray, NSMutableDictionary, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface iPhonePlusStrengthenSkillViewController : XXUnknownSuperclass <CSShareButtonDelegate, myDelegate, UIWebViewDelegate, UIActionSheetDelegate> {
	BOOL _isChecked;
	BOOL _isWordTestSet;
	BOOL _currentTestResult;
	NSMutableArray* _m_RegexList;
	UIView* _stepContainerView;
	UIView* _containerView;
	UIButton* _checkAndContinueButton;
	UIButton* _quitButton;
	UIButton* _quitButton2;
	UIButton* _nextLessonButton;
	UIImageView* _heartImage1;
	UIImageView* _heartImage2;
	UIImageView* _heartImage3;
	UIImageView* _heartImage4;
	UILabel* _practiceLabel;
	UIView* _resultViewBG;
	UIView* _resultView;
	UILabel* _checkAnswerLabel;
	UIView* _resultColorView;
	UIView* _resultColorshadowView;
	UIView* _shareBtnBGView;
	UIImageView* _resultViewResultICONImage;
	VerticallyAlignedLabel* _resultLabel;
	UIActivityIndicatorView* _activityView;
	NSTimer* _timerCheckAvailable;
	iPhonePlusDataModelViewController* _pSubViewController;
	NSMutableDictionary* _m_TestResultDic;
	UILabel* _translationLabelInResult;
	int _nCurTest;
	int _nTotalTest;
	int _nNumberofLeftHearts;
	int _waitingSeconds;
	CSReportController* _csr;
	CSShareView* _scv;
	UIView* _blackView;
	UIImage* _screenShot;
	UIView* _titleView;
	UILabel* _scoreLabel2;
	UIView* _wrongView;
	UIButton* _nextTestButton;
}
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
@property(assign, nonatomic) __weak UIImageView* heartImage2;
@property(assign, nonatomic) __weak UIImageView* heartImage3;
@property(assign, nonatomic) __weak UIImageView* heartImage4;
@property(assign) BOOL isChecked;
@property(assign) BOOL isWordTestSet;
@property(retain, nonatomic) NSMutableArray* m_RegexList;
@property(retain, nonatomic) NSMutableDictionary* m_TestResultDic;
@property(assign) int nCurTest;
@property(assign) int nNumberofLeftHearts;
@property(assign) int nTotalTest;
@property(assign, nonatomic) __weak UIButton* nextLessonButton;
@property(assign, nonatomic) __weak UIButton* nextTestButton;
@property(retain, nonatomic) iPhonePlusDataModelViewController* pSubViewController;
@property(assign, nonatomic) __weak UILabel* practiceLabel;
@property(assign, nonatomic) __weak UIButton* quitButton;
@property(assign, nonatomic) __weak UIButton* quitButton2;
@property(assign, nonatomic) __weak UIView* resultColorView;
@property(assign, nonatomic) __weak UIView* resultColorshadowView;
@property(assign, nonatomic) __weak VerticallyAlignedLabel* resultLabel;
@property(assign, nonatomic) __weak UIView* resultView;
@property(assign, nonatomic) __weak UIView* resultViewBG;
@property(assign, nonatomic) __weak UIImageView* resultViewResultICONImage;
@property(assign, nonatomic) __weak UILabel* scoreLabel2;
@property(retain, nonatomic) UIImage* screenShot;
@property(retain, nonatomic) CSShareView* scv;
@property(assign, nonatomic) __weak UIView* shareBtnBGView;
@property(assign, nonatomic) __weak UIView* stepContainerView;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSTimer* timerCheckAvailable;
@property(assign, nonatomic) __weak UIView* titleView;
@property(assign, nonatomic) __weak UILabel* translationLabelInResult;
@property(assign) int waitingSeconds;
@property(assign, nonatomic) __weak UIView* wrongView;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)BuildUpCurrentTestSet;
- (void)BuildUpSentenceTestSet;
- (void)BuildUpWordTestSet;
- (void)CheckOrContinueButtonClick:(id)click;
- (void)CheckResult;
- (void)CheckTestModelMaterials;
- (void)EnableCheckButton:(id)button;
- (void)InitNextModel;
- (id)ProduceRadomTestsData:(id)data Times:(int)times;
- (void)ReleaseDelegateReference;
- (void)Repeat_CheckTestModelMaterials;
- (void)SwitchCheckButton:(BOOL)button;
- (void)UpdateHeartImage;
- (void)UpdateSetpViews;
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
- (void)beginResultViewAnimation;
- (void)dealloc;
- (void)didClickedBugReportButton;
- (void)didReceiveMemoryWarning;
- (id)getTestStatistics;
- (void)nextLessonButtonClick:(id)click;
- (void)popEditViewWithImage:(id)image andText:(id)text nameOfSNS:(int)sns;
- (void)reportSendSuccess;
- (id)screenshotWithView:(int)view;
- (void)setupSubViews;
- (void)shareViewcancel;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)useSystemMethodToShareText:(id)shareText withSNSType:(id)snstype;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)view;
@end

