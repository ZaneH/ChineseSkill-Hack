/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAudioPlayerDelegate.h"
#import "DataModelViewController.h"

@class Model_db_word010, Model_db_word, NSMutableDictionary, NSTimer, UILabel, NSString, LingoImageCheckBoxView;

__attribute__((visibility("hidden")))
@interface WordModel1ViewController : DataModelViewController <AVAudioPlayerDelegate> {
	UILabel* _todoLabel;
	UILabel* _translationLabel;
	LingoImageCheckBoxView* _option1CheckBox;
	LingoImageCheckBoxView* _option2CheckBox;
	LingoImageCheckBoxView* _option3CheckBox;
	LingoImageCheckBoxView* _option4CheckBox;
	Model_db_word* _m_data;
	Model_db_word010* _m_model;
	int _nCurAnswer;
	int _nResult;
	NSMutableDictionary* _imageNameMDict;
	NSTimer* _timer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* imageNameMDict;
@property(retain, nonatomic) Model_db_word* m_data;
@property(retain, nonatomic) Model_db_word010* m_model;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(retain, nonatomic) LingoImageCheckBoxView* option1CheckBox;
@property(retain, nonatomic) LingoImageCheckBoxView* option2CheckBox;
@property(retain, nonatomic) LingoImageCheckBoxView* option3CheckBox;
@property(retain, nonatomic) LingoImageCheckBoxView* option4CheckBox;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) __weak UILabel* todoLabel;
@property(assign, nonatomic) __weak UILabel* translationLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(BOOL)button;
- (id)CheckResult;
- (void)InitModelData:(id)data Data:(id)data2;
- (void)ReleaseDelegateReference;
- (void)UpdateCheckBoxStatus:(id)status;
- (void)UpdateCheckBoxStatusAfterChecked:(BOOL)checked;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)checkAndCopyPicture:(id)picture;
- (void)checkBoxViewChangedState:(id)state;
- (BOOL)checkFileDirectoryAndCreateItsDirectoryIfNotExist:(id)exist;
- (void)didReceiveMemoryWarning;
- (void)updateOptionImage;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

