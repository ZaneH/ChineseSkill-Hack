/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AWSXMLBuilder : XXUnknownSuperclass {
}
+ (void)applyNamespacesAndAttributesByRules:(id)rules params:(id)params xmlWriter:(id)writer;
+ (BOOL)failWithCode:(int)code description:(id)description error:(id*)error;
+ (BOOL)serializeList:(id)list name:(id)name rules:(id)rules xmlWriter:(id)writer error:(id*)error;
+ (BOOL)serializeMember:(id)member name:(id)name rules:(id)rules isPayloadType:(unsigned char)type xmlWriter:(id)writer error:(id*)error;
+ (BOOL)serializeStructure:(id)structure rules:(id)rules xmlWriter:(id)writer error:(id*)error isRootRule:(BOOL)rule;
+ (id)xmlBuildForDictionary:(id)dictionary actionName:(id)name serviceDefinitionRule:(id)rule error:(id*)error;
+ (id)xmlDataForDictionary:(id)dictionary actionName:(id)name serviceDefinitionRule:(id)rule error:(id*)error;
+ (id)xmlStringForDictionary:(id)dictionary actionName:(id)name serviceDefinitionRule:(id)rule error:(id*)error;
@end

