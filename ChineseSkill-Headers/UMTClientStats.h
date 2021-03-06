/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UMTClientStats : XXUnknownSuperclass <NSCoding> {
	int __successful_requests;
	int __failed_requests;
	int __last_request_spent_ms;
	BOOL __successful_requests_isset;
	BOOL __failed_requests_isset;
	BOOL __last_request_spent_ms_isset;
}
@property(assign, nonatomic, getter=failed_requests, setter=setFailed_requests:) int failed_requests;
@property(assign, nonatomic, getter=last_request_spent_ms, setter=setLast_request_spent_ms:) int last_request_spent_ms;
@property(assign, nonatomic, getter=successful_requests, setter=setSuccessful_requests:) int successful_requests;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithSuccessful_requests:(int)successful_requests failed_requests:(int)requests last_request_spent_ms:(int)ms;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (BOOL)failed_requestsIsSet;
- (BOOL)last_request_spent_msIsSet;
- (void)read:(id)read;
- (BOOL)successful_requestsIsSet;
- (void)unsetFailed_requests;
- (void)unsetLast_request_spent_ms;
- (void)unsetSuccessful_requests;
- (void)write:(id)write;
@end

