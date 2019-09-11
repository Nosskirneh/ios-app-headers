//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTVoiceSessionHandlingOptions : NSObject <NSCopying>
{
    _Bool _shouldPausePlayback;
    _Bool _shouldHandleVoiceCommand;
    unsigned long long _serviceEndpoint;
}

@property(nonatomic) unsigned long long serviceEndpoint; // @synthesize serviceEndpoint=_serviceEndpoint;
@property(nonatomic) _Bool shouldHandleVoiceCommand; // @synthesize shouldHandleVoiceCommand=_shouldHandleVoiceCommand;
@property(nonatomic) _Bool shouldPausePlayback; // @synthesize shouldPausePlayback=_shouldPausePlayback;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

