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

@class VerticallyAlignedLabel, UIImageView, NSString, UIView, iPhone6DataModelViewController, UIActivityIndicatorView, CSReportController, CSShareView, UIButton, UIImage, CAShapeLayer, NSDate, NSMutableArray, NSMutableDictionary, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface iPhone6OneLessonViewController : XXUnknownSuperclass <CSShareButtonDelegate, myDelegate, UIWebViewDelegate, UIActionSheetDelegate> {
	BOOL _isRedoThisLesson;
	BOOL _isChecked;
	BOOL _currentTestResult;
	NSMutableArray* _m_RegexList;
	UIView* _containerView;
	UIButton* _checkAndContinueButton;
	UIButton* _quitButton;
	UIButton* _quitButton2;
	int _preWrongTestNum;
	UIButton* _nextLessonButton;
	UIButton* _redoBtn;
	UIView* _resultViewBG;
	UIView* _resultView;
	UIView* _resultColorView;
	UIView* _resultColorshadowView;
	UIView* _shareBtnBGView;
	UILabel* _checkAnswerLabel;
	UIImageView* _resultViewResultICONImage;
	VerticallyAlignedLabel* _resultLabel;
	UIButton* _showCharacterAnswerAnimationButton;
	iPhone6DataModelViewController* _pSubViewController;
	NSMutableDictionary* _m_TestResultDic;
	UIActivityIndicatorView* _activityView;
	UIImageView* _heartImage1bg;
	UIImageView* _heartImage2bg;
	UIImageView* _heartImage3bg;
	UIImageView* _heartImage4bg;
	UIImageView* _heartImage1;
	UIImageView* _heartImage2;
	UIImageView* _heartImage3;
	UIImageView* _heartImage4;
	int _nLevelId;
	int _nUnitId;
	int _nLessonId;
	int _nCurTest;
	int _nTotalTest;
	int _nNumberofLeftHearts;
	int _nCurrentModelType;
	int _waitingSeconds;
	UILabel* _scoreLabel;
	UILabel* _translationLabelInResult;
	UILabel* _timeLabel;
	CSReportController* _csr;
	CSShareView* _scv;
	UIView* _blackView;
	UIImage* _screenShot;
	CAShapeLayer* _wrongLayerBG;
	NSTimer* _timerCheckAvailable;
	int _nGetScore;
	int _nTotalScore;
	NSDate* _startTime;
	UILabel* _scoreAnimationLabel;
	UIView* _titleView;
	UIView* _wrongView;
	UILabel* _scoreLabel2;
	UIView* _stepCView;
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
@property(assign, nonatomic) int nGetScore;
@property(assign) int nLessonId;
@property(assign) int nLevelId;
@property(assign) int nNumberofLeftHearts;
@property(assign, nonatomic) int nTotalScore;
@property(assign) int nTotalTest;
@property(assign) int nUnitId;
@property(assign, nonatomic) __weak UIButton* nextLessonButton;
@property(assign, nonatomic) __weak UIButton* nextTestButton;
@property(retain, nonatomic) iPhone6DataModelViewController* pSubViewController;
@property(assign, nonatomic) int preWrongTestNum;
@property(assign, nonatomic) __weak UIButton* quitButton;
@property(assign, nonatomic) __weak UIButton* quitButton2;
@property(assign, nonatomic) __weak UIButton* redoBtn;
@property(assign, nonatomic) __weak UIView* resultColorView;
@property(assign, nonatomic) __weak UIView* resultColorshadowView;
@property(assign, nonatomic) __weak VerticallyAlignedLabel* resultLabel;
@property(assign, nonatomic) __weak UIView* resultView;
@property(assign, nonatomic) __weak UIView* resultViewBG;
@property(assign, nonatomic) __weak UIImageView* resultViewResultICONImage;
@property(retain, nonatomic) UILabel* scoreAnimationLabel;
@property(assign, nonatomic) __weak UILabel* scoreLabel;
@property(assign, nonatomic) __weak UILabel* scoreLabel2;
@property(retain, nonatomic) UIImage* screenShot;
@property(retain, nonatomic) CSShareView* scv;
@property(assign, nonatomic) __weak UIView* shareBtnBGView;
@property(assign, nonatomic) __weak UIButton* showCharacterAnswerAnimationButton;
@property(retain, nonatomic) NSDate* startTime;
@property(assign, nonatomic) __weak UIView* stepCView;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UILabel* timeLabel;
@property(retain, nonatomic) NSTimer* timerCheckAvailable;
@property(assign, nonatomic) __weak UIView* titleView;
@property(assign, nonatomic) __weak UILabel* translationLabelInResult;
@property(assign) int waitingSeconds;
@property(retain, nonatomic) CAShapeLayer* wrongLayerBG;
@property(assign, nonatomic) __weak UIView* wrongView;
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
- (void)MakeEnableCheckAndContinueButton;
- (void)ReleaseDelegateReference;
- (void)Repeat_CheckTestModelMaterials;
- (void)SwitchCheckButton:(BOOL)button;
- (void)UpdateHeartImage;
- (void)UpdateSetpViews;
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
- (void)beginResultViewAnimationLostPanda:(BOOL)panda;
- (void)deducteScoreByCharacterHint;
- (void)deducteScoreByWordInSentence;
- (void)didClickedBugReportButton;
- (void)didReceiveMemoryWarning;
- (void)drawLineAnimation:(id)animation;
- (id)getTestStatistics;
- (void)nextLessonButtonClick:(id)click;
- (void)popEditViewWithImage:(id)image andText:(id)text nameOfSNS:(int)sns;
- (void)popupCharacterReview:(id)review;
- (void)popupSentenceReview:(id)review;
- (void)popupWordReview:(id)review;
- (void)redoNow:(id)now;
- (void)reportSendSuccess;
- (void)scoreIncreaseAnimation:(BOOL)animation;
- (id)screenshotWithView:(int)view;
- (void)setupSubViews;
- (void)shareViewcancel;
- (void)showCharacterAnswerAnimationButtonClick:(id)click;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

