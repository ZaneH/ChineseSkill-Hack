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

@class UIButton, NSMutableArray, NSTimer, NSString, UIScrollView, UIImageView, UIView, UITableView;

__attribute__((visibility("hidden")))
@interface iPhone5SurvivalCategoryViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	UIScrollView* _scrollView;
	NSMutableArray* _modelArray;
	UIView* _hudView;
	NSTimer* _timer;
	UITableView* _tableView;
	UIImageView* _headerImage;
	UIButton* _favoriteBtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UIButton* favoriteBtn;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIImageView* headerImage;
@property(retain, nonatomic) UIView* hudView;
@property(retain, nonatomic) NSMutableArray* modelArray;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) NSTimer* timer;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)EnterOneLesson:(id)lesson;
- (void)backBtnBeClicked:(id)clicked;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (void)favoriteNavBtnClicked:(id)clicked;
- (void)setupTableView;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)updateProgress;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

