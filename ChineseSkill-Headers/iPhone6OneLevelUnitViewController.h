/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "iPhone6OneLevelUnitBaseViewController.h"

@class NSTimer, UILabel, UIImageView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface iPhone6OneLevelUnitViewController : iPhone6OneLevelUnitBaseViewController {
	bool _isUnitBought;
	bool _isUnitUnLock;
	UIImageView* _imageBG;
	UIImageView* _lockImage;
	UIView* _imageBGView;
	UIView* _progressImgView;
	UIView* _finishImage;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIButton* _enterButton;
	NSTimer* _splashTimer;
	int _nCurrentSplashIndex;
}
@property(assign, nonatomic) __weak UILabel* countLabel;
@property(assign, nonatomic) __weak UIButton* enterButton;
@property(assign, nonatomic) __weak UIView* finishImage;
@property(assign, nonatomic) __weak UIImageView* imageBG;
@property(assign, nonatomic) __weak UIView* imageBGView;
@property(assign) bool isUnitBought;
@property(assign) bool isUnitUnLock;
@property(assign, nonatomic) __weak UIImageView* lockImage;
@property(assign) int nCurrentSplashIndex;
@property(assign, nonatomic) __weak UIView* progressImgView;
@property(retain, nonatomic) NSTimer* splashTimer;
@property(assign, nonatomic) __weak UILabel* titleLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)AppendProgressImgView:(int)view Number:(int)number;
- (void)ICONAnimation;
- (BOOL)InitModelData:(id)data;
- (void)ReleaseDelegateReference;
- (void)UpdateImageWithColor:(id)color;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)enterButtonCancel:(id)cancel;
- (void)enterButtonDown:(id)down;
- (void)enterButtonUp:(id)up;
- (void)viewDidLoad;
@end

