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

@class UIImageView, NSString, AVAudioPlayer, UIView, UITableView, NSURL, NSIndexPath, AVAudioRecorder, UIButton, NSMutableArray, NSTimer, UILabel, Model_characterreview;

__attribute__((visibility("hidden")))
@interface MyCharacterViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, AVAudioRecorderDelegate, AVAudioPlayerDelegate> {
	bool _isRecording;
	bool _isNewRecordSound;
	bool _hasRecord;
	bool _isLoopStatus;
	UIButton* _doneButton;
	UITableView* _mainTable;
	NSMutableArray* _allList;
	NSIndexPath* _lastPath;
	int _selectIndex;
	UIView* _curWordViewPanel;
	UILabel* _curWordContentLabel;
	UILabel* _curWordPinyinLabel;
	UILabel* _curWordTranslationLabel;
	UIView* _curWordImageContainer;
	UIButton* _recordUserButton;
	UIButton* _nextButton;
	UIButton* _prevButton;
	UIButton* _playButton;
	UIButton* _LoopButton;
	UIImageView* _geshiImageView;
	Model_characterreview* _pCurWord;
	int _nCurWordIndex;
	AVAudioRecorder* _m_recorder;
	AVAudioPlayer* _m_avPlayer;
	NSURL* _m_CSLPODAudioPath;
	NSURL* _m_RecordAuidoPath;
	NSTimer* _timer;
	int _recordEncoding;
	int _AuidoPlayStatus;
	int _nLessonId;
	NSTimer* _tableViewTimer;
}
@property(assign) int AuidoPlayStatus;
@property(assign, nonatomic) __weak UIButton* LoopButton;
@property(retain, nonatomic) NSMutableArray* allList;
@property(assign, nonatomic) __weak UILabel* curWordContentLabel;
@property(assign, nonatomic) __weak UIView* curWordImageContainer;
@property(assign, nonatomic) __weak UILabel* curWordPinyinLabel;
@property(assign, nonatomic) __weak UILabel* curWordTranslationLabel;
@property(assign, nonatomic) __weak UIView* curWordViewPanel;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UIButton* doneButton;
@property(assign, nonatomic) __weak UIImageView* geshiImageView;
@property(assign) bool hasRecord;
@property(readonly, assign) unsigned hash;
@property(assign) bool isLoopStatus;
@property(assign) bool isNewRecordSound;
@property(assign) bool isRecording;
@property(retain, nonatomic) NSIndexPath* lastPath;
@property(retain, nonatomic) NSURL* m_CSLPODAudioPath;
@property(retain, nonatomic) NSURL* m_RecordAuidoPath;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) AVAudioRecorder* m_recorder;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(assign) int nCurWordIndex;
@property(assign) int nLessonId;
@property(assign, nonatomic) __weak UIButton* nextButton;
@property(retain, nonatomic) Model_characterreview* pCurWord;
@property(assign, nonatomic) __weak UIButton* playButton;
@property(assign, nonatomic) __weak UIButton* prevButton;
@property(assign) int recordEncoding;
@property(assign, nonatomic) __weak UIButton* recordUserButton;
@property(assign) int selectIndex;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSTimer* tableViewTimer;
@property(retain, nonatomic) NSTimer* timer;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)BeginPlayCSLPODAuido;
- (void)BeginPlayRecordAudio;
- (void)BuildUpCurrentModel;
- (id)BuilderOneDownloadParam:(int)param DirCode:(id)code;
- (void)InitRecordUserSoundData;
- (BOOL)IsFileExist:(id)exist;
- (void)LeavePageActionCalled;
- (void)LoadDataFromDB;
- (void)LoopPlayButtonClick:(id)click;
- (void)PlayButtonClick:(id)click;
- (void)ReleaseDelegateReference;
- (void)SetupRecorder;
- (void)StopAnyAudioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (void)dealloc;
- (void)detectionVoice;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)recordButtonDragUp:(id)up;
- (void)recordButtonUp:(id)up;
- (void)reloadMainTable;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)updateImage;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

