/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UILabel, UIImageView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface iPhonePlusAchievementViewController : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UIImageView* _charEnterImage;
	UIImageView* _wordEnterImage;
	UIImageView* _sentEnterImage;
	UILabel* _charNumberLabel;
	UILabel* _wordNumberLabel;
	UILabel* _sentNumberLabel;
	UILabel* _charPracticeLabel;
	UILabel* _wordPracticeLabel;
	UILabel* _sentPracticeLabel;
	UIView* _charLineView;
	UIView* _wordLineView;
	UIView* _sentLineView;
	UIView* _playLineView;
	UIView* _subtitleBGView;
	UILabel* _subtitleLabel;
	UILabel* _subtitleTransLabel;
	UILabel* _indexLabel;
	UIButton* _charPlayButton;
	UIButton* _wordPlayButton;
	UIButton* _sentPlayButton;
	UIButton* _charEnterButton;
	UIButton* _wordEnterButton;
	UIButton* _sentEnterButton;
	NSTimer* _timerCheckAvailable;
	int _whichButtonClick;
}
@property(assign, nonatomic) __weak UIButton* charEnterButton;
@property(assign, nonatomic) __weak UIImageView* charEnterImage;
@property(assign, nonatomic) __weak UIView* charLineView;
@property(assign, nonatomic) __weak UILabel* charNumberLabel;
@property(assign, nonatomic) __weak UIButton* charPlayButton;
@property(assign, nonatomic) __weak UILabel* charPracticeLabel;
@property(assign, nonatomic) __weak UILabel* indexLabel;
@property(assign, nonatomic) __weak UIView* playLineView;
@property(assign, nonatomic) __weak UIButton* sentEnterButton;
@property(assign, nonatomic) __weak UIImageView* sentEnterImage;
@property(assign, nonatomic) __weak UIView* sentLineView;
@property(assign, nonatomic) __weak UILabel* sentNumberLabel;
@property(assign, nonatomic) __weak UIButton* sentPlayButton;
@property(assign, nonatomic) __weak UILabel* sentPracticeLabel;
@property(assign, nonatomic) __weak UIView* subtitleBGView;
@property(assign, nonatomic) __weak UILabel* subtitleLabel;
@property(assign, nonatomic) __weak UILabel* subtitleTransLabel;
@property(retain, nonatomic) NSTimer* timerCheckAvailable;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(assign) int whichButtonClick;
@property(assign, nonatomic) __weak UIButton* wordEnterButton;
@property(assign, nonatomic) __weak UIImageView* wordEnterImage;
@property(assign, nonatomic) __weak UIView* wordLineView;
@property(assign, nonatomic) __weak UILabel* wordNumberLabel;
@property(assign, nonatomic) __weak UIButton* wordPlayButton;
@property(assign, nonatomic) __weak UILabel* wordPracticeLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)InitUserData;
- (void)PlayListAudiosByType:(int)type;
- (void)ResetAllPlayer;
- (id)UpdateImageWithColor:(id)color Image:(id)image;
- (void)UpdateTimeToDisplay;
- (void)UpdateTimeToDisplayDone;
- (void)charEnterButtonClick:(id)click;
- (void)charPlayButtonClick:(id)click;
- (void)didReceiveMemoryWarning;
- (void)sentEnterButtonClick:(id)click;
- (void)sentPlayButtonClick:(id)click;
- (void)setupNavView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)wordEnterButtonClick:(id)click;
- (void)wordPlayButtonClick:(id)click;
@end

