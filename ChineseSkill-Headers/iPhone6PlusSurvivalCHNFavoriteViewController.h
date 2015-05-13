/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAudioPlayerDelegate.h"
#import "ChineseSkillNew-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVAudioRecorderDelegate.h"

@class UIImageView, AVAudioPlayer, NSString, UIView, UITableView, NSURL, Model_db_survival_item, AVAudioRecorder, UIButton, NSMutableArray, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface iPhone6PlusSurvivalCHNFavoriteViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, AVAudioRecorderDelegate, AVAudioPlayerDelegate> {
	bool _isRecording;
	bool _isNewRecordSound;
	bool _hasRecord;
	bool _isLoopStatus;
	bool _isByNaviPop;
	BOOL _waitingPlay;
	UITableView* _mainTable;
	UILabel* _HeadTitleLabel;
	UIView* _curSentenceViewPanel;
	UILabel* _curSentenceContentLabel;
	UILabel* _curSentencePinyinLabel;
	UILabel* _curSentenceTranslationLabel;
	UIButton* _recordUserButton;
	UIButton* _playButton;
	UIButton* _LoopButton;
	UIImageView* _headView;
	UIButton* _slowBtn;
	UILabel* _titleLabel;
	int _cid;
	NSString* _unitName;
	NSMutableArray* _allList;
	NSTimer* _timer;
	int _recordEncoding;
	int _AuidoPlayStatus;
	AVAudioRecorder* _m_recorder;
	AVAudioPlayer* _m_avPlayer;
	NSURL* _m_CSLPODAudioPath;
	NSURL* _m_RecordAuidoPath;
	Model_db_survival_item* _pCurSentence;
	int _nCurSentenceIndex;
	NSMutableArray* _colorArray;
}
@property(assign, nonatomic) int AuidoPlayStatus;
@property(assign, nonatomic) __weak UILabel* HeadTitleLabel;
@property(assign, nonatomic) __weak UIButton* LoopButton;
@property(retain, nonatomic) NSMutableArray* allList;
@property(assign, nonatomic) int cid;
@property(retain, nonatomic) NSMutableArray* colorArray;
@property(assign, nonatomic) __weak UILabel* curSentenceContentLabel;
@property(assign, nonatomic) __weak UILabel* curSentencePinyinLabel;
@property(assign, nonatomic) __weak UILabel* curSentenceTranslationLabel;
@property(assign, nonatomic) __weak UIView* curSentenceViewPanel;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) bool hasRecord;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIImageView* headView;
@property(assign, nonatomic) bool isByNaviPop;
@property(assign, nonatomic) bool isLoopStatus;
@property(assign, nonatomic) bool isNewRecordSound;
@property(assign, nonatomic) bool isRecording;
@property(retain, nonatomic) NSURL* m_CSLPODAudioPath;
@property(retain, nonatomic) NSURL* m_RecordAuidoPath;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) AVAudioRecorder* m_recorder;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(assign, nonatomic) int nCurSentenceIndex;
@property(retain, nonatomic) Model_db_survival_item* pCurSentence;
@property(assign, nonatomic) __weak UIButton* playButton;
@property(assign, nonatomic) int recordEncoding;
@property(assign, nonatomic) __weak UIButton* recordUserButton;
@property(assign, nonatomic) __weak UIButton* slowBtn;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(copy, nonatomic) NSString* unitName;
@property(assign, nonatomic) BOOL waitingPlay;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)BeginPlayCSLPODAuido;
- (void)BeginPlayRecordAudio;
- (void)BuildUpCurrentModel;
- (void)InitRecordUserSoundData;
- (BOOL)IsFileExistWithSentenceId:(int)sentenceId;
- (void)LeavePageActionCalled;
- (void)LoopPlayButtonClick:(id)click;
- (void)PlayButtonClick:(id)click;
- (void)ReleaseDelegateReference;
- (void)SetupRecorder;
- (void)StopAnyAudioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (id)compare:(id)compare;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (void)dealloc;
- (void)detectionVoice;
- (void)didReceiveMemoryWarning;
- (void)favoriteBtnClicked:(id)clicked;
- (id)getColorWithSectionIndex:(int)sectionIndex;
- (void)recordButtonDragUp:(id)up;
- (void)recordButtonUp:(id)up;
- (void)reloadMainTable;
- (void)setPlayerButtonStatus;
- (void)slowBtn:(id)btn;
- (void)stopAudioRecorder;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)updateImage;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)view;
@end

