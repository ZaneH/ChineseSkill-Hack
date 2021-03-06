/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class NSString, UIView, UIActivityIndicatorView, NSURL, FBFrictionlessRequestSettings, UIButton, NSMutableDictionary, UIWebView;
@protocol FBDialogDelegate;

@interface FBDialog : XXUnknownSuperclass <UIWebViewDelegate> {
	id<FBDialogDelegate> _delegate;
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIButton* _closeButton;
	int _orientation;
	BOOL _showingKeyboard;
	BOOL _isViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;
	UIView* _modalBackgroundView;
	BOOL _everShown;
}
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) id<FBDialogDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* params;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithURL:(id)url params:(id)params isViewInvisible:(BOOL)invisible frictionlessSettings:(id)settings delegate:(id)delegate;
- (void)addObservers;
- (void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (void)cancel;
- (void)dealloc;
- (void)deviceOrientationDidChange:(void*)deviceOrientation;
- (void)dialogDidCancel:(id)dialog;
- (void)dialogDidSucceed:(id)dialog;
- (void)dialogSuccessHandleFrictionlessResponses:(id)responses;
- (void)dialogWillAppear;
- (void)dialogWillDisappear;
- (void)dismiss:(BOOL)dismiss;
- (void)dismissWithError:(id)error animated:(BOOL)animated;
- (void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
- (void)drawRect:(CGRect)rect;
- (void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
- (id)generateURL:(id)url params:(id)params;
- (id)getStringFromUrl:(id)url needle:(id)needle;
- (void)hideSpinner;
- (void)keyboardWillHide:(id)keyboard;
- (void)keyboardWillShow:(id)keyboard;
- (void)load;
- (void)loadURL:(id)url get:(id)get;
- (void)postDismissCleanup;
- (void)removeObservers;
- (BOOL)shouldRotateToOrientation:(int)orientation;
- (void)show;
- (void)showSpinner;
- (void)showWebView;
- (void)sizeToFitOrientation:(BOOL)fitOrientation;
- (void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
- (BOOL)testBoolUrlParam:(id)param param:(id)param2;
- (CGAffineTransform)transformForOrientation;
- (void)updateWebOrientation;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
@end

