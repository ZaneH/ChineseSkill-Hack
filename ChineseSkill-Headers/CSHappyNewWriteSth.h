/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITextView, UIButton, UIView;
@protocol CSHappyNewWriteSthDelegate;

__attribute__((visibility("hidden")))
@interface CSHappyNewWriteSth : XXUnknownSuperclass {
	id<CSHappyNewWriteSthDelegate> _delegate;
	UITextView* _textView;
	UIView* _containerView;
	UIButton* _cancelBtn;
	UIButton* _confirmBtn;
	UIButton* _cancelBtnBG;
}
@property(assign, nonatomic) __weak UIButton* cancelBtn;
@property(assign, nonatomic) __weak UIButton* cancelBtnBG;
@property(assign, nonatomic) __weak UIButton* confirmBtn;
@property(assign, nonatomic) __weak UIView* containerView;
@property(assign, nonatomic) __weak id<CSHappyNewWriteSthDelegate> delegate;
@property(assign, nonatomic) __weak UITextView* textView;
- (id)init;
- (void).cxx_destruct;
- (void)cancelBtn:(id)btn;
- (void)clickedConfirmBtn:(id)btn;
- (void)setFrame;
@end

