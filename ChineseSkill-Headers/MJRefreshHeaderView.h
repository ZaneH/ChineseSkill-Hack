/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "MJRefreshBaseView.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface MJRefreshHeaderView : MJRefreshBaseView {
	NSDate* _lastUpdateTime;
}
@property(retain, nonatomic) NSDate* lastUpdateTime;
+ (id)header;
- (void).cxx_destruct;
- (void)setScrollView:(id)view;
- (void)setState:(int)state;
- (void)updateTimeLabel;
- (float)validY;
- (int)viewType;
@end

