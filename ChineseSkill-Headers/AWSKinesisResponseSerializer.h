/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSJSONResponseSerializer.h"


@interface AWSKinesisResponseSerializer : AWSJSONResponseSerializer {
}
@property(assign, nonatomic) Class outputClass;
+ (void)initialize;
+ (id)serializerWithOutputClass:(Class)outputClass resource:(id)resource actionName:(id)name;
- (id)responseObjectForResponse:(id)response originalRequest:(id)request currentRequest:(id)request3 data:(id)data error:(id*)error;
@end

