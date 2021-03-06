/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface DACircularProgressView : XXUnknownSuperclass {
	float _indeterminateDuration;
}
@property(assign, nonatomic) int clockwiseProgress;
@property(assign, nonatomic) int indeterminate;
@property(assign, nonatomic) float indeterminateDuration;
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIColor* progressTintColor;
@property(assign, nonatomic) int roundedCorners;
@property(assign, nonatomic) float thicknessRatio;
@property(retain, nonatomic) UIColor* trackTintColor;
+ (void)initialize;
+ (Class)layerClass;
- (id)init;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (id)circularProgressLayer;
- (void)didMoveToWindow;
- (void)setProgress:(float)progress animated:(BOOL)animated;
- (void)setProgress:(float)progress animated:(BOOL)animated initialDelay:(double)delay;
@end

