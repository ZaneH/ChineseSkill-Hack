/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "ChineseSkillNew-Structs.h"

@class NSIndexPath, UIButton, NSMutableArray, NSString, UITableView;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface ChooseLanguageViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	id<myDelegate> _delegate;
	UIButton* _doneButton;
	UITableView* _mainTable;
	NSMutableArray* _allList;
	NSIndexPath* _lastPath;
	int _selectIndex;
}
@property(retain, nonatomic) NSMutableArray* allList;
@property(readonly, copy) NSString* debugDescription;
@property(retain, nonatomic) id<myDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UIButton* doneButton;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSIndexPath* lastPath;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(assign) int selectIndex;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)tableView;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

