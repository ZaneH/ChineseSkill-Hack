/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CSOneDownloadQueue : XXUnknownSuperclass {
	NSString* _priority;
	NSMutableArray* _queue;
	int _group;
}
@property(assign, nonatomic) int group;
@property(assign, nonatomic) NSString* priority;
@property(retain, nonatomic) NSMutableArray* queue;
- (void).cxx_destruct;
@end
