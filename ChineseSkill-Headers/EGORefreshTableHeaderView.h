/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, CALayer, UIActivityIndicatorView;
@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView : XXUnknownSuperclass {
	id _delegate;
	int _state;
	UILabel* _lastUpdatedLabel;
	UILabel* _statusLabel;
	CALayer* _arrowImage;
	UIActivityIndicatorView* _activityView;
}
@property(assign, nonatomic) id<EGORefreshTableHeaderDelegate> delegate;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame arrowImageName:(id)name textColor:(id)color;
- (void)dealloc;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)egoRefreshScrollViewDataSource;
- (void)egoRefreshScrollViewDidEndDragging:(id)egoRefreshScrollView;
- (void)egoRefreshScrollViewDidScroll:(id)egoRefreshScrollView;
- (void)refreshLastUpdatedDate;
- (void)setState:(int)state;
@end

