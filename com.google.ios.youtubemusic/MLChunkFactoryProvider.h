//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMDefaultChunkFactoryProvider.h"

#import "YTHotConfigObserver-Protocol.h"

@class NSString, YTHotConfig;

@interface MLChunkFactoryProvider : HAMDefaultChunkFactoryProvider <YTHotConfigObserver>
{
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _useTolerantMP4Parsing
    YTHotConfig *_hotConfig;
}

- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (id)chunkFactoryForFormat:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

