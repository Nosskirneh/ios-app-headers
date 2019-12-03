//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKGuestModeServerRequest.h"

@class GCKOCSendMessageRequest;
@protocol GCKGuestModeToggleAudioRequestDelegate;

@interface GCKGuestModeToggleAudioRequest : GCKGuestModeServerRequest
{
    _Bool _playAudio;
    GCKOCSendMessageRequest *_sendMessageRequest;
    id <GCKGuestModeToggleAudioRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKGuestModeToggleAudioRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processPostError:(id)arg1;
- (void)processPostResponseData:(id)arg1 statusCode:(long long)arg2;
- (void)start;
@property(readonly, nonatomic) _Bool playAudio;
- (id)initWithEnvironmentScan:(id)arg1 playAudio:(_Bool)arg2;

@end
