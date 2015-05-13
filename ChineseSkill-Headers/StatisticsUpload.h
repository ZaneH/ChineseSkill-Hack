/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableData, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface StatisticsUpload : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
	NSMutableArray* _ma;
}
@property(retain, nonatomic) NSURLConnection* connection;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* ma;
@property(readonly, assign) Class superclass;
+ (id)sharedOperator;
- (void).cxx_destruct;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)handleError:(id)error;
- (void)uploadUserDataOneTime:(id)time;
@end
