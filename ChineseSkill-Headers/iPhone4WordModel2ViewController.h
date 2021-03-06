/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "iPhone4DataModelViewController.h"

@class UILabel, Model_db_word020, iPhone4LingoCheckBoxView, Model_db_word;

__attribute__((visibility("hidden")))
@interface iPhone4WordModel2ViewController : iPhone4DataModelViewController {
	UILabel* _todoLabel;
	UILabel* _translationLabel;
	iPhone4LingoCheckBoxView* _option1CheckBox;
	iPhone4LingoCheckBoxView* _option2CheckBox;
	iPhone4LingoCheckBoxView* _option3CheckBox;
	iPhone4LingoCheckBoxView* _option4CheckBox;
	Model_db_word* _m_data;
	Model_db_word020* _m_model;
	int _nCurAnswer;
	int _nResult;
}
@property(retain, nonatomic) Model_db_word* m_data;
@property(retain, nonatomic) Model_db_word020* m_model;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(retain, nonatomic) iPhone4LingoCheckBoxView* option1CheckBox;
@property(retain, nonatomic) iPhone4LingoCheckBoxView* option2CheckBox;
@property(retain, nonatomic) iPhone4LingoCheckBoxView* option3CheckBox;
@property(retain, nonatomic) iPhone4LingoCheckBoxView* option4CheckBox;
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
- (void)checkBoxViewChangedState:(id)state;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

