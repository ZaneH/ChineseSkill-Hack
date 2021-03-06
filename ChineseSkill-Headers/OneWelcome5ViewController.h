/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OneWelcomeBaseViewController.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface OneWelcome5ViewController : OneWelcomeBaseViewController {
	UIButton* _CreateAccountButton;
	UIButton* _SignInButton;
	UIButton* _FBLoginButton;
}
@property(assign, nonatomic) __weak UIButton* CreateAccountButton;
@property(assign, nonatomic) __weak UIButton* FBLoginButton;
@property(assign, nonatomic) __weak UIButton* SignInButton;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)CreateAccount:(id)account;
- (void)SignIn:(id)anIn;
- (void)SignInWithFacebook:(id)facebook;
- (void)didReceiveMemoryWarning;
- (void)setAndShowData:(int)data;
- (void)viewDidLoad;
@end

