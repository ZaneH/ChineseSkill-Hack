/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsFileManager.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileManager, NSString, AWSMobileAnalyticsFile;

@interface AWSMobileAnalyticsDefaultFileManager : XXUnknownSuperclass <AWSMobileAnalyticsFileManager> {
	NSFileManager* _fileManager;
	AWSMobileAnalyticsFile* _rootFile;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) NSFileManager* fileManager;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) AWSMobileAnalyticsFile* rootFile;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithFileManager:(id)fileManager withRootFile:(id)rootFile;
- (void).cxx_destruct;
- (BOOL)containsRootPath:(id)path;
- (id)createDirectory:(id)directory error:(id*)error;
- (id)createFile:(id)file error:(id*)error;
- (id)createFileWithPath:(id)path error:(id*)error;
- (BOOL)deleteFile:(id)file error:(id*)error;
- (BOOL)deleteFileWithPath:(id)path error:(id*)error;
- (id)getDirectory:(id)directory error:(id*)error;
- (id)listFilesInDirectory:(id)directory error:(id*)error;
- (id)listFilesInDirectoryWithPath:(id)path error:(id*)error;
- (id)newInputStream:(id)stream error:(id*)error;
- (id)newInputStreamWithPath:(id)path error:(id*)error;
- (id)newOutputStream:(id)stream appendMode:(BOOL)mode error:(id*)error;
- (id)newOutputStreamWithPath:(id)path appendMode:(BOOL)mode error:(id*)error;
- (id)readDataFromFile:(id)file withFormat:(int)format withDataProcessor:(id)dataProcessor withError:(id*)error;
- (id)readDataFromFile:(id)file withFormat:(int)format withError:(id*)error;
- (id)readDataFromFile:(id)file withReader:(id)reader withDataProcessor:(id)dataProcessor withFormat:(int)format withError:(id*)error;
- (id)tryCreateReaderWithFile:(id)file withError:(id*)error;
- (id)tryCreateWriterWithFile:(id)file withError:(id*)error;
- (BOOL)writeData:(id)data toFile:(id)file withFormat:(int)format withDataProcessor:(id)dataProcessor withError:(id*)error;
- (BOOL)writeData:(id)data toFile:(id)file withFormat:(int)format withError:(id*)error;
- (BOOL)writeData:(id)data toFile:(id)file withWriter:(id)writer withDataProcessor:(id)dataProcessor withFormat:(int)format withError:(id*)error;
@end
