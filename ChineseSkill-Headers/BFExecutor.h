/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface BFExecutor : XXUnknownSuperclass {
	id _block;
}
@property(copy) id block;
+ (id)defaultExecutor;
+ (id)executorWithBlock:(id)block;
+ (id)executorWithDispatchQueue:(dispatch_queue_s*)dispatchQueue;
+ (id)executorWithOperationQueue:(id)operationQueue;
+ (id)immediateExecutor;
+ (id)mainThreadExecutor;
- (id)initWithBlock:(id)block;
- (void).cxx_destruct;
- (void)execute:(id)execute;
@end

