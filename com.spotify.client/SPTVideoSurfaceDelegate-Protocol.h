//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTVideoSurfaceDelegate <NSObject>

@optional
- (void)videoSurfaceDidChangeVideoRect:(id <SPTVideoSurface>)arg1;
- (void)videoSurfaceDidDetachVideo:(id <SPTVideoSurface>)arg1;
- (void)videoSurfaceWillDetachVideo:(id <SPTVideoSurface>)arg1;
- (void)videoSurfaceDidAttachVideo:(id <SPTVideoSurface>)arg1;
- (void)videoSurfaceWillAttachVideo:(id <SPTVideoSurface>)arg1;
- (_Bool)videoSurface:(id <SPTVideoSurface>)arg1 shouldDisplayVideoForIdentity:(id <SPTVideoPlaybackIdentity>)arg2;
@end

