/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBGraphObjectSelectionChangedDelegate.h"
#import "FBGraphObjectViewControllerDelegate.h"
#import "FBViewController.h"
#import "FBGraphObjectPagingLoaderDelegate.h"

@class FBGraphObjectPagingLoader, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, NSArray, NSSet, NSString, FBSession, UITableView, UIActivityIndicatorView;

@interface FBFriendPickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectViewControllerDelegate, FBGraphObjectPagingLoaderDelegate> {
	BOOL _allowsMultipleSelection;
	BOOL _trackActiveSession;
	UIActivityIndicatorView* _spinner;
	UITableView* _tableView;
	NSSet* _fieldsForRequest;
	FBSession* _session;
	NSString* _userID;
	unsigned _sortOrdering;
	unsigned _displayOrdering;
	FBGraphObjectTableDataSource* _dataSource;
	FBGraphObjectTableSelection* _selectionManager;
	FBGraphObjectPagingLoader* _loader;
}
@property(assign, nonatomic) BOOL allowsMultipleSelection;
@property(retain, nonatomic) FBGraphObjectTableDataSource* dataSource;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) unsigned displayOrdering;
@property(copy, nonatomic) NSSet* fieldsForRequest;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL itemPicturesEnabled;
@property(retain, nonatomic) FBGraphObjectPagingLoader* loader;
@property(copy, nonatomic) NSArray* selection;
@property(retain, nonatomic) FBGraphObjectTableSelection* selectionManager;
@property(retain, nonatomic) FBSession* session;
@property(assign, nonatomic) unsigned sortOrdering;
@property(retain, nonatomic) UIActivityIndicatorView* spinner;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) UITableView* tableView;
@property(assign, nonatomic) BOOL trackActiveSession;
@property(copy, nonatomic) NSString* userID;
+ (id)cacheDescriptor;
+ (id)cacheDescriptorWithUserID:(id)userID fieldsForRequest:(id)request;
+ (id)requestWithUserID:(id)userID fields:(id)fields dataSource:(id)source session:(id)session;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)addSessionObserver:(id)observer;
- (void)centerAndStartSpinner;
- (void)clearData;
- (void)clearSelection;
- (void)configureUsingCachedDescriptor:(id)descriptor;
- (void)dealloc;
- (void)graphObjectTableDataSource:(id)source customizeTableCell:(id)cell;
- (BOOL)graphObjectTableDataSource:(id)source filterIncludesItem:(id)item;
- (id)graphObjectTableDataSource:(id)source pictureUrlOfItem:(id)item;
- (id)graphObjectTableDataSource:(id)source titleOfItem:(id)item;
- (id)graphObjectTableDataSource:(id)source titleSuffixOfItem:(id)item;
- (void)graphObjectTableSelectionDidChange:(id)graphObjectTableSelection;
- (void)initialize;
- (void)loadData;
- (void)loadDataSkippingRoundTripIfCached:(id)cached;
- (void)logAppEvents:(BOOL)events;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
- (void)pagingLoader:(id)loader didLoadData:(id)data;
- (void)pagingLoader:(id)loader handleError:(id)error;
- (void)pagingLoader:(id)loader willLoadURL:(id)url;
- (void)pagingLoaderDidFinishLoading:(id)pagingLoader;
- (void)pagingLoaderWasCancelled:(id)cancelled;
- (void)removeSessionObserver:(id)observer;
- (id)requestForLoadData;
- (void)updateView;
- (void)viewDidLoad;
- (void)viewDidUnload;
@end

