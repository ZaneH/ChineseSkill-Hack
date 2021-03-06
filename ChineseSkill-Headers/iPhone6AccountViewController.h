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
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "iPhone6UserLoginVCDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString, UITableView, NSIndexPath, NSURLConnection, NSMutableData, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface iPhone6AccountViewController : XXUnknownSuperclass <iPhone6UserLoginVCDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
	BOOL isFullScreen;
	NSIndexPath* _lastPath;
	UITableView* _mainTable;
	UIButton* _logoutButton;
	UILabel* _infoLabel;
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
	UIImageView* _userIcon;
	UILabel* _emailLabel;
	UIButton* _uploadBtn;
}
@property(retain, nonatomic) NSURLConnection* connection;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UILabel* emailLabel;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UILabel* infoLabel;
@property(retain, nonatomic) NSIndexPath* lastPath;
@property(assign, nonatomic) __weak UIButton* logoutButton;
@property(assign, nonatomic) __weak UITableView* mainTable;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) UIButton* uploadBtn;
@property(retain, nonatomic) UIImageView* userIcon;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (id)GetValueFromSettingDB:(id)settingDB;
- (void)LogoutClick:(id)click;
- (void)RetrivalStudyProgressFromSiteSuccess;
- (void)UploadProgressToSite:(id)site;
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
- (void)backBarBtnClicked;
- (void)configureCell:(id)cell forIndexPath:(id)indexPath;
- (void)didReceiveMemoryWarning;
- (void)dismissSelf;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)imagePickerController;
- (void)loginSuccess;
- (int)numberOfSectionsInTableView:(id)tableView;
- (BOOL)prefersStatusBarHidden;
- (void)resetPassword:(id)password;
- (void)saveImage:(id)image withName:(id)name;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)uploadProgressSuccess;
- (void)userIconTaped;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end

