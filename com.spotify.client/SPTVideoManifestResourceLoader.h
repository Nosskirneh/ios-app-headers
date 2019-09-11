//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoManifestService, SPTVideoMediaURLConverter;
@protocol SPTVideoPlaybackIdentity;

@interface SPTVideoManifestResourceLoader : NSObject
{
    SPTVideoManifestService *_manifestService;
    SPTVideoMediaURLConverter *_mediaURLConverter;
    id <SPTVideoPlaybackIdentity> _identity;
}

@property(retain, nonatomic) id <SPTVideoPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(retain, nonatomic) SPTVideoMediaURLConverter *mediaURLConverter; // @synthesize mediaURLConverter=_mediaURLConverter;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
- (void).cxx_destruct;
- (void)loadManifestResource:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 manifestService:(id)arg2 mediaURLConverter:(id)arg3;

@end

