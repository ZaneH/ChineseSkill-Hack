/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChineseSkillNew-Structs.h"
#import "UITextFieldDelegate.h"

@class NSURLConnection, NSMutableData, UIButton, UILabel, NSString, UIActivityIndicatorView, UITextField;

__attribute__((visibility("hidden")))
@interface InviteByEmailViewController : XXUnknownSuperclass <UITextFieldDelegate> {
	UIButton* _closeButton;
	UIButton* _sendButton;
	UITextField* _MyEmailTextField;
	UITextField* _EmailTextField;
	UILabel* _inforLabel;
	UIActivityIndicatorView* _activityView;
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
}
@property(assign, nonatomic) __weak UITextField* EmailTextField;
@property(assign, nonatomic) __weak UITextField* MyEmailTextField;
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityView;
@property(assign, nonatomic) __weak UIButton* closeButton;
@property(retain, nonatomic) NSURLConnection* connection;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UILabel* inforLabel;
@property(assign, nonatomic) __weak UIButton* sendButton;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)closeClick:(id)click;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)didReceiveMemoryWarning;
- (void)handleError:(id)error;
- (BOOL)isStringContainSubstring:(id)substring SUBSTRING:(id)substring2;
- (void)sendClick:(id)click;
- (void)textFieldValueChangedCheck;
- (void)viewDidLoad;
@end
