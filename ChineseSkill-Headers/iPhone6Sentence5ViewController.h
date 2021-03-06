/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAudioPlayerDelegate.h"
#import "iPhone6DataModelViewController.h"
#import "CSScrollViewDelegate.h"

@class Model_db_sentence050, UIButton, NSMutableArray, UIMovingLabel, Model_db_sentence, UILabel, NSString, AVAudioPlayer, CSScrollView;

__attribute__((visibility("hidden")))
@interface iPhone6Sentence5ViewController : iPhone6DataModelViewController <CSScrollViewDelegate, AVAudioPlayerDelegate> {
	UILabel* _todoLabel;
	UILabel* _stemLabel;
	UIButton* _audioButton;
	UIButton* _slowaudioButton;
	UIMovingLabel* _curTouchButton;
	Model_db_sentence* _m_data;
	Model_db_sentence050* _m_model;
	NSMutableArray* _m_answerList;
	NSMutableArray* _m_randomOptionList;
	AVAudioPlayer* _m_avPlayer;
	int _nCurAnswer;
	int _nResult;
	int _playAudioCount;
	CSScrollView* _scv;
	float _maxY;
}
@property(assign, nonatomic) __weak UIButton* audioButton;
@property(retain, nonatomic) UIMovingLabel* curTouchButton;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_answerList;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) Model_db_sentence* m_data;
@property(retain, nonatomic) Model_db_sentence050* m_model;
@property(retain, nonatomic) NSMutableArray* m_randomOptionList;
@property(assign, nonatomic) float maxY;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(assign, nonatomic) int playAudioCount;
@property(retain, nonatomic) CSScrollView* scv;
@property(assign, nonatomic) __weak UIButton* slowaudioButton;
@property(assign, nonatomic) __weak UILabel* stemLabel;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UILabel* todoLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(id)button;
- (id)CheckResult;
- (void)InitModelData:(id)data Data:(id)data2;
- (void)NodeBackHomeCheck;
- (void)PlaySlowAudio;
- (void)PlayWordAudio;
- (void)ReCalculatePositions;
- (void)ReDrawOptionList;
- (void)ReOrderListNode;
- (int)RetrivalWordWidth:(id)width;
- (void)ShowOptionsView;
- (void)WordClicked:(id)clicked;
- (void)WordClickedAndBack:(id)back;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)beginTouches:(id)touches withEvent:(id)event;
- (void)cancelledtouches:(id)cancelledtouches withEvent:(id)event;
- (void)didReceiveMemoryWarning;
- (void)endedTouches:(id)touches withEvent:(id)event;
- (BOOL)isNodeInAnswerList:(id)answerList;
- (void)movedTouches:(id)touches withEvent:(id)event;
- (void)playWordSlowSound:(id)sound;
- (void)playWordSound:(id)sound;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
@end

