/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface CSRecordVolumeIndicator : XXUnknownSuperclass {
	UIColor* _trackTintColor;
	UIColor* _progressTintColor;
	float _progress;
}
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIColor* progressTintColor;
@property(retain, nonatomic) UIColor* trackTintColor;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)drawRect:(CGRect)rect;
@end

