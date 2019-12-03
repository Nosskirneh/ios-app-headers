//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@class NSString;

@interface TTTOrdinalNumberFormatter : NSNumberFormatter
{
    NSString *_ordinalIndicator;
    unsigned long long _grammaticalGender;
    unsigned long long _grammaticalNumber;
}

@property(nonatomic) unsigned long long grammaticalNumber; // @synthesize grammaticalNumber=_grammaticalNumber;
@property(nonatomic) unsigned long long grammaticalGender; // @synthesize grammaticalGender=_grammaticalGender;
@property(copy, nonatomic) NSString *ordinalIndicator; // @synthesize ordinalIndicator=_ordinalIndicator;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)svOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)zhHansOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)ptOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)nlOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)jaOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)itOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)gaOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)frOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)esOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)enOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)caOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)localizedOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)init;

@end
