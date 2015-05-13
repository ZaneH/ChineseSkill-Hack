/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MLPAutoCompleteTextField, NSString;
@protocol MLPAutoCompleteFetchOperationDelegate, MLPAutoCompleteTextFieldDataSource;

@interface MLPAutoCompleteFetchOperation : XXUnknownSuperclass {
	NSString* _incompleteString;
	MLPAutoCompleteTextField* _textField;
	id<MLPAutoCompleteFetchOperationDelegate> _delegate;
	id<MLPAutoCompleteTextFieldDataSource> _dataSource;
}
@property(retain) id<MLPAutoCompleteTextFieldDataSource> dataSource;
@property(retain) id<MLPAutoCompleteFetchOperationDelegate> delegate;
@property(retain) NSString* incompleteString;
@property(retain) MLPAutoCompleteTextField* textField;
- (id)initWithDelegate:(id)delegate completionsDataSource:(id)source autoCompleteTextField:(id)field;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveSuggestions:(id)suggestions;
- (void)main;
@end

