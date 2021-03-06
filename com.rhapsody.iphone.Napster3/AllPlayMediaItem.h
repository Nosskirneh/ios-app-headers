//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AllPlayMediaItemInternal, NSString;

@interface AllPlayMediaItem : NSObject
{
    AllPlayMediaItemInternal *_mediaItemInternal;
}

@property(retain, nonatomic) AllPlayMediaItemInternal *mediaItemInternal; // @synthesize mediaItemInternal=_mediaItemInternal;
@property(copy, nonatomic) NSString *genre; // @dynamic genre;
@property(copy, nonatomic) NSString *userData; // @dynamic userData;
@property(nonatomic) int duration; // @dynamic duration;
@property(copy, nonatomic) NSString *channel; // @dynamic channel;
@property(copy, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *artist; // @dynamic artist;
@property(copy, nonatomic) NSString *album; // @dynamic album;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(copy, nonatomic) NSString *streamURL; // @dynamic streamURL;
- (void)dealloc;
- (id)initWithStreamURL:(id)arg1 andTitle:(id)arg2;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

@end

