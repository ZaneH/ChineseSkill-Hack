/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SKProductsRequestDelegate.h"

@class VerticallyAlignedLabel, NSString, MySubscribeButton, UITableView, UIActivityIndicatorView, NSIndexPath, NSArray, NSSet, UIButton, UILabel;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface UserSubscribeViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UINavigationControllerDelegate, SKProductsRequestDelegate> {
	VerticallyAlignedLabel* _LoadingStringLabel;
	UIActivityIndicatorView* _activityView;
	UIActivityIndicatorView* _restoreActivityView;
	UITableView* _mainTable;
	UIButton* _doneButton;
	UIButton* _restoreButton;
	UIButton* _applytounlockButton;
	UILabel* _PayDescription;
	id<myDelegate> _delegate;
	NSIndexPath* _lastPath;
	NSSet* _productSet;
	NSArray* _productList;
	MySubscribeButton* _currentSubscribeButton;
	int _nUnitId;
}
@property(assign, nonatomic) __weak VerticallyAlignedLabel* LoadingStringLabel;
@property(assign, nonatomic) __weak UILabel* PayDescription;
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityView;
@property(assign, nonatomic) __weak UIButton* applytounlockButton;
@property(retain, nonatomic) MySubscribeButton* currentSubscribeButton;
@property(readonly, copy) NSString* debugDescription;
@property(retain, nonatomic) id<myDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UIButton* doneButton;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSIndexPath* lastPath;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(assign) int nUnitId;
@property(retain, nonatomic) NSArray* productList;
@property(retain, nonatomic) NSSet* productSet;
@property(assign, nonatomic) __weak UIActivityIndicatorView* restoreActivityView;
@property(assign, nonatomic) __weak UIButton* restoreButton;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (void)HideRestroreActivityView;
- (void)RestoreButtonClick:(id)click;
- (void)SuccessBuyAndUpdateUI:(id)ui;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)productsRequest:(id)request didReceiveResponse:(id)response;
- (void)request:(id)request didFailWithError:(id)error;
- (void)requestDidFinish:(id)request;
- (void)requestProductData;
- (void)showErrorFeedback:(id)feedback;
- (void)subscribeItemSelected:(id)selected;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)userBuyOneProduct:(id)product;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

