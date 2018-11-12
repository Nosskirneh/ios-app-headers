//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTGLUEImageLoaderFactory-Protocol.h"

@class NSString;
@protocol SPTImageLoaderFactory;

@interface SPTGLUEImageLoaderFactoryImplementation : NSObject <SPTGLUEImageLoaderFactory>
{
    id <SPTImageLoaderFactory> _spotifyImageLoaderFactory;
}

@property(readonly, nonatomic) id <SPTImageLoaderFactory> spotifyImageLoaderFactory; // @synthesize spotifyImageLoaderFactory=_spotifyImageLoaderFactory;
- (void).cxx_destruct;
- (id)createImageLoaderForSourceIdentifier:(id)arg1;
- (id)initWithSpotifyImageLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

