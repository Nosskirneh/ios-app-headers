//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GAKAudioSourceProtocol;

@protocol GAKAudioSink <NSObject>
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id <GAKAudioSourceProtocol>)arg2;
@end
