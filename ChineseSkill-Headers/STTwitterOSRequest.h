/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccount, NSMutableData, NSString, NSDictionary, NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface STTwitterOSRequest : XXUnknownSuperclass <NSURLConnectionDelegate> {
	id _completionBlock;
	id _errorBlock;
	id _uploadProgressBlock;
	NSHTTPURLResponse* _httpURLResponse;
	NSMutableData* _data;
	ACAccount* _account;
	int _httpMethod;
	NSDictionary* _params;
	NSString* _baseURLString;
	NSString* _resource;
	double _timeoutInSeconds;
}
@property(retain, nonatomic) ACAccount* account;
@property(retain, nonatomic) NSString* baseURLString;
@property(copy, nonatomic) id completionBlock;
@property(retain, nonatomic) NSMutableData* data;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(copy, nonatomic) id errorBlock;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int httpMethod;
@property(retain, nonatomic) NSHTTPURLResponse* httpURLResponse;
@property(retain, nonatomic) NSDictionary* params;
@property(retain, nonatomic) NSString* resource;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) double timeoutInSeconds;
@property(copy, nonatomic) id uploadProgressBlock;
- (id)initWithAPIResource:(id)apiresource baseURLString:(id)string httpMethod:(int)method parameters:(id)parameters account:(id)account timeoutInSeconds:(double)seconds uploadProgressBlock:(id)block completionBlock:(id)block8 errorBlock:(id)block9;
- (void).cxx_destruct;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
- (void)connectionDidFinishLoading:(id)connection;
- (void)handleStreamingResponse:(id)response request:(id)request data:(id)data;
- (id)requestHeadersForRequest:(id)request;
- (id)startRequest;
@end

