/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableData;

__attribute__((visibility("hidden")))
@interface CheckPCodeEnable : XXUnknownSuperclass {
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
}
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSMutableData* feedXML;
+ (id)sharedOperator;
- (id)init;
- (void).cxx_destruct;
- (void)CheckEnable;
- (void)Start;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)handleError:(id)error;
@end

