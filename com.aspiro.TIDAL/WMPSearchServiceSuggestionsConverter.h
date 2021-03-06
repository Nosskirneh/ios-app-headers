//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMPSearchServiceSuggestionsConverter : NSObject
{
}

+ (id)validationRequirementsForPlaylist;
+ (id)validationRequirementsForArtist;
+ (id)validationRequirementsForVideo;
+ (id)validationRequirementsForTrack;
+ (id)validationRequirementsForAlbum;
+ (id)validationRequirementsForMainStructure;
+ (_Bool)isValidJSON:(id)arg1 perRequirements:(id)arg2;
+ (id)artistsStringFromJSON:(id)arg1;
+ (id)convertVideosUsingJSONObject:(id)arg1;
+ (id)convertTracksUsingJSONObject:(id)arg1;
+ (id)convertPlaylistsUsingJSONObject:(id)arg1;
+ (id)convertArtistsUsingJSONObject:(id)arg1;
+ (id)convertAlbumsUsingJSONObject:(id)arg1;
+ (id)convertTopHitsUsingJSONObject:(id)arg1;
+ (id)convertSuggestionsUsingJSONObject:(id)arg1 requestedTypes:(id)arg2;

@end

