//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTVoiceAudioLevelMonitor : NSObject
{
    CDStruct_a2d37825 _levelMonitorData;
}

@property(nonatomic) CDStruct_a2d37825 levelMonitorData; // @synthesize levelMonitorData=_levelMonitorData;
- (void)reset;
- (CDStruct_a2d37825)performLevelMonitoringForAudioBuffer:(const struct AudioBufferList *)arg1 frameCount:(unsigned int)arg2;

@end

