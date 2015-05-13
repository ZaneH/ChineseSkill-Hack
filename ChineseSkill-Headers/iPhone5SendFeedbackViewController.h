/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextViewDelegate.h"
#import "ChineseSkillNew-Structs.h"

@class NSURLConnection, NSMutableData, UIButton, NSString, UIPlaceHolderTextView, UIActivityIndicatorView, UITextField;

__attribute__((visibility("hidden")))
@interface iPhone5SendFeedbackViewController : XXUnknownSuperclass <UITextViewDelegate> {
	UIButton* _cancelButton;
	UIButton* _sendButton;
	UITextField* _emailTextFiled;
	UIPlaceHolderTextView* _feedbackTextView;
	UIActivityIndicatorView* _activityView;
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
}
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityView;
@property(retain, nonatomic) UIButton* cancelButton;
@property(retain, nonatomic) NSURLConnection* connection;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak UITextField* emailTextFiled;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(assign, nonatomic) __weak UIPlaceHolderTextView* feedbackTextView;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* sendButton;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BackButtonClick:(id)click;
- (BOOL)CheckUserEmail;
- (id)GetValueFromSettingDB:(id)settingDB;
- (void)SendButtonClick:(id)click;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)didReceiveMemoryWarning;
- (void)handleError:(id)error;
- (BOOL)isStringContainSubstring:(id)substring SUBSTRING:(id)substring2;
- (void)setupNavview;
- (void)textViewDidChange:(id)textView;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
@end

