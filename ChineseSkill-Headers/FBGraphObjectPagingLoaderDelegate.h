/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBGraphObjectPagingLoaderDelegate <NSObject>
@optional
- (void)pagingLoader:(id)loader didLoadData:(id)data;
- (void)pagingLoader:(id)loader handleError:(id)error;
- (void)pagingLoader:(id)loader willLoadURL:(id)url;
- (void)pagingLoaderDidFinishLoading:(id)pagingLoader;
- (void)pagingLoaderWasCancelled:(id)cancelled;
@end

