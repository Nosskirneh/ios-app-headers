//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMRAIDAbstractProperties.h"

@interface SASMRAIDOrientationProperties : SASMRAIDAbstractProperties
{
    _Bool _allowOrientationChange;
    long long _forceOrientation;
}

@property(nonatomic) long long forceOrientation; // @synthesize forceOrientation=_forceOrientation;
@property(nonatomic) _Bool allowOrientationChange; // @synthesize allowOrientationChange=_allowOrientationChange;
- (_Bool)isStringAValidOrientation:(id)arg1;
- (long long)orientationFromString:(id)arg1;
- (id)stringFromOrientation:(long long)arg1;
- (_Bool)isInvalidDictionary:(id)arg1;
- (void)fillWithDefaultValues;
- (id)dictionaryFromValues;
- (_Bool)fillWithDictionary:(id)arg1;
- (id)init;

@end

