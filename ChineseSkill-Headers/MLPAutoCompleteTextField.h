/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MLPAutoCompleteSortOperationDelegate.h"
#import "MLPAutoCompleteFetchOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UITableView, UIColor, NSOperationQueue, NSArray;
@protocol MLPAutoCompleteTextFieldDataSource, MLPAutoCompleteTextFieldDelegate;

@interface MLPAutoCompleteTextField : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, MLPAutoCompleteSortOperationDelegate, MLPAutoCompleteFetchOperationDelegate> {
	BOOL _sortAutoCompleteSuggestionsByClosestMatch;
	BOOL _applyBoldEffectToAutoCompleteSuggestions;
	BOOL _reverseAutoCompleteSuggestionsBoldEffect;
	BOOL _showTextFieldDropShadowWhenAutoCompleteTableIsOpen;
	BOOL _showAutoCompleteTableWhenEditingBegins;
	BOOL _disableAutoCompleteTableUserInteractionWhileFetching;
	BOOL _autoCompleteTableAppearsAsKeyboardAccessory;
	UITableView* _autoCompleteTableView;
	id<MLPAutoCompleteTextFieldDataSource> _autoCompleteDataSource;
	id<MLPAutoCompleteTextFieldDelegate> _autoCompleteDelegate;
	float _autoCompleteFontSize;
	NSString* _autoCompleteBoldFontName;
	NSString* _autoCompleteRegularFontName;
	int _maximumNumberOfAutoCompleteRows;
	float _autoCompleteRowHeight;
	float _autoCompleteTableCornerRadius;
	UIColor* _autoCompleteTableBorderColor;
	float _autoCompleteTableBorderWidth;
	UIColor* _autoCompleteTableBackgroundColor;
	UIColor* _autoCompleteTableCellBackgroundColor;
	UIColor* _autoCompleteTableCellTextColor;
	NSArray* _autoCompleteSuggestions;
	NSOperationQueue* _autoCompleteSortQueue;
	NSOperationQueue* _autoCompleteFetchQueue;
	NSString* _reuseIdentifier;
	CGColorRef _originalShadowColor;
	float _originalShadowOpacity;
	double _autoCompleteFetchRequestDelay;
	CGSize _autoCompleteTableOriginOffset;
	CGSize _originalShadowOffset;
	UIEdgeInsets _autoCompleteContentInsets;
	UIEdgeInsets _autoCompleteScrollIndicatorInsets;
}
@property(assign) BOOL applyBoldEffectToAutoCompleteSuggestions;
@property(retain) NSString* autoCompleteBoldFontName;
@property(assign, nonatomic) UIEdgeInsets autoCompleteContentInsets;
@property(retain) id<MLPAutoCompleteTextFieldDataSource> autoCompleteDataSource;
@property(assign) __weak id<MLPAutoCompleteTextFieldDelegate> autoCompleteDelegate;
@property(retain) NSOperationQueue* autoCompleteFetchQueue;
@property(assign) double autoCompleteFetchRequestDelay;
@property(assign) float autoCompleteFontSize;
@property(retain) NSString* autoCompleteRegularFontName;
@property(assign) float autoCompleteRowHeight;
@property(assign, nonatomic) UIEdgeInsets autoCompleteScrollIndicatorInsets;
@property(retain) NSOperationQueue* autoCompleteSortQueue;
@property(retain) NSArray* autoCompleteSuggestions;
@property(assign) BOOL autoCompleteTableAppearsAsKeyboardAccessory;
@property(retain, nonatomic) UIColor* autoCompleteTableBackgroundColor;
@property(retain, nonatomic) UIColor* autoCompleteTableBorderColor;
@property(assign, nonatomic) float autoCompleteTableBorderWidth;
@property(retain) UIColor* autoCompleteTableCellBackgroundColor;
@property(retain) UIColor* autoCompleteTableCellTextColor;
@property(assign) float autoCompleteTableCornerRadius;
@property(assign) CGSize autoCompleteTableOriginOffset;
@property(retain) UITableView* autoCompleteTableView;
@property(assign) BOOL autoCompleteTableViewHidden;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign) BOOL disableAutoCompleteTableUserInteractionWhileFetching;
@property(readonly, assign) unsigned hash;
@property(assign) int maximumNumberOfAutoCompleteRows;
@property(assign) CGColorRef originalShadowColor;
@property(assign) CGSize originalShadowOffset;
@property(assign) float originalShadowOpacity;
@property(retain) NSString* reuseIdentifier;
@property(assign) BOOL reverseAutoCompleteSuggestionsBoldEffect;
@property(assign) BOOL showAutoCompleteTableWhenEditingBegins;
@property(assign) BOOL showTextFieldDropShadowWhenAutoCompleteTableIsOpen;
@property(assign) BOOL sortAutoCompleteSuggestionsByClosestMatch;
@property(readonly, assign) Class superclass;
+ (float)autoCompleteTableHeightForTextField:(id)textField withNumberOfRows:(int)rows;
+ (CGRect)autoCompleteTableViewFrameForTextField:(id)textField;
+ (CGRect)autoCompleteTableViewFrameForTextField:(id)textField forNumberOfRows:(int)rows;
+ (id)newAutoCompleteTableViewForTextField:(id)textField;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (id)autoCompleteTableViewCellWithReuseIdentifier:(id)reuseIdentifier;
- (void)autoCompleteTermsDidFetch:(id)autoCompleteTerms;
- (void)autoCompleteTermsDidSort:(id)autoCompleteTerms;
- (BOOL)becomeFirstResponder;
- (void)beginObservingKeyPathsAndNotifications;
- (id)boldedString:(id)string withRange:(NSRange)range;
- (void)closeAutoCompleteTableView;
- (void)configureCell:(id)cell atIndexPath:(id)indexPath withAutoCompleteString:(id)autoCompleteString;
- (void)dealloc;
- (void)expandAutoCompleteTableViewForNumberOfRows:(int)rows;
- (void)expandDropDownAutoCompleteTableForNumberOfRows:(int)rows;
- (void)expandKeyboardAutoCompleteTableForNumberOfRows:(int)rows;
- (void)fetchAutoCompleteSuggestions;
- (void)finishedSearching;
- (void)initialize;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
- (void)registerAutoCompleteCellClass:(Class)aClass forCellReuseIdentifier:(id)cellReuseIdentifier;
- (void)registerAutoCompleteCellNib:(id)nib forCellReuseIdentifier:(id)cellReuseIdentifier;
- (void)resetDropDownAutoCompleteTableFrameForNumberOfRows:(int)rows;
- (void)resetKeyboardAutoCompleteTableFrameForNumberOfRows:(int)rows;
- (BOOL)resignFirstResponder;
- (void)restoreOriginalShadowProperties;
- (void)saveCurrentShadowProperties;
- (void)setAutoCompleteTableForDropDownAppearance;
- (void)setAutoCompleteTableForKeyboardAppearance;
- (void)setDefaultValuesForVariables;
- (void)setLineStyleForAutoCompleteTableView;
- (void)setNoneStyleForAutoCompleteTableView;
- (void)setRoundedRectStyleForAutoCompleteTableView;
- (void)stopObservingKeyPathsAndNotifications;
- (void)styleAutoCompleteTableForBorderStyle:(int)borderStyle;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)textFieldDidChangeWithNotification:(id)textField;
- (void)unregisterAutoCompleteCellForReuseIdentifier:(id)reuseIdentifier;
@end

