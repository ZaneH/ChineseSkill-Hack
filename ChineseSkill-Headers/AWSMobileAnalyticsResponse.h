/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSData, NSString, NSDictionary, NSError;
@protocol AWSMobileAnalyticsRequest;

@protocol AWSMobileAnalyticsResponse <NSObject>
@property(assign, nonatomic) int code;
@property(readonly, assign, nonatomic) double connectionTimeout;
@property(readonly, assign, nonatomic) BOOL didTimeout;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) NSDictionary* headers;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) id<AWSMobileAnalyticsRequest> originatingRequest;
@property(assign, nonatomic) long requestSize;
@property(readonly, assign, nonatomic) int requiredAttempts;
@property(readonly, assign, nonatomic) NSData* response;
@property(assign, nonatomic) long responseSize;
@property(readonly, assign, nonatomic) double timeToComplete;
- (void)addHeader:(id)header withName:(id)name;
- (id)getHeaderForName:(id)name;
@end

