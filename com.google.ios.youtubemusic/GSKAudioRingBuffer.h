//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GSKAudioRingBuffer : NSObject
{
    NSMutableData *_data;
    long long _tail;
    long long _sampleSize;
    long long _numberOfSamples;
}

- (void).cxx_destruct;
- (id)mutableSubdataWithRange:(struct _NSRange)arg1;
- (id)mutableData;
- (void)reset;
- (long long)numberOfSamples;
- (void)appendData:(id)arg1;
- (id)initWithSize:(long long)arg1 sampleSize:(long long)arg2;

@end

