/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "iPhonePlusDataModelViewController.h"

@class UILabel, Model_db_word020, iPhonePlusLingoCheckBoxView, Model_db_word;

__attribute__((visibility("hidden")))
@interface iPhonePlusWordModel2ViewController : iPhonePlusDataModelViewController {
	UILabel* _todoLabel;
	UILabel* _translationLabel;
	iPhonePlusLingoCheckBoxView* _option1CheckBox;
	iPhonePlusLingoCheckBoxView* _option2CheckBox;
	iPhonePlusLingoCheckBoxView* _option3CheckBox;
	iPhonePlusLingoCheckBoxView* _option4CheckBox;
	Model_db_word* _m_data;
	Model_db_word020* _m_model;
	int _nCurAnswer;
	int _nResult;
}
@property(retain, nonatomic) Model_db_word* m_data;
@property(retain, nonatomic) Model_db_word020* m_model;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(retain, nonatomic) iPhonePlusLingoCheckBoxView* option1CheckBox;
@property(retain, nonatomic) iPhonePlusLingoCheckBoxView* option2CheckBox;
@property(retain, nonatomic) iPhonePlusLingoCheckBoxView* option3CheckBox;
@property(retain, nonatomic) iPhonePlusLingoCheckBoxView* option4CheckBox;
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
