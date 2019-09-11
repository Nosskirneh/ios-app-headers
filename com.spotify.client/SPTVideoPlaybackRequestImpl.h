//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackRequest-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTVideoPlaybackRequestImpl : NSObject <SPTVideoPlaybackRequest>
{
    _Bool _royaltyMedia;
    _Bool _audioOnlyAllowed;
    NSURL *_mediaURL;
    NSDictionary *_metadata;
}

@property(nonatomic, getter=isAudioOnlyAllowed) _Bool audioOnlyAllowed; // @synthesize audioOnlyAllowed=_audioOnlyAllowed;
@property(nonatomic, getter=isRoyaltyMedia) _Bool royaltyMedia; // @synthesize royaltyMedia=_royaltyMedia;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaURL:(id)arg1 metadata:(id)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

