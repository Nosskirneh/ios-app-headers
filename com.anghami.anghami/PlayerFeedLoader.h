//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class NSString;

@interface PlayerFeedLoader : ContentSectionLoader
{
    NSString *_requestedId;
    NSString *_playlistId;
}

@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
@property(retain, nonatomic) NSString *requestedId; // @synthesize requestedId=_requestedId;
- (void).cxx_destruct;
- (id)requestParams;
- (id)actionString;
- (int)type;

@end

