//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TTTArrayFormatter : NSFormatter
{
    _Bool _usesAbbreviatedConjunction;
    _Bool _usesSerialDelimiter;
    unsigned long long _arrayStyle;
    NSString *_delimiter;
    NSString *_separator;
    NSString *_conjunction;
    NSString *_abbreviatedConjunction;
}

+ (id)localizedStringFromArray:(id)arg1 arrayStyle:(unsigned long long)arg2;
@property(nonatomic) _Bool usesSerialDelimiter; // @synthesize usesSerialDelimiter=_usesSerialDelimiter;
@property(nonatomic) _Bool usesAbbreviatedConjunction; // @synthesize usesAbbreviatedConjunction=_usesAbbreviatedConjunction;
@property(copy, nonatomic) NSString *abbreviatedConjunction; // @synthesize abbreviatedConjunction=_abbreviatedConjunction;
@property(copy, nonatomic) NSString *conjunction; // @synthesize conjunction=_conjunction;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(copy, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(nonatomic) unsigned long long arrayStyle; // @synthesize arrayStyle=_arrayStyle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)arrayFromString:(id)arg1;
- (id)stringFromArray:(id)arg1 rangesOfComponents:(id *)arg2;
- (id)stringFromArray:(id)arg1;
- (id)init;

@end

