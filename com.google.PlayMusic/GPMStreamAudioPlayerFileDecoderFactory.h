//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMAudioPlayerFileDecoderFactory-Protocol.h"

@class NSString;
@protocol GPMAudioPlayerAsyncReaderFactory;

@interface GPMStreamAudioPlayerFileDecoderFactory : NSObject <GPMAudioPlayerFileDecoderFactory>
{
    id <GPMAudioPlayerAsyncReaderFactory> _asyncReaderFactory;
}

- (void).cxx_destruct;
- (void)reportError:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)decoderForPlayerItem:(id)arg1 startTime:(double)arg2 delegate:(id)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithAsyncReaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

