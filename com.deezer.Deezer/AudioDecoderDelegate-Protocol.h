//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AudioDecoder, NSError;

@protocol AudioDecoderDelegate <NSObject>
- (void)audioDecoderDidDecode:(AudioDecoder *)arg1 moreFrames:(unsigned long long)arg2 toFramePosition:(unsigned long long)arg3;
- (void)audioDecoderCanDecodeToTheEnd:(AudioDecoder *)arg1 totalFrames:(unsigned long long)arg2 sampleRate:(float)arg3;
- (void)audioDecoderDidSeek:(AudioDecoder *)arg1 fromFrame:(unsigned long long)arg2 toFrame:(unsigned long long)arg3 sampleRate:(float)arg4;
- (void)audioDecoderDidPause:(AudioDecoder *)arg1;
- (void)audioDecoderCanDecodeFurther:(AudioDecoder *)arg1 state:(int)arg2 availableFrames:(unsigned long long)arg3 totalFrames:(unsigned long long)arg4 sampleRate:(float)arg5;
- (void)audioDecoderDidFinishToDecode:(AudioDecoder *)arg1;
- (void)audioDecoderFailedToDecode:(AudioDecoder *)arg1 state:(int)arg2 error:(NSError *)arg3;
- (void)audioDecoderWillStartBuffering:(AudioDecoder *)arg1;
@end
