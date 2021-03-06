/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import "ChineseSkillNew-Structs.h"
#import "UIScrollViewDelegate.h"
#import "myDelegate.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, FourPYPoperViewController, UIPopoverController, PinyinPoperViewController, UIButton, NSMutableDictionary, NSTimer, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface ChinesePinyinViewController : XXUnknownSuperclass <UIPopoverControllerDelegate, UIScrollViewDelegate, UIActionSheetDelegate, myDelegate> {
	BOOL _isMoving;
	UIPopoverController* _m_popoverController;
	PinyinPoperViewController* _m_pinyinPoper;
	FourPYPoperViewController* _m_fourPYPoper;
	UIView* _bgView;
	UIButton* _quitButton;
	UILabel* _tLabel;
	UIScrollView* _smScrollView;
	UIScrollView* _smScrollViewBottom;
	UIScrollView* _ymSrollView;
	UIScrollView* _ymSrollViewRight;
	UIScrollView* _mainscrollView;
	UIView* _smScrollViewBorder;
	UIView* _smScrollViewBottomBorder;
	UIView* _ymSrollViewBorder;
	UIView* _ymSrollViewRightBorder;
	UIButton* _toneButton1;
	UIButton* _toneButton2;
	UIButton* _toneButton3;
	UIButton* _toneButton4;
	UIButton* _toneButton5;
	NSMutableDictionary* _m_smDic;
	NSMutableDictionary* _m_ymDic;
	float _maxWidth;
	float _maxHeight;
	int _nCurTone;
	UILabel* _downloadProgress;
	NSTimer* _timer;
}
@property(assign, nonatomic) __weak UIView* bgView;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UILabel* downloadProgress;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL isMoving;
@property(retain, nonatomic) FourPYPoperViewController* m_fourPYPoper;
@property(retain, nonatomic) PinyinPoperViewController* m_pinyinPoper;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(retain, nonatomic) NSMutableDictionary* m_smDic;
@property(retain, nonatomic) NSMutableDictionary* m_ymDic;
@property(assign, nonatomic) __weak UIScrollView* mainscrollView;
@property(assign) float maxHeight;
@property(assign) float maxWidth;
@property(assign) int nCurTone;
@property(assign, nonatomic) __weak UIButton* quitButton;
@property(assign, nonatomic) __weak UIScrollView* smScrollView;
@property(assign, nonatomic) __weak UIView* smScrollViewBorder;
@property(assign, nonatomic) __weak UIScrollView* smScrollViewBottom;
@property(assign, nonatomic) __weak UIView* smScrollViewBottomBorder;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UILabel* tLabel;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) __weak UIButton* toneButton1;
@property(assign, nonatomic) __weak UIButton* toneButton2;
@property(assign, nonatomic) __weak UIButton* toneButton3;
@property(assign, nonatomic) __weak UIButton* toneButton4;
@property(assign, nonatomic) __weak UIButton* toneButton5;
@property(assign, nonatomic) __weak UIScrollView* ymSrollView;
@property(assign, nonatomic) __weak UIView* ymSrollViewBorder;
@property(assign, nonatomic) __weak UIScrollView* ymSrollViewRight;
@property(assign, nonatomic) __weak UIView* ymSrollViewRightBorder;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)ChangeToTone1:(id)tone1;
- (void)ChangeToTone2:(id)tone2;
- (void)ChangeToTone3:(id)tone3;
- (void)ChangeToTone4:(id)tone4;
- (void)ChangeToTone5:(id)tone5;
- (void)DoChangeToTone1;
- (void)DoChangeToTone2;
- (void)DoChangeToTone3;
- (void)DoChangeToTone4;
- (void)DoChangeToTone5;
- (int)GetNumberOfFileDownloaded;
- (void)LayoutMainScrollView;
- (void)LayoutRealPinyin:(int)pinyin;
- (void)LayoutSMScrollView;
- (void)LayoutYMScrollView;
- (void)PopupDownloadAuido:(id)auido;
- (void)PopupFourPYView:(id)view;
- (void)PopupPinyinView:(id)view;
- (void)UpdateDownloadProgress;
- (void)didReceiveMemoryWarning;
- (void)downloadPinyinResource;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)view;
@end

