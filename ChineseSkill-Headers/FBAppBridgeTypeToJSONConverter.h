/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface FBAppBridgeTypeToJSONConverter : XXUnknownSuperclass {
	NSMutableArray* _createdPasteboardNames;
}
@property(retain, nonatomic) NSMutableArray* createdPasteboardNames;
+ (id)appBridgeTypeFromJSON:(id)json;
- (id)convertedArrayFromArray:(id)array convertingToJSON:(BOOL)json;
- (id)convertedDictionaryFromDictionary:(id)dictionary convertingToJSON:(BOOL)json;
- (id)convertedObjectFromObject:(id)object convertingToJSON:(BOOL)json;
- (void)dealloc;
- (id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)jsondictionary;
- (id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)appBridgeTypes;
- (id)jsonFromData:(id)data tag:(id)tag;
@end
