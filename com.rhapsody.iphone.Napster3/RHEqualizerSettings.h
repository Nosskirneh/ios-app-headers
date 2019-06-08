//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSNumber, RHEvenEarprintModel;

@interface RHEqualizerSettings : NSObject <NSCoding>
{
    NSArray *_earprints;
    RHEvenEarprintModel *_selectedEarprint;
    NSNumber *_equalizerPresetIndex;
}

@property(retain, nonatomic) NSNumber *equalizerPresetIndex; // @synthesize equalizerPresetIndex=_equalizerPresetIndex;
@property(retain, nonatomic) RHEvenEarprintModel *selectedEarprint; // @synthesize selectedEarprint=_selectedEarprint;
@property(copy, nonatomic) NSArray *earprints; // @synthesize earprints=_earprints;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

