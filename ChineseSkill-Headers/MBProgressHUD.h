/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UILabel, NSString, UIFont, UIColor, UIView, NSDate;
@protocol MBProgressHUDDelegate;

@interface MBProgressHUD : XXUnknownSuperclass {
	BOOL useAnimation;
	SEL methodForExecution;
	id targetForExecution;
	id objectForExecution;
	UILabel* label;
	UILabel* detailsLabel;
	BOOL isFinished;
	CGAffineTransform rotationTransform;
	BOOL square;
	BOOL dimBackground;
	BOOL taskInProgress;
	BOOL removeFromSuperViewOnHide;
	int animationType;
	id<MBProgressHUDDelegate> delegate;
	float opacity;
	UIColor* color;
	UIFont* labelFont;
	UIColor* labelColor;
	UIFont* detailsLabelFont;
	UIColor* detailsLabelColor;
	UIView* indicator;
	float xOffset;
	float yOffset;
	float margin;
	float graceTime;
	float minShowTime;
	NSTimer* graceTimer;
	NSTimer* minShowTimer;
	UIView* customView;
	NSDate* showStarted;
	int mode;
	NSString* labelText;
	NSString* detailsLabelText;
	float progress;
	UIColor* activityIndicatorColor;
	id completionBlock;
	float _cornerRadius;
	CGSize minSize;
	CGSize size;
}
@property(retain) UIColor* activityIndicatorColor;
@property(assign) int animationType;
@property(retain) UIColor* color;
@property(copy) id completionBlock;
@property(assign) float cornerRadius;
@property(retain) UIView* customView;
@property(assign) __weak id<MBProgressHUDDelegate> delegate;
@property(retain) UIColor* detailsLabelColor;
@property(retain) UIFont* detailsLabelFont;
@property(copy) NSString* detailsLabelText;
@property(assign) BOOL dimBackground;
@property(assign) float graceTime;
@property(retain) NSTimer* graceTimer;
@property(retain) UIView* indicator;
@property(retain) UIColor* labelColor;
@property(retain) UIFont* labelFont;
@property(copy) NSString* labelText;
@property(assign) float margin;
@property(assign) float minShowTime;
@property(retain) NSTimer* minShowTimer;
@property(assign) CGSize minSize;
@property(assign) int mode;
@property(assign) float opacity;
@property(assign) float progress;
@property(assign) BOOL removeFromSuperViewOnHide;
@property(retain) NSDate* showStarted;
@property(readonly, assign) CGSize size;
@property(assign, getter=isSquare) BOOL square;
@property(assign) BOOL taskInProgress;
@property(assign) float xOffset;
@property(assign) float yOffset;
+ (id)HUDForView:(id)view;
+ (id)allHUDsForView:(id)view;
+ (unsigned)hideAllHUDsForView:(id)view animated:(BOOL)animated;
+ (BOOL)hideHUDForView:(id)view animated:(BOOL)animated;
+ (id)showHUDAddedTo:(id)to animated:(BOOL)animated;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithView:(id)view;
- (id)initWithWindow:(id)window;
- (void).cxx_destruct;
- (void)animationFinished:(id)finished finished:(BOOL)finished2 context:(void*)context;
- (void)cleanUp;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)done;
- (void)drawRect:(CGRect)rect;
- (void)handleGraceTimer:(id)timer;
- (void)handleMinShowTimer:(id)timer;
- (void)hide:(BOOL)hide;
- (void)hide:(BOOL)hide afterDelay:(double)delay;
- (void)hideDelayed:(id)delayed;
- (void)hideUsingAnimation:(BOOL)animation;
- (void)launchExecution;
- (void)layoutSubviews;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
- (void)registerForKVO;
- (void)registerForNotifications;
- (void)setTransformForCurrentOrientation:(BOOL)currentOrientation;
- (void)setupLabels;
- (BOOL)shouldPerformOrientationTransform;
- (void)show:(BOOL)show;
- (void)showAnimated:(BOOL)animated whileExecutingBlock:(id)block;
- (void)showAnimated:(BOOL)animated whileExecutingBlock:(id)block completionBlock:(id)block3;
- (void)showAnimated:(BOOL)animated whileExecutingBlock:(id)block onQueue:(dispatch_queue_s*)queue;
- (void)showAnimated:(BOOL)animated whileExecutingBlock:(id)block onQueue:(dispatch_queue_s*)queue completionBlock:(id)block4;
- (void)showUsingAnimation:(BOOL)animation;
- (void)showWhileExecuting:(SEL)executing onTarget:(id)target withObject:(id)object animated:(BOOL)animated;
- (void)statusBarOrientationDidChange:(id)statusBarOrientation;
- (void)unregisterFromKVO;
- (void)unregisterFromNotifications;
- (void)updateIndicators;
- (void)updateUIForKeypath:(id)keypath;
@end
