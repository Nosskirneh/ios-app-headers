//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class AEAudioController;

@interface AEAudioControllerMessagePollThread : NSThread
{
    AEAudioController *_audioController;
    double _pollInterval;
}

@property(nonatomic) double pollInterval; // @synthesize pollInterval=_pollInterval;
- (void).cxx_destruct;
- (void)main;
- (id)initWithAudioController:(id)arg1;

@end

