/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DataModelViewController.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface TestOutPassViewController : DataModelViewController {
	UILabel* _inforLabel;
	int _nCurGlobleIndex;
}
@property(assign, nonatomic) __weak UILabel* inforLabel;
@property(assign) int nCurGlobleIndex;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)UpdateInfor;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end
