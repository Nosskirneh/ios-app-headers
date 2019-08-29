//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol FNFPlayerAudioDecoder <NSObject>
- (void)reset;
- (_Bool)decodeToBuffer:(struct AudioQueueBuffer *)arg1 frame:(struct FNFFrameMetadata)arg2 frameData:(const char *)arg3;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 extraParameters:(NSDictionary *)arg2 errorCallback:(void (^)(NSError *))arg3;
@end

