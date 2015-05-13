/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "iPhone4DataModelViewController.h"

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface iPhone4RedoReviewViewController : iPhone4DataModelViewController {
	UILabel* _titleLabel;
	UILabel* _inforLabel;
	UIButton* _quitButton;
	UIButton* _characterReviewButton;
	UIButton* _wordReviewButton;
	UIButton* _sentenceReviewButton;
	UIButton* _characterLabelButton;
	UIButton* _wordLabelButton;
	UIButton* _sentenceLabelButton;
	int _nLessonId;
}
@property(assign, nonatomic) __weak UIButton* characterLabelButton;
@property(assign, nonatomic) __weak UIButton* characterReviewButton;
@property(assign, nonatomic) __weak UILabel* inforLabel;
@property(assign) int nLessonId;
@property(assign, nonatomic) __weak UIButton* quitButton;
@property(assign, nonatomic) __weak UIButton* sentenceLabelButton;
@property(assign, nonatomic) __weak UIButton* sentenceReviewButton;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(assign, nonatomic) __weak UIButton* wordLabelButton;
@property(assign, nonatomic) __weak UIButton* wordReviewButton;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)UpdateInforLabel;
- (void)characterReviewButtonClick:(id)click;
- (void)didReceiveMemoryWarning;
- (void)quitButtonClick:(id)click;
- (void)sentenceReviewButtonClick:(id)click;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)wordReviewButtonClick:(id)click;
@end

