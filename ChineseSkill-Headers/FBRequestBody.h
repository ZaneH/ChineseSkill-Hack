/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSMutableData;

@interface FBRequestBody : XXUnknownSuperclass {
	NSMutableData* _mutableData;
}
@property(readonly, retain, nonatomic) NSData* data;
@property(readonly, retain, nonatomic) NSMutableData* mutableData;
+ (id)mimeContentType;
- (id)init;
- (void)appendRecordBoundary;
- (void)appendUTF8:(id)a8;
- (void)appendWithKey:(id)key dataValue:(id)value logger:(id)logger;
- (void)appendWithKey:(id)key formValue:(id)value logger:(id)logger;
- (void)appendWithKey:(id)key imageValue:(id)value logger:(id)logger;
- (void)dealloc;
@end

