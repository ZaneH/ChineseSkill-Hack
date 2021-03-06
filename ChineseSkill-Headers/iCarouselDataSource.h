/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol iCarouselDataSource <NSObject>
@optional
- (id)carousel:(id)carousel placeholderViewAtIndex:(unsigned)index reusingView:(id)view;
@required
- (id)carousel:(id)carousel viewForItemAtIndex:(unsigned)index reusingView:(id)view;
- (unsigned)numberOfItemsInCarousel:(id)carousel;
@optional
- (unsigned)numberOfPlaceholdersInCarousel:(id)carousel;
@end

