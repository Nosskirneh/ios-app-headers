//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVideoPlaybackIdentity, SPTVideoResourceLoaderInternal;

@protocol SPTVideoMediaExtension <NSObject>
- (id <SPTVideoResourceLoaderInternal>)resourceLoaderForIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
- (_Bool)isPlayableForIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
@end

