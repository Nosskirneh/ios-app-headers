//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;

@protocol FNFCoreAudioDelegate
- (void)audioQueueDidChangeRunning:(_Bool)arg1;
- (void)audioQueueDidError:(NSError *)arg1 withStatus:(int)arg2;
- (void)audioQueueDidOutputForBuffer:(struct AudioQueueBuffer *)arg1;
@end

