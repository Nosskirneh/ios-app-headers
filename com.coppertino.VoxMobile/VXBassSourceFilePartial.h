//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VXBassSourceFile.h"

#import "VXBassPartialSourceProtocol-Protocol.h"

@class NSString;

@interface VXBassSourceFilePartial : VXBassSourceFile <VXBassPartialSourceProtocol>
{
    double _partialFileTotalLength;
    unsigned int _partialEndSync;
    unsigned int _partialStartSync;
    _Bool _loadInMemory;
    double _startPosition;
}

@property(nonatomic) _Bool loadInMemory; // @synthesize loadInMemory=_loadInMemory;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
- (double)downloadProgress;
- (unsigned long long)byteRate;
- (void)updatePartialFileEndSync;
- (void)setCurrentPosition:(double)arg1;
- (double)currentPosition;
- (double)totalLength;
- (void)startHistogram;
- (_Bool)reuseWithStartPosition:(double)arg1 totalLength:(double)arg2;
- (void)setMixerMatrix:(id)arg1;
- (void)deallocateSourceHandler;
- (void)generateEndSync;
- (id)initPartialWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 loadInMemory:(_Bool)arg4 startPosition:(double)arg5 totalLength:(double)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

