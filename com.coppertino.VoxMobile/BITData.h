//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BITBase.h"

#import "NSCoding-Protocol.h"

@class BITTelemetryData;

@interface BITData : BITBase <NSCoding>
{
    BITTelemetryData *_baseData;
}

@property(retain, nonatomic) BITTelemetryData *baseData; // @synthesize baseData=_baseData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializeToDictionary;

@end

