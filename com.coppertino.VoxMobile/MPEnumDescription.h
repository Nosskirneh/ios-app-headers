//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPTypeDescription.h"

@class NSMutableDictionary, NSString;

@interface MPEnumDescription : MPTypeDescription
{
    NSMutableDictionary *_values;
    _Bool _flagSet;
    NSString *_baseType;
}

@property(readonly, copy, nonatomic) NSString *baseType; // @synthesize baseType=_baseType;
@property(readonly, nonatomic, getter=isFlagsSet) _Bool flagSet; // @synthesize flagSet=_flagSet;
- (void).cxx_destruct;
- (id)allValues;
- (id)initWithDictionary:(id)arg1;

@end

