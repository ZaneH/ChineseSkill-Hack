/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWSHTTPURLResponseSerializer <NSObject>
- (id)responseObjectForResponse:(id)response originalRequest:(id)request currentRequest:(id)request3 data:(id)data error:(id*)error;
- (BOOL)validateResponse:(id)response fromRequest:(id)request data:(id)data error:(id*)error;
@end

