//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_Playlist, NSString;

@interface GTLRSJ_PlaylistsMutateRequest : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRSJ_Playlist *create; // @dynamic create;
@property(copy, nonatomic) NSString *deleteProperty; // @dynamic deleteProperty;
@property(retain, nonatomic) GTLRSJ_Playlist *update; // @dynamic update;

@end

