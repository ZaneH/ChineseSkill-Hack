/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol myDelegate;

__attribute__((visibility("hidden")))
@interface iPhone6DataModelViewController : XXUnknownSuperclass {
	BOOL _isTestOutModel;
	BOOL _isChecked;
	id<myDelegate> _delegate;
	int _nWordSentenceType;
	int _nWordSentenceId;
	int _nModelType;
	int _nModelId;
	NSString* _userAnswer;
}
@property(retain, nonatomic) id<myDelegate> delegate;
@property(assign) BOOL isChecked;
@property(assign) BOOL isTestOutModel;
@property(assign) int nModelId;
@property(assign) int nModelType;
@property(assign) int nWordSentenceId;
@property(assign) int nWordSentenceType;
@property(retain, nonatomic) NSString* userAnswer;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (id)CheckResult;
- (id)RetrivalCharCorrectResultImageView;
- (void)didReceiveMemoryWarning;
- (void)showCharacterTestAnswerAnimation;
- (void)specialDismissKeyboard;
- (void)updateAllStateAfterChecked;
- (void)viewDidLoad;
@end

