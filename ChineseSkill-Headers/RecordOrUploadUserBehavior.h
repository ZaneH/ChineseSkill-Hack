/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RecordOrUploadUserBehavior : XXUnknownSuperclass {
	BOOL _db_mutex_lock;
	BOOL _upload_mutex_lock;
	BOOL _isUploading;
	NSMutableArray* _StatistDataArray;
	NSTimer* _timer;
	int _nSendLine;
	int _nTryTime;
}
@property(retain, nonatomic) NSMutableArray* StatistDataArray;
@property(assign, nonatomic) BOOL db_mutex_lock;
@property(assign, nonatomic) BOOL isUploading;
@property(assign) int nSendLine;
@property(assign) int nTryTime;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) BOOL upload_mutex_lock;
+ (id)sharedOperator;
- (id)init;
- (void).cxx_destruct;
- (void)AppendDBData:(id)data;
- (void)Repeat_CheckAndUpload;
- (void)Start;
- (void)processUpload;
- (void)uploadFail;
- (BOOL)uploadOneTime;
- (void)uploadSuccess;
- (void)writeToFileWithString:(id)string;
@end

