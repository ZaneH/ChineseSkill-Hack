/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "NSFastEnumeration.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface AWSBackgroundQueue : XXUnknownSuperclass <NSFastEnumeration> {
	NSMutableArray* _blockArray;
}
@property(retain, nonatomic) NSMutableArray* blockArray;
+ (id)emptyQueue;
- (id)init;
- (void).cxx_destruct;
- (void)addBackgroundTaskUsingBlock:(id)block;
- (unsigned)count;
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
@end

