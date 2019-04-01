//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SPTBrowse : NSObject
{
}

+ (void)requestNewReleasesForCountry:(id)arg1 limit:(long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)requestFeaturedPlaylistsForCountry:(id)arg1 limit:(long long)arg2 offset:(long long)arg3 locale:(id)arg4 timestamp:(id)arg5 accessToken:(id)arg6 accessTokenType:(id)arg7 callback:(CDUnknownBlockType)arg8;
+ (id)newReleasesFromData:(id)arg1 withResponse:(id)arg2 error:(id *)arg3;
+ (id)createRequestForNewReleasesInCountry:(id)arg1 limit:(long long)arg2 offset:(long long)arg3 accessToken:(id)arg4 error:(id *)arg5;
+ (id)createRequestForFeaturedPlaylistsInCountry:(id)arg1 limit:(long long)arg2 offset:(long long)arg3 locale:(id)arg4 timestamp:(id)arg5 accessToken:(id)arg6 error:(id *)arg7;

@end

