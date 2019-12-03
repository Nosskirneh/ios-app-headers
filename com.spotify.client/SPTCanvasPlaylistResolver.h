//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTaskCompletionSource;
@protocol SPTPlaylistModel;

@interface SPTCanvasPlaylistResolver : NSObject
{
    id <SPTPlaylistModel> _playlistModel;
    NSURL *_playlistURI;
    SPTaskCompletionSource *_completionSource;
}

+ (id)resolverError;
@property(retain, nonatomic) SPTaskCompletionSource *completionSource; // @synthesize completionSource=_completionSource;
@property(readonly, copy, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
- (void).cxx_destruct;
- (void)loadPlaylistURLs;
- (id)resolve;
- (id)initWithPlaylistModel:(id)arg1 playlistURI:(id)arg2;

@end

