//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NormalizedWaveform-Protocol.h"

@class NSData, NSNumber, NSString;

@interface DefaultWaveform : NSObject <NormalizedWaveform>
{
    NSData *_data;
    NSNumber *_height;
}

+ (id)waveform;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)sampleFilePath;
- (id)sampleData;
- (void)loadSampleData;
- (id)normalizedSamplesOfLength:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

