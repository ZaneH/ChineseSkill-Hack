/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableData;

__attribute__((visibility("hidden")))
@interface CommnuciationWithSite : XXUnknownSuperclass {
	NSURLConnection* _connection;
	NSMutableData* _feedXML;
	int _nRetrivalType;
}
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSMutableData* feedXML;
@property(assign) int nRetrivalType;
+ (id)sharedOperator;
- (id)init;
- (void).cxx_destruct;
- (void)CheckAndAppendLessonItems:(id)items;
- (void)LogRegFromFB:(id)fb UserName:(id)name;
- (void)SaveFBImage:(id)image;
- (void)SaveFBImageWithDelay:(id)delay;
- (void)Start;
- (void)SyncMySentWordCharacterList:(int)list Unit:(int)unit Level:(int)level;
- (id)UpdateOneProgress:(id)progress Soure:(id)soure;
- (void)UploadProgressToSite;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)handleError:(id)error;
- (void)saveUserPicture:(id)picture;
@end

