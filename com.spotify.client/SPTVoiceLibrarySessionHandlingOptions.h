//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SPTVoiceLibrarySpeechProxyRequest;

@interface SPTVoiceLibrarySessionHandlingOptions : NSObject <NSCopying>
{
    _Bool _shouldPausePlayback;
    SPTVoiceLibrarySpeechProxyRequest *_speechProxyRequest;
}

@property(retain, nonatomic) SPTVoiceLibrarySpeechProxyRequest *speechProxyRequest; // @synthesize speechProxyRequest=_speechProxyRequest;
@property(nonatomic) _Bool shouldPausePlayback; // @synthesize shouldPausePlayback=_shouldPausePlayback;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

