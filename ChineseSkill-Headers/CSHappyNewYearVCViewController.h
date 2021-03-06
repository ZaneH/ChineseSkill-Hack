/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UIScrollViewDelegate.h"
#import "CSNavigationViewDelegate.h"
#import "CSHappyNewYearDorpDownMenuDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "CSHappyNewWriteSthDelegate.h"
#import "CSMailSendTextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString, CSHappyNewYearDropDownMenu, UIButton, CSHappyNewWriteSth, STTwitterAPI, UIPageControl, NSMutableArray, CSMailSendTextFieldView, UIScrollView;

__attribute__((visibility("hidden")))
@interface CSHappyNewYearVCViewController : XXUnknownSuperclass <CSNavigationViewDelegate, UIScrollViewDelegate, CSHappyNewYearDorpDownMenuDelegate, MFMailComposeViewControllerDelegate, CSHappyNewWriteSthDelegate, CSMailSendTextFieldDelegate> {
	STTwitterAPI* _twitter;
	UIButton* _writeSomeThingBtn;
	UIButton* _shareTypeBtn;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	UIImageView* _BGImageView;
	CSHappyNewYearDropDownMenu* _dropDownMenu;
	CSHappyNewWriteSth* _writeSthView;
	NSMutableArray* _labelMA;
	NSMutableArray* _imageViewMA;
	CSMailSendTextFieldView* _mailSendTextFieldView;
}
@property(assign, nonatomic) __weak UIImageView* BGImageView;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) CSHappyNewYearDropDownMenu* dropDownMenu;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* imageViewMA;
@property(retain, nonatomic) NSMutableArray* labelMA;
@property(retain, nonatomic) CSMailSendTextFieldView* mailSendTextFieldView;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(assign, nonatomic) __weak UIScrollView* scrollView;
@property(retain, nonatomic) UIButton* shareTypeBtn;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) STTwitterAPI* twitter;
@property(retain, nonatomic) UIButton* writeSomeThingBtn;
@property(retain, nonatomic) CSHappyNewWriteSth* writeSthView;
- (void).cxx_destruct;
- (void)alertImageSaved;
- (void)clickDropDownMenuBtn:(id)btn;
- (void)clickWriteSomething:(id)something;
- (void)clickedMailConfirmBtnWithSender:(id)sender Reciever:(id)reciever;
- (void)didSelectedShareType:(id)type;
- (void)finishWriting:(id)writing;
- (id)getFBOpenGraphObject;
- (id)getcurrentShareImage;
- (void)image:(id)image didFinishSavingWithError:(id)error contextInfo:(void*)info;
- (void)leftNavBtnClicked;
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
- (void)performPublishAction:(id)action;
- (void)publishPhoto:(id)photo;
- (void)saveImageToPhotoAlbum;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)setupBGImageView;
- (void)setupSubview;
- (void)shareToEmail;
- (void)shareToFacebook;
- (void)shareToTwitter;
- (void)showAlert:(id)alert result:(id)result error:(id)error;
- (void)showSendAlert;
- (void)useSystemMethodToShareText:(id)shareText withSNSType:(id)snstype Image:(id)image;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@end

