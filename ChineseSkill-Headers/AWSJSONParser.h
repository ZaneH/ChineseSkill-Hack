/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AWSJSONParser : XXUnknownSuperclass {
}
+ (id)dictionaryForJsonData:(id)jsonData actionName:(id)name serviceDefinitionRule:(id)rule error:(id*)error;
+ (BOOL)failWithCode:(int)code description:(id)description error:(id*)error;
+ (id)findMemberName:(id)name structureRules:(id)rules;
+ (id)serializeList:(id)list values:(id)values target:(id)target error:(id*)error;
+ (id)serializeMap:(id)map values:(id)values target:(id)target error:(id*)error;
+ (id)serializeMember:(id)member value:(id)value target:(id)target error:(id*)error;
+ (id)serializeStructure:(id)structure values:(id)values target:(id)target error:(id*)error;
@end

