//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMA_SBJSON : NSObject
{
    _Bool humanReadable;
    _Bool sortKeys;
    unsigned long long maxDepth;
    unsigned long long depth;
    const char *c;
    id parsingLocale;
}

+ (void)initialize;
@property unsigned long long maxDepth; // @synthesize maxDepth;
@property _Bool sortKeys; // @synthesize sortKeys;
@property _Bool humanReadable; // @synthesize humanReadable;
- (_Bool)scanIsAtEnd;
- (_Bool)scanNumber:(id *)arg1 error:(id *)arg2;
- (_Bool)scanHexQuad:(unsigned short *)arg1 error:(id *)arg2;
- (_Bool)scanUnicodeChar:(unsigned short *)arg1 error:(id *)arg2;
- (_Bool)scanRestOfString:(id *)arg1 error:(id *)arg2 objectkey:(_Bool)arg3;
- (_Bool)scanRestOfDictionary:(id *)arg1 error:(id *)arg2;
- (_Bool)scanRestOfArray:(id *)arg1 error:(id *)arg2;
- (_Bool)scanRestOfNull:(id *)arg1 error:(id *)arg2;
- (_Bool)scanRestOfFalse:(id *)arg1 error:(id *)arg2;
- (_Bool)scanRestOfTrue:(id *)arg1 error:(id *)arg2;
- (_Bool)scanValue:(id *)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)fragmentWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 allowScalar:(_Bool)arg2 error:(id *)arg3;
- (_Bool)appendString:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (_Bool)appendDictionary:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (_Bool)appendArray:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (_Bool)appendValue:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (id)indent;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithFragment:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1 allowScalar:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

