/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DataModelViewController.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface PassStrengthenSkillViewController : DataModelViewController {
	UILabel* _inforLabel;
	int _nLevelId;
	int _nLastLessonId;
}
@property(assign, nonatomic) __weak UILabel* inforLabel;
@property(assign) int nLastLessonId;
@property(assign) int nLevelId;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)UpdateInforLabel;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@end

