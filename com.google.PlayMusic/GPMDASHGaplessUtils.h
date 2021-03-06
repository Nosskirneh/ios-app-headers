//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMDASHGaplessUtils : NSObject
{
}

+ (_Bool)parseMVHD:(id)arg1 timescale:(unsigned int *)arg2 duration:(unsigned long long *)arg3 error:(id *)arg4;
+ (id)parseAsITunesSMPB:(id)arg1 error:(id *)arg2;
+ (id)parseSTSD:(id)arg1 error:(id *)arg2;
+ (unsigned int)parseSampleRateFromMP4A:(id)arg1 error:(id *)arg2;
+ (unsigned int)parseSampleRateFromMoov:(id)arg1 error:(id *)arg2;
+ (id)gaplessInfoFromHeader:(id)arg1 error:(id *)arg2;
- (id)init;

@end

