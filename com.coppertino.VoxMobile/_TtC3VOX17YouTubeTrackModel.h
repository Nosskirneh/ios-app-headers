//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface _TtC3VOX17YouTubeTrackModel : NSObject
{
    // Error parsing type: , name: sourceType
    // Error parsing type: , name: uuid
    // Error parsing type: , name: remoteId
    // Error parsing type: , name: title
    // Error parsing type: , name: channelTitle
    // Error parsing type: , name: channelId
    // Error parsing type: , name: publishedAt
    // Error parsing type: , name: duration
    // Error parsing type: , name: artworkURLString
    // Error parsing type: , name: openInYouTubeURL
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *openInYouTubeURL; // @synthesize openInYouTubeURL;
@property(nonatomic, readonly) NSURL *mediaURL;
@property(nonatomic, copy) NSString *artworkURLString; // @synthesize artworkURLString;
@property(nonatomic, readonly) NSURL *artworkURL;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic, copy) NSDate *publishedAt; // @synthesize publishedAt;
@property(nonatomic, copy) NSString *channelId; // @synthesize channelId;
@property(nonatomic, copy) NSString *channelTitle; // @synthesize channelTitle;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic, copy) NSString *remoteId; // @synthesize remoteId;
@property(nonatomic, copy) NSString *uuid; // @synthesize uuid;
@property(nonatomic, readonly) unsigned long long sourceType; // @synthesize sourceType;

@end

