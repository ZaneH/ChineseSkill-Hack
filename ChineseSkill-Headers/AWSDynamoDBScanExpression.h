/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSDictionary;

@interface AWSDynamoDBScanExpression : XXUnknownSuperclass {
	NSDictionary* _scanFilter;
	NSDictionary* _exclusiveStartKey;
	NSNumber* _limit;
}
@property(retain, nonatomic) NSDictionary* exclusiveStartKey;
@property(retain, nonatomic) NSNumber* limit;
@property(retain, nonatomic) NSDictionary* scanFilter;
- (void).cxx_destruct;
@end

