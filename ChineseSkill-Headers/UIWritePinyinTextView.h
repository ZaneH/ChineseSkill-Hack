/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIWritePinyinTextView : XXUnknownSuperclass {
	UILabel* _placeHolderLabel;
	NSString* _placeholder;
	UIColor* _placeholderColor;
}
@property(retain, nonatomic) UILabel* placeHolderLabel;
@property(retain, nonatomic) NSString* placeholder;
@property(retain, nonatomic) UIColor* placeholderColor;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)setText:(id)text;
- (void)textChanged:(id)changed;
@end

