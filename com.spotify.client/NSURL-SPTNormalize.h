//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (SPTNormalize)
- (id)canonicalURIForAccountsURI:(id)arg1;
- (_Bool)isSupportedAccountsURI:(id)arg1;
- (_Bool)isSupportedPlayURIPath:(id)arg1;
- (id)canonicalURIForPlayURI:(id)arg1;
- (id)spotifyURIWithSlashSeparatedPath:(id)arg1 query:(id)arg2;
- (id)canonicalURIForOpenURI:(id)arg1;
- (id)canonicalURIForSpotifyURI:(id)arg1;
@property(readonly, nonatomic, getter=spt_normalizedSpotifyURI) NSURL *normalizedSpotifyURI;
@property(readonly, nonatomic, getter=spt_normalizedURI) NSURL *normalizedURI;
@end

