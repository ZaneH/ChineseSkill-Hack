/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "NSObject.h"


@protocol UITextFieldDelegate <NSObject>
@optional
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
- (void)textFieldDidBeginEditing:(id)textField;
- (void)textFieldDidEndEditing:(id)textField;
- (BOOL)textFieldShouldBeginEditing:(id)textField;
- (BOOL)textFieldShouldClear:(id)textField;
- (BOOL)textFieldShouldEndEditing:(id)textField;
- (BOOL)textFieldShouldReturn:(id)textField;
@end

