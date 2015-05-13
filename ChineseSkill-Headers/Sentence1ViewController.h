/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import "AVAudioPlayerDelegate.h"
#import "myDelegate.h"
#import "DataModelViewController.h"

@class UIPopoverController, LingoCheckBoxView, UIButton, WordExplainPoperViewController, Model_db_sentence, UILabel, NSString, UIScrollView, AVAudioPlayer, Model_db_sentence010, WordPoperViewController;

__attribute__((visibility("hidden")))
@interface Sentence1ViewController : DataModelViewController <UIPopoverControllerDelegate, AVAudioPlayerDelegate, myDelegate> {
	UILabel* _todoLabel;
	UIScrollView* _titlePanel;
	UIButton* _audioButton;
	UIButton* _slowaudioButton;
	LingoCheckBoxView* _option1CheckBox;
	LingoCheckBoxView* _option2CheckBox;
	LingoCheckBoxView* _option3CheckBox;
	LingoCheckBoxView* _option4CheckBox;
	Model_db_sentence* _m_data;
	Model_db_sentence010* _m_model;
	UIPopoverController* _m_popoverController;
	WordPoperViewController* _wordExplainPoper;
	WordExplainPoperViewController* _wordExplainDetailPoper;
	AVAudioPlayer* _m_avPlayer;
	int _nCurAnswer;
	int _nResult;
	int _playAudioCount;
}
@property(assign, nonatomic) __weak UIButton* audioButton;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) Model_db_sentence* m_data;
@property(retain, nonatomic) Model_db_sentence010* m_model;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(retain, nonatomic) LingoCheckBoxView* option1CheckBox;
@property(retain, nonatomic) LingoCheckBoxView* option2CheckBox;
@property(retain, nonatomic) LingoCheckBoxView* option3CheckBox;
@property(retain, nonatomic) LingoCheckBoxView* option4CheckBox;
@property(assign, nonatomic) int playAudioCount;
@property(assign, nonatomic) __weak UIButton* slowaudioButton;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UIScrollView* titlePanel;
@property(assign, nonatomic) __weak UILabel* todoLabel;
@property(retain, nonatomic) WordExplainPoperViewController* wordExplainDetailPoper;
@property(retain, nonatomic) WordPoperViewController* wordExplainPoper;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(BOOL)button;
- (id)CheckResult;
- (void)ClosePopupView:(id)view;
- (void)InitModelData:(id)data Data:(id)data2;
- (void)InitStemButtons0;
- (void)InitStemButtons1;
- (void)InitStemButtons2;
- (void)PlaySlowAudio;
- (void)PlayWordAudio;
- (void)PopupWordExplainView:(id)view;
- (void)ReleaseDelegateReference;
- (int)RetrivalWordWidth:(id)width;
- (void)UpdateCheckBoxStatus:(id)status;
- (void)UpdateCheckBoxStatusAfterChecked:(BOOL)checked;
- (void)WordClicked:(id)clicked;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)checkBoxViewChangedState:(id)state;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)playWordSlowSound:(id)sound;
- (void)playWordSound:(id)sound;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

