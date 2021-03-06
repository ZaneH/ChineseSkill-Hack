/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UMANSBJsonParser.h"
#import "UMANSBJsonBase.h"


@protocol UMANSBJsonParser
- (id)objectWithString:(id)string;
@end

@interface UMANSBJsonParser : UMANSBJsonBase <UMANSBJsonParser> {
	const char* c;
}
+ (void)initialize;
- (id)fragmentWithString:(id)string;
- (id)objectWithString:(id)string;
- (BOOL)scanHexQuad:(unsigned short*)quad;
- (BOOL)scanIsAtEnd;
- (BOOL)scanNumber:(id*)number;
- (BOOL)scanRestOfArray:(id*)array;
- (BOOL)scanRestOfDictionary:(id*)dictionary;
- (BOOL)scanRestOfFalse:(id*)aFalse;
- (BOOL)scanRestOfNull:(id*)null;
- (BOOL)scanRestOfString:(id*)string;
- (BOOL)scanRestOfTrue:(id*)aTrue;
- (BOOL)scanUnicodeChar:(unsigned short*)aChar;
- (BOOL)scanValue:(id*)value;
@end

