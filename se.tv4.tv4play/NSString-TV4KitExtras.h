//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TV4KitExtras)
+ (id)stringWithTimeLeft:(double)arg1;
+ (id)stringWithElapsedTime:(double)arg1;
+ (id)stringWithTime:(double)arg1 negative:(_Bool)arg2;
- (id)localized;
- (id)trimWhiteSpaces;
- (_Bool)containsSubString:(id)arg1;
- (id)urlifySwedishCharacters;
- (_Bool)isNumeric;
- (id)decodeURL;
- (id)encodeURL;
- (id)slug;
- (id)capitalizedFirstString;
- (double)msToSeconds;
- (id)date;
- (id)dateFromTV4String;
- (id)videoPlazaTag;
@end

