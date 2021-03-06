//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession;

@interface JPSVolumeButtonHandler : NSObject
{
    _Bool _isStarted;
    CDUnknownBlockType _upBlock;
    CDUnknownBlockType _downBlock;
    AVAudioSession *_session;
}

+ (id)volumeButtonHandlerWithUpBlock:(CDUnknownBlockType)arg1 downBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) AVAudioSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioSessionInterrupted:(id)arg1;
- (void)setupSession;
- (void)stopHandler;
- (void)startHandler;
- (void)dealloc;

@end

