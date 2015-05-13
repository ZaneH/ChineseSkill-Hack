/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "iPhone4DataModelViewController.h"
#import "AVAudioPlayerDelegate.h"
#import "UITextViewDelegate.h"

@class UIButton, Model_db_sentence, UILabel, NSString, UIImageView, AVAudioPlayer, Model_db_sentence060, UIWriteChineseSentenceTextView;

__attribute__((visibility("hidden")))
@interface iPhone4Sentence6ViewController : iPhone4DataModelViewController <AVAudioPlayerDelegate, UITextViewDelegate> {
	BOOL _keyboardIsShown;
	UILabel* _todoLabel;
	UILabel* _stemLabel;
	UIButton* _audioButton;
	UIButton* _slowaudioButton;
	UIWriteChineseSentenceTextView* _answerTextView;
	UIImageView* _answerTextBGView;
	UILabel* _informationLabel;
	Model_db_sentence* _m_data;
	Model_db_sentence060* _m_model;
	AVAudioPlayer* _m_avPlayer;
	int _nCurAnswer;
	int _nResult;
	int _screenOrientation;
	int _interfaceorientation;
	int _playAudioCount;
}
@property(assign, nonatomic) __weak UIImageView* answerTextBGView;
@property(assign, nonatomic) __weak UIWriteChineseSentenceTextView* answerTextView;
@property(assign, nonatomic) __weak UIButton* audioButton;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UILabel* informationLabel;
@property(assign) int interfaceorientation;
@property(assign) BOOL keyboardIsShown;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) Model_db_sentence* m_data;
@property(retain, nonatomic) Model_db_sentence060* m_model;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(assign, nonatomic) int playAudioCount;
@property(assign) int screenOrientation;
@property(assign, nonatomic) __weak UIButton* slowaudioButton;
@property(assign, nonatomic) __weak UILabel* stemLabel;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UILabel* todoLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(id)button;
- (id)CheckResult;
- (void)InitModelData:(id)data Data:(id)data2;
- (void)PlaySlowAudio;
- (void)PlayWordAudio;
- (id)ReplacePinyinTangue:(id)tangue;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)didReceiveMemoryWarning;
- (void)hide:(id)hide;
- (CGSize)keyboardSize:(id)size;
- (void)keyboardWillHide:(id)keyboard;
- (void)keyboardWillShow:(id)keyboard;
- (void)playWordSlowSound:(id)sound;
- (void)playWordSound:(id)sound;
- (void)textViewDidChange:(id)textView;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewDidUnload;
@end

