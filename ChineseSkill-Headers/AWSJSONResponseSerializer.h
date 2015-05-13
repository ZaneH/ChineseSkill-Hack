/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AWSHTTPURLResponseSerializer.h"

@class NSString, NSDictionary;

@interface AWSJSONResponseSerializer : XXUnknownSuperclass <AWSHTTPURLResponseSerializer> {
	Class _outputClass;
	NSDictionary* _serviceDefinitionJSON;
	NSString* _actionName;
}
@property(retain, nonatomic) NSString* actionName;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) Class outputClass;
@property(retain, nonatomic) NSDictionary* serviceDefinitionJSON;
@property(readonly, assign) Class superclass;
+ (void)initialize;
+ (id)serializerWithResource:(id)resource actionName:(id)name;
- (id)initWithOutputClass:(Class)outputClass;
- (void).cxx_destruct;
- (id)responseObjectForResponse:(id)response originalRequest:(id)request currentRequest:(id)request3 data:(id)data error:(id*)error;
- (BOOL)validateResponse:(id)response fromRequest:(id)request data:(id)data error:(id*)error;
@end

